#=============================================================================
# Filename:  	makefile
# Author:  		David McClung
#				Neil Johnson
# Date:  		5/3/17
# Purpose:  	makefile for Project 3
# Reference:  	www.youtube.com/watch?v=_r7i5X0rXJk (a Paul Programming video)
#=============================================================================
output: main.o RPSGame.o Tool.o Rock.o Paper.o Scissors.o inputCheck.o
	g++ main.o RPSGame.o Tool.o Rock.o Paper.o Scissors.o inputCheck.o -o output

main.o: main.cpp
	g++ -std=c++0x -c main.cpp

RPSGame.o: RPSGame.hpp RPSGame.cpp
	g++ -std=c++0x -c RPSGame.cpp

Tool.o:	Tool.hpp Tool.cpp
	g++ -std=c++0x -c Tool.cpp

Rock.o: Rock.hpp Rock.cpp
	g++ -std=c++0x -c Rock.cpp

Paper.o: Paper.hpp Paper.cpp
	g++ -std=c++0x -c Paper.cpp

Scissors.o: Scissors.hpp Scissors.cpp
	g++ -std=c++0x -c Scissors.cpp

inputCheck.o: inputCheck.hpp inputCheck.cpp
	g++ -std=c++0x -c inputCheck.cpp

clean:
	rm *.o 
	rm play_game


