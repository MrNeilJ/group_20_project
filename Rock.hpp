//=============================================================================
// Filename:  Rock.hpp
// Authors:  Lucas Jensen
//           Neil Johnson
//           David McClung
//           John Neubauer
//           Adam Sugarman
// Date:  5/15/17
// Purpose:  "Rock, Paper, Scissors" Rock Class specification file
//============================================================================

#ifndef ROCK_HPP
#define ROCK_HPP

#include "Tool.hpp"

class Rock: public Tool {
public:
    Rock();
    Rock(int);
    //~Rock();

   /* void SetStrength(int);
    void SetType(char);
    void fight(Tool&); //### voided just go get it to compile */
};

#endif /* ROCK_HPP */
