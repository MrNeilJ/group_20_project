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

Scissors::Scissors() { strength = 1; type = 's'; }

Scissors::Scissors(int input) { strength = input; type = 's'; }

Scissors::~Scissors(){}

void Scissors::SetStrength(int input) {  }
