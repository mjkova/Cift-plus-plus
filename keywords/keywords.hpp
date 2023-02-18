#ifndef KEYWORDS_hpp
#define KEYWORDS_hpp

namespace Keywords {
    // Types
    static const char* _string = "string";
    static const char* _int = "int";
    static const char* _bool = "bool";
    static const char* _float = "float";
    static const char* _void = "void";

    // Type behaviours
    static const char* _const = "const";
    static const char* _global = "global";
    static const char* _public = "public";
    static const char* _private = "private";

    // Operators
    static const char _equal = '=';
    static const char _multiply = '*';
    static const char _addition = '+';
    static const char _subtraction = '-';
    static const char _modulo = '%';
    static const char _power = '^';
    static const char _divide = '/';
    static const char _not = '!';
    static const char* _isqual = "==";
    static const char* _and = "and";
    static const char* _or = "or";
    static const char _gt = '<';
    static const char _lt = '>';

    // Other characters
    static const char _openingP = '(';
    static const char _closingP = ')';
    static const char _openingB = '[';
    static const char _closingB = ']';
    static const char _openingC = '{';
    static const char _closingC = '}';
    static const char _endline = ';';

    // String Characters
    static const char _startStringChar = '\\';
    static const char _newline = 'n';
    static const char _tab = 't';

    // Header keywords
    static const char _startHeaderChar = '#';
    static const char* _use = "use";
    static const char* _include = "include";
    static const char* _export = "export";
    static const char* _define = "define";
    static const char* _ifndef = "ifndef";
    static const char* _endif = "endif";

    // Comments
    static const char* _comment = "//";
    static const char* _startcomment = "/*";
    static const char* _endcomment = "*/";

    // Logic
    static const char* _if = "if";
    static const char* _else = "else";
    static const char* _switch = "switch";
    static const char* _case = "case";
    static const char* _try = "try";
    static const char* _catch = "catch";

    // Function
    // syntax function<TYPE> name(args)
    static const char* _startFunction = "function";
    static const char* _return = "return";

    // Loops
    static const char* _while = "while";
    static const char* _for = "for";
    static const char* _break = "break";
}

#endif
