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
#include "rock.hpp"
#include "paper.hpp"
#include "scissors.hpp"

class RPSGame {
private:
    Tool * human;
    Tool * computer;
    int humanWins,
        computerWins,
        ties;

	Rock rock;
	Paper paper;
	Scissors scissors;

public:
	RPSGame();
	~RPSGame();
    int game();
    // Tool& humanGuess();
    // Tool& computerGuess();
    void displayResults(int);
    // bool playAgain();

	// Getters


	// Setters
	void setHumanGuess(char);
	void setComputerGuess();
	void setStrengths();

	// Compare the values
};

#endif /* RPSGAME_HPP */
