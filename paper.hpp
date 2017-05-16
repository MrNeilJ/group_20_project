
#ifndef PAPER_HPP
#define PAPER_HPP

#include "tool.hpp"

class Paper : public Tool{
public:
    Paper();
    ~Paper();
    void setStrength(int);
    void fight(Tool&);
};

#endif /* PAPER_HPP */

