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

/**************************************************************
 *                  RPSGame::RPSGame()
 *  This is the constructor function for the RPS class.  It sets
 *  the win values to 0.
 **************************************************************/
RPSGame::RPSGame() {
	humanWins 		= 0;
	computerWins 	= 0;
	ties 			= 0;
}

/**************************************************************
 *                  RPSGame::~RPSGame()
 *  This is the destructor function for the RPS class. It frees
 *  up any dynamically allocated memory.
 **************************************************************/
RPSGame::~RPSGame() {
	delete human;
	delete computer;
	human = nullptr;
	computer = nullptr;
}

/**************************************************************
 *                  RPSGame::game()
 *  This member funtion is what decides the verdict for each
 *  round in the game.  It checks to see what the user played
 *  versus what the computer played.  It then pulls the strength
 *  values stored within each of the tool types and decides
 *  which player is the winner of that round.
 **************************************************************/
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

/**************************************************************
 *                  RPSGame::displayResults()
 *  This displays the results of every round.  Telling us what
 *  each player chose, as well as the current score.
 **************************************************************/
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

/**************************************************************
 *                  RPSGame::setHumanGuess()
 *  This points the human pointer to an already created Tool
 *  variable.
 **************************************************************/
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

/**************************************************************
 *                  RPSGame::setComputerGuess()
 *  This points the computer pointer to an already created Tool
 *  variable.
 **************************************************************/
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

/**************************************************************
 *                  RPSGame::setStrengths()
 *  This is what is utilized to modify the strength values to
 *  whatever the user would like them to be, this can greatly
 *  change results.
 **************************************************************/
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



