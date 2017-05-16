//=============================================================================
// Filename:  Paper.hpp
// Authors:  Lucas Jensen
//           Neil Johnson
//           David McClung
//           John Neubauer
//           Adam Sugarman
// Date:  5/15/17
// Purpose:  "Rock, Paper, Scissors" Paper Class implementation file
//============================================================================

#include "Paper.hpp"

Paper::Paper() { setStrength(1); setType('p');}

Paper::Paper(int input) { setStrength(input); setType('p');}

// void Paper::fight(Tool t){}
