#include <iostream>
#include "inputCheck.hpp"
#include "RPSGame.hpp"
#include <time.h>

int main() {
	// Seeds rand so it can always be random
	srand(time(NULL));
	// Create the RPSGame Object
	RPSGame game;
	int turn = 1;


	// Welcome menu for the overall game
	std::cout << "************************************" << std::endl;
	std::cout << "*   ROCK PAPER SCISSORS FACE OFF   *" << std::endl;
	std::cout << "************************************" << std::endl;
	std::cout << "Welcome to Rock, Paper, Scissors!" 	<< std::endl;

	// Main menu, allows the user to set the strength values in the game
	char mainMenuChoice;
	do {
		// Ask the user if they would like to modify the strength values in the game.
		std::cout << "Do you want to choose different strengths for the tools?(y-yes, n-no): ";
		mainMenuChoice = tolower(getCharacter());

		// If they say y (yes), allow them to modify the strength values.
		if (mainMenuChoice == 'y') {
			game.setStrengths();
		}
		// Else, if they do not want to, then proceed with the game.
		else if (mainMenuChoice == 'n') {
			std::cout << "Starting game.\n" << std::endl;
		}
		// Otherwise, they didn't do a decent input, notify them to try again
		else {
			std::cout << "That input didn't register, please try again. Thank you.\n" << std::endl;
		}
	} while(mainMenuChoice != 'y' && mainMenuChoice != 'n');

	/*****************************************
	 * GAMEPLAY
	 *****************************************/

	// Ask the user what tool they would like to use
	char guess;
	do {
		std::cout << "Choose your tool (r-rock, p-paper, s-scissor, e-exit): ";
		guess = getCharacter();
		// Check to see if the user chose to quit the game
		if (guess == 'e') {
			std::cout << "Thanks for playing, have a great day!" << std::endl;
			return 0;
		}
		// If they selected one of the three values, then set the humans value to
		// it and roll for the computer
		else if (guess == 'r' || guess == 'p' || guess == 's') {
			game.setHumanGuess(guess);
			game.setComputerGuess();
		}
		else {
			std::cout << "Response did not register, try again" << std::endl;
		}

		if (guess == 'r' || guess == 'p' || guess == 's') {
			// Play a single round of the game
			game.game();

			// Then display the results of the match

			game.displayResults(turn);
			turn++;
		}

	} while (guess != 'e');

}