//
// Created by sr9000 on 02/03/24.
//

#ifndef LEX_TESTS_SHUNTINGYARD_H
#define LEX_TESTS_SHUNTINGYARD_H

#include "Lexer.h"
#include "lexem.h"
#include <iostream>
#include <string>
#include <vector>

class ShuntingYard {
public:
    ShuntingYard(std::istream&);
    virtual ~ShuntingYard();
    Lexem getNextLexem();

protected:
private:
    Lexer lexer;
};

#endif // LEX_TESTS_SHUNTINGYARD_H
