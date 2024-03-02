//
// Created by sr9000 on 02/03/24.
//

#ifndef LEX_TESTS_FSM_H
#define LEX_TESTS_FSM_H

#include "lexem.h"

void read(char& cache, std::istream& stream);
std::pair<int, Lexem> tick(int state, std::istream& stream, char& cache);

#endif // LEX_TESTS_FSM_H
