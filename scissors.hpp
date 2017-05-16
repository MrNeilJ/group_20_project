
#ifndef SCISSORS_HPP
#define SCISSORS_HPP

#include "tool.hpp"

class Scissors : public Tool{
public:
    Scissors();
    Scissors(int);
    ~Scissors();
    void SetStrength(int);
    void fight(Tool&);
};

#endif /* SCISSORS_HPP */

