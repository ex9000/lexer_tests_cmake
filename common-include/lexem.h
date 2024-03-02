#ifndef FSM_H_INCLUDED
#define FSM_H_INCLUDED

#include <iostream>
#include <string>
#include <vector>

using Lexem = std::pair<std::string, std::string>;

const Lexem LEX_EMPTY = { "", "" };
const Lexem LEX_ERROR = { "error", "" };
const Lexem LEX_EOF = { "end", "" };

#endif // FSM_H_INCLUDED
