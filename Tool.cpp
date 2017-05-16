
//=============================================================================
// Filename:  Tool.hpp
// Authors:  Lucas Jensen
//           Neil Johnson
//           David McClung
//           John Neubauer
//           Adam Sugarman
// Date:  5/15/17
// Purpose:  "Rock, Paper, Scissors" Tool Class implementation file
//============================================================================

#include "Tool.hpp"

/**************************************************************
 *                  Tool::Tool
 *  This is the constructor function for the Tool class.
 *  It builds the object properly.
 **************************************************************/
Tool::Tool() {}


/**************************************************************
 *                  Tool::~Tool
 *  This is the destructor function for the Tool class. When
 *  the Tool class is ended it will provide any needed cleanup.
 **************************************************************/
Tool::~Tool(){}


/**************************************************************
 *                  Tool::setType()
 *  This is the setter function that sets the Tool to a certain
 *  type.
 **************************************************************/
void Tool::setType(char input) {
	type = input;
}

/**************************************************************
 *                  Tool::setType()
 *  This is the setter function that sets the Tool to a certain
 *  strength value.
 **************************************************************/
void Tool::setStrength(int input) {
	strength = input;
}

/**************************************************************
 *                  Tool::getType()
 *  This is the getter function that gets the Tool to a certain
 *  type.
 **************************************************************/
char Tool::getType() {
	return type;
}

/**************************************************************
 *                  Tool::getStrength()
 *  This is the getter function that gets the value that is
 *  stored within strength.
 **************************************************************/
int Tool::getStrength() {
	return strength;
}

/**************************************************************
 *                  Tool::printType
 *  This prints the value in an easy to read format to the
 *  console.
 **************************************************************/
std::string Tool::printType() {
	if (getType() == 'r') {
		return "Rock";
	}
	if (getType() == 'p') {
		return "Paper";
	}
	if (getType() == 's') {
		return "Scissors";
	}
}
