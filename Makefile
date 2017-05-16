#=============================================================================
# Filename:  	makefile
# Author:  		David McClung
#				Neil Johnson
# Date:  		5/3/17
# Purpose:  	makefile for Project 3
# Reference:  	www.youtube.com/watch?v=_r7i5X0rXJk (a Paul Programming video)
#=============================================================================
output: play_game.o RPSGame.o Tool.o Rock.o Paper.o Scissors.o menu.o
	g++ play_game.o RPSGame.o Tool.o Rock.o Paper.o Scissors.o menu.o -o play_game

play_game.o: play_game.cpp
	g++ -std=c++0x -c play_game.cpp

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

menu.o: menu.hpp menu.cpp
	g++ -std=c++0x -c menu.cpp

clean:
	rm *.o 
	rm play_game


