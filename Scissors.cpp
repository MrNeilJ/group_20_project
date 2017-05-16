//=============================================================================
// Filename:  Scissors.hpp
// Authors:  Lucas Jensen
//           Neil Johnson
//           David McClung
//           John Neubauer
//           Adam Sugarman
// Date:  5/15/17
// Purpose:  "Rock, Paper, Scissors" Scissors Class implementation file
//============================================================================

#include "Scissors.hpp"

Scissors::Scissors() { setStrength(1); setType('s');}

Scissors::Scissors(int input) { setStrength(input); setType('s');}

//Scissors::~Scissors(){}

