#include <tree_sitter/parser.h>

#include <vector>
#include <cwctype>
#include <cstring>
#include <cassert>
#include <iostream>

enum TokenType {
  START,
  INDENT,
  DEDENT,
  NEWLINE
};

uint32_t INDENT_SPACES = 2;

namespace {

  using std::vector;
  using std::iswspace;
  using std::memcpy;
  using namespace std;

  struct Scanner {

    vector<uint16_t> indent_stack;

    Scanner() {
      deserialize(NULL, 0);
    }

    unsigned serialize(unsigned char *buffer) {
      size_t i = 0;

      vector<uint16_t>::iterator
        iter = indent_stack.begin() + 1,
        end = indent_stack.end();

      for (; iter != end && i < TREE_SITTER_SERIALIZATION_BUFFER_SIZE; ++iter) {
        buffer[i++] = *iter;
      }

      return i;
    }

    void deserialize(const unsigned char *buffer, unsigned length) {
      indent_stack.clear();
      indent_stack.push_back(0);

      if (length > 0) {
        size_t i = 0;

        for (; i < length; i++) {
          indent_stack.push_back(buffer[i]);
        }
      }
    }

    void advance(TSLexer *lexer) {
      lexer->advance(lexer, false);
    }

    void skip(TSLexer *lexer) {
      lexer->advance(lexer, true);
    }

    uint32_t get_column(TSLexer *lexer) {
      uint32_t start_column = UINT32_MAX;

      if (lexer->lookahead != 0) {
        start_column = lexer->get_column(lexer);
      }

      return start_column;
    }

    bool scan(TSLexer *lexer, const bool *valid_symbols) {
      uint32_t start_column = get_column(lexer);
      bool has_newline = false;
      uint32_t spaces = 0;

      for (;;) {
        if (lexer->lookahead == '\n') {
          has_newline = true;
          spaces = 0;
          skip(lexer);
        } else if (lexer->lookahead == '\t') {
          spaces += INDENT_SPACES;
          skip(lexer);
        } else if (lexer->lookahead == ' ') {
          spaces++;
          skip(lexer);
        } else if (lexer->lookahead == 0) {
          if (valid_symbols[DEDENT] && indent_stack.size() > 1) {
            indent_stack.pop_back();
            lexer->result_symbol = DEDENT;
            return true;
          }

          if (valid_symbols[START]) {
            lexer->result_symbol = START;
            return true;
          }

          if (valid_symbols[NEWLINE]) {
            lexer->result_symbol = NEWLINE;
            return true;
          }

          break;
        } else {
          break;
        }
      }

      uint32_t indent = spaces / INDENT_SPACES;

      // First item should never be indented. If there is indentation then make
      // sure to remove it from the indent stack. Goal is to error when
      // indentation in first item in document, but recover rest of indentation
      // structure from the document. The first item will be considered level
      // zero in that error case.
      if (valid_symbols[START]) {
        if (indent == 0) {
          lexer->result_symbol = START;
          return true;
        } else {
          indent_stack.pop_back();
          return false;
        }
      }

      if (has_newline || start_column == 0) {
        if (indent > indent_stack.back() && valid_symbols[INDENT]) {
          indent_stack.push_back(indent);
          lexer->result_symbol = INDENT;
          return true;
        }

        if (indent < indent_stack.back() && valid_symbols[DEDENT]) {
          indent_stack.pop_back();
          lexer->result_symbol = DEDENT;
          return true;
        }

        if (has_newline) {
          if (valid_symbols[NEWLINE]) {
            lexer->result_symbol = NEWLINE;
            return true;
          }
        }
      }
      return false;
    }
  };

}

extern "C" {

  void * tree_sitter_outline_external_scanner_create() {
    return new Scanner();
  }

  void tree_sitter_outline_external_scanner_destroy(void *payload) {
    Scanner *scanner = static_cast<Scanner *>(payload);
    delete scanner;
  }

  unsigned tree_sitter_outline_external_scanner_serialize(
    void *payload,
    char *buffer
  ) {
    Scanner *scanner = static_cast<Scanner *>(payload);
    return scanner->serialize((unsigned char *)buffer);
  }

  void tree_sitter_outline_external_scanner_deserialize(
    void *payload,
    const char *buffer,
    unsigned length
  ) {
    Scanner *scanner = static_cast<Scanner *>(payload);
    scanner->deserialize((unsigned char *)buffer, length);
  }

  bool tree_sitter_outline_external_scanner_scan(
    void *payload,
    TSLexer *lexer,
    const bool *valid_symbols
  ) {
    Scanner *scanner = static_cast<Scanner *>(payload);
    return scanner->scan(lexer, valid_symbols);
  }

}
