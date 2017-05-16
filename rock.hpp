
#ifndef ROCK_HPP
#define ROCK_HPP

#include "tool.hpp"

class Rock: public Tool {
public:
    Rock();
    Rock(int);
    ~Rock();
    
    void SetStrength(int);
    void SetType(char);
    fight(Tool&);
};

#endif /* ROCK_HPP */
