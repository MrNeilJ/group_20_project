
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

Tool::Tool() {}

Tool::~Tool(){}

void Tool::setType(char input) {
	type = input;
}

void Tool::setStrength(int input) {
	strength = input;
}

char Tool::getType() {
	return type;
}

int Tool::getStrength() {
	return strength;
}

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
