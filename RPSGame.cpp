//=============================================================================
// Filename:  RPSGame.hpp
// Authors:  Lucas Jensen
//           Neil Johnson
//           David McClung
//           John Neubauer
//           Adam Sugarman
// Date:  5/15/17
// Purpose:  "Rock, Paper, Scissors" RPSGame Class implementation file
//============================================================================

#include "RPSGame.hpp"
#include "inputCheck.hpp"


RPSGame::RPSGame() {
	humanWins 		= 0;
	computerWins 	= 0;
	ties 			= 0;
}

RPSGame::~RPSGame() {
	delete human;
	delete computer;
	human = nullptr;
	computer = nullptr;
}

int RPSGame::game(){
	Tool player = *human;
	Tool comp = *computer;
	// Check to see what the player played
	if (player.getType() == 'r') {
		// Then check to see what the computer played
		if (comp.getType() == 'r') {

		}
		else if (comp.getType() == 'p') {
			player.setStrength(player.getStrength() / 2);
		}
		else if (comp.getType() == 's') {
			player.setStrength(player.getStrength() * 2);
		}
	}
	else if (player.getType() == 'p') {
		// Then check to see what the computer played
		if (comp.getType() == 'p') {

		}
		else if (comp.getType() == 's') {
			player.setStrength(player.getStrength() / 2);
		}
		else if (comp.getType() == 'r') {
			player.setStrength(player.getStrength() * 2);
		}
	}
	else if (player.getType() == 's') {
		// Then check to see what the computer played
		if (comp.getType() == 's') {

		}
		else if (comp.getType() == 'r') {
			player.setStrength(player.getStrength() / 2);
		}
		else if (comp.getType() == 'p') {
			player.setStrength(player.getStrength() * 2);
		}
	}
	// Check to see what strength value is now higher
	if (player.getStrength() > comp.getStrength()) {
		humanWins++;
	}
	else if (player.getStrength() < comp.getStrength()) {
		computerWins++;
	}
	else {
		ties++;
	}
}
// Didn't utilize these, felt silly cause I couldn't figure out a way to correctly use them.
/*
Tool &RPSGame::humanGuess() {
}

Tool& RPSGame::computerGuess(){
}
*/

void RPSGame::displayResults(int turn) {
	// Print out the results after each round
	std::cout << "ROUND " << turn << " RESULTS" << std::endl;
	std::cout << "----------------------------" 	<< std::endl;
	std::cout << "Human Choice:     " << human->printType() << std::endl;
	std::cout << "Computer Choice:  " << computer->printType() << std::endl;

	std::cout << "\nHuman Wins:    " << humanWins 	<< std::endl;
	std::cout << "Computer Wins: " << computerWins 	<< std::endl;
	std::cout << "Ties:          " << ties 			<< std::endl;
	std::cout << std::endl;
}


// Ended up not using these either, implemented a do-while loop to complete this, but could
// easily be implemented.
/*
bool RPSGame::playAgain() {
	return false;
}

bool playAgain(){
}
*/

void RPSGame::setHumanGuess(char userInput) {

		if (userInput == 'r') {
			human = &rock;
		}
		else if (userInput == 'p') {
			human = &paper;
		}
		else if (userInput == 's') {
			human = &scissors;
		}
		else {
			std::cout << "I did not understand that response, try again.\n" << std::endl;
		}
}

void RPSGame::setComputerGuess() {
	int guess = rand() % 3;
	// Set Computer tool to Rock
	if (guess == 0) {
		computer = &rock;
	}
		// Set Computer tool to Paper
	else if (guess == 1) {
		computer = &paper;
	}
		// Set Computer tool to Scissors
	else {
		computer = &scissors;
	}
}

void RPSGame::setStrengths() {
	int strength;
	std::cout << "Please set the strength values between 1 and 10" << std::endl;

	std::cout << "Rock Strength: ";
	strength = getInt();
	rock.setStrength(strength);

	std::cout << "Paper Strength: ";
	strength = getInt();
	paper.setStrength(strength);

	std::cout << "Scissors Strength: ";
	strength = getInt();
	scissors.setStrength(strength);
}



