//=============================================================================
// Filename:  Scissors.hpp
// Authors:  Lucas Jensen
//           Neil Johnson
//           David McClung
//           John Neubauer
//           Adam Sugarman
// Date:  5/15/17
// Purpose:  "Rock, Paper, Scissors" Scissors Class specification file
//============================================================================

#ifndef SCISSORS_HPP
#define SCISSORS_HPP

#include "Tool.hpp"

class Scissors : public Tool{
public:
    Scissors();
    Scissors(int);
    ~Scissors();
    void SetStrength(int);
    void fight(Tool&);
};

#endif /* SCISSORS_HPP */

