#ifndef PL0TOKEN_H
#define PL0TOKEN_H

enum Pl0TokenClass
{
   CLASS_KEYWORD,
   CLASS_IDENTIFIER,
   CLASS_DELIMITER,
   CLASS_CONSTANTS,
   CLASS_OPERATORS,
   CLASS_UNKNOWN
};

enum Pl0TokenClass getTokenClass(int tokenType);

enum Pl0TokenType
{
   T_NULL,
   T_UNKNOWN,
   T_EOF,

   T_CONST,
   T_VAR,

   T_PROCEDURE,
   T_BEGIN,
   T_END,
   T_CALL,
   T_IF,
   T_THEN,
   T_WHILE,
   T_DO,
   T_ODD,
   T_QUESTIONMARK,
   T_EXCLAMATIOMARK,

   T_MULT,
   T_MINUS,
   T_PLUS,
   T_DIV,

   T_ASSIGN,

   T_EQUAL,
   T_GREATERTHEN,
   T_LESSTHEN,
   T_LESSEQUAL,
   T_GREATEREQUAL,
   T_NOTEQUAL,

   T_OPENPARENTHESIS,
   T_CLOSEPARENTHESIS,

   T_COMMA,
   T_SEMICOLON,
   T_DOT,

   T_IDENT,
   T_NUMBER
};

#endif