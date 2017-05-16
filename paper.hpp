//=============================================================================
// Filename:  Paper.hpp
// Authors:  Lucas Jensen
//           Neil Johnson
//           David McClung
//           John Neubauer
//           Adam Sugarman
// Date:  5/15/17
// Purpose:  "Rock, Paper, Scissors" Paper Class specification file
//============================================================================

#ifndef PAPER_HPP
#define PAPER_HPP

#include "Tool.hpp"

class Paper : public Tool{
public:
    Paper();
    ~Paper();
    void setStrength(int);
    void fight(Tool&);
};

#endif /* PAPER_HPP */

