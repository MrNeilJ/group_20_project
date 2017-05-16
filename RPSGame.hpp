//=============================================================================
// Filename:  RPSGame.hpp
// Authors:  Lucas Jensen
//           Neil Johnson
//           David McClung
//           John Neubauer
//           Adam Sugarman
// Date:  5/15/17
// Purpose:  "Rock, Paper, Scissors" RPSGame Class specification file
//============================================================================

#ifndef RPSGAME_HPP
#define RPSGAME_HPP

#include "Tool.hpp"

class RPSGame {
private:
    Tool * human;
    Tool * computer;
    int humanWins,
        computerWins,
        ties;
public:
    int game();
    Tool& computerGuess();
    void displayResults(int, int, int);
    bool playAgain();
};

#endif /* RPSGAME_HPP */
