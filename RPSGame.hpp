
#ifndef RPSGAME_HPP
#define RPSGAME_HPP

#include "tool.hpp"

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
