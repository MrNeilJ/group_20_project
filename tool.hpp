//=============================================================================
// Filename:  Tool.hpp
// Authors:  Lucas Jensen
//           Neil Johnson
//           David McClung
//           John Neubauer
//           Adam Sugarman
// Date:  5/15/17
// Purpose:  "Rock, Paper, Scissors" Tool Class specification file
//============================================================================

#ifndef TOOL_HPP
#define TOOL_HPP

#include <iostream>

class Tool {
private:
    int strength;
    char type;
    enum ToolType {r, p, s};
public:
    Tool();
    virtual ~Tool();

	// Setters
	void setType(char);
	void setStrength(int);

	// Getters
	char getType();
	int getStrength();

	std::string printType();
};

#endif /* TOOL_HPP */

