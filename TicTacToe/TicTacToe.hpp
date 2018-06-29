/*********************************************************
** Author: James Meehan
** Date: 06/07/2017
** Description:  This is the TicTacToe class specification file.
** The TicTacToe class starts a Tic-Tac-Toe game and the
** play() function controls the progress of the game.
*********************************************************/

#ifndef TICTACTOE_HPP
#define TICTACTOE_HPP
#include <iostream>
#include <string>
#include "Board.hpp"


using std::cin;
using std::cout;
using std::endl;

class TicTacToe
{
private:
	class Board tboard;
	char playerTurn;

public:
	TicTacToe(char);
	void play();

};
#endif

