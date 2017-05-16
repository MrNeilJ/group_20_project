//=============================================================================
// Filename:  menu.cpp
// Authors:  Lucas Jensen
//           Neil Johnson
//           David McClung
//           John Neubauer
//           Adam Sugarman
// Date:  5/15/17
// Purpose:  "Rock, Paper, Scissor" menu() function implementation file.
//=============================================================================

//-----------------------------------------------------------------------------
// includes and usings
//-----------------------------------------------------------------------------

#include <iostream>
#include "menu.hpp"

using namespace std;

//-----------------------------------------------------------------------------
// menu() function
//-----------------------------------------------------------------------------
//int menu(Game *aGame)
int menu(int *p1, int *p2)
{
  int selection = 0;
  string title[6] = {"is not defined", "is a Vampire", "is a Barbarian", 
                   "are Blue Men", "is Medusa", "is Harry Potter"};
  string inp;

  // print menu title
  cout << endl;
  cout << "================================================================\n";
  cout << "                 Fantasy Combat Game Main Menu\n";
  cout << "================================================================\n";
  cout << "Do you wish to:" << endl;
  cout << "  (1) Select or change the challenging creature?  Currently \n";
  cout << "        the challenger " << title[*p1] << ".\n";
  cout << "  (2) Select or change the opposing creature?  Currently the \n";
  cout << "        opposing creature " << title[*p2] << ".\n";
  cout << "  (3) Play (or re-play) a single fight?" << endl;
  cout << "  (4) Play 100 times to compare challenger to opponent?" << endl;
  cout << "  (5) Exit the game." << endl;
  cout << "Enter your selection, a number from 1 to 5, from the above menu: ";

  // obtain selection as a string
  cin >> inp;

  // validate menu selection
  while(inp != "1" && inp != "2" && inp != "3" && inp != "4" && inp != "5")
  {
    cout << "Invalid input.  Enter number from 1 to 5: ";
    cin >> inp;
  }

  // define menu selection based on string input
  if(inp == "1") selection = 1;
  if(inp == "2") selection = 2;
  if(inp == "3") selection = 3;
  if(inp == "4") selection = 4;
  if(inp == "5") selection = 5;

  //return menu selection  
  return selection;
}

//-----------------------------------------------------------------------------
// creatureSelection() function: returns number corresponding to creature type
//-----------------------------------------------------------------------------
int creatureSelection(int player)
{
  int type = 0;
  string inp;

  // print creature selection title
  cout << endl;
  cout << "----------------------------------------------------------------\n";
  if(player==1)
    cout << "Challenger (Player 1) Selection\n";
  else
    cout << "Opposer (Player 2) Selection\n";
 
  cout << "----------------------------------------------------------------\n";
  cout << "Do you want the challenger to be a:" << endl;
  cout << "  (1) Vampire," << endl;
  cout << "  (2) Barbarian," << endl;
  cout << "  (3) Blue Men?," << endl;
  cout << "  (4) Medusa, or a " << endl;
  cout << "  (5) Harry Potter?" << endl;
  cout << "Enter your selection, a number from 1 to 5, from the above menu: ";

  // obtain selection as a string
  cin >> inp;

  // validate menu selection
  while(inp != "1" && inp != "2" && inp != "3" && inp != "4" && inp != "5")
  {
    cout << "Invalid input.  Enter number from 1 to 5: ";
    cin >> inp;
  }

  // define menu selection based on string input
  if(inp == "1") type = 1;
  if(inp == "2") type = 2;
  if(inp == "3") type = 3;
  if(inp == "4") type = 4;
  if(inp == "5") type = 5;

  //return menu selection  
  return type;
}
