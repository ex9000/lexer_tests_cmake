#ifndef LEXER_H
#define LEXER_H

#include "lexem.h"
#include <iostream>
#include <string>
#include <vector>

class Lexer {
public:
    Lexer(std::istream&);
    virtual ~Lexer();
    Lexem getNextLexem();

protected:
private:
    char cache;
    int state;
    std::istream& stream;
};

#endif // LEXER_H
