/*********************************************************
** Author: James Meehan
** Date: 06/07/2017
** Description:  This is the TicTacToe class implementation file.
** The TicTacToe class starts a Tic-Tac-Toe game and the
** play() function controls the progress of the game.
*********************************************************/

#include <iostream>
#include <string>
#include "Board.hpp"
#include "TicTacToe.hpp"


using std::cin;
using std::cout;
using std::endl;


/*******************************************************
** Description: This is the constructor for the TicTacToe
** class.  It takes a char parameter that specifies whether
** player 'X' or 'O' has the first move.
*******************************************************/
TicTacToe::TicTacToe(char p)
{
	playerTurn = p;
}

/*******************************************************
** Description: The play() function allows a TicTacToe
** game to be played.  The function keeps looping, asking
** the correct player for their move and recording it until
** someone has won or their is a draw.
*******************************************************/
void TicTacToe::play()
{
	int x, y;

	cout << endl;

	while (tboard.gameState() == inprogress)
	{
		tboard.print();
		cout << endl;
		cout << "Player " << playerTurn << ": Please enter your move." << endl;
		cout << "Enter the row number: ";
		cin >> x;
		cout << "Enter the column number: ";
		cin >> y;
		while (!tboard.makeMove(x, y, playerTurn))
		{
			cout << "That square is already occupied. Please try a different move." << endl;
			cout << "Enter the row number: ";
			cin >> x;
			cout << endl << "Enter the column number: ";
			cin >> y;
		}
		tboard.makeMove(x, y, playerTurn);

		if (playerTurn == 'X')
			playerTurn = 'O';
		else
			playerTurn = 'X';

		cout << endl;
	}

	switch (tboard.gameState())
	{
	case xwon:
		tboard.print();
		cout << "Player X wins!!!" << endl;
		break;
	case owon:
		tboard.print();
		cout << "Player O wins!!!" << endl;
		break;
	case draw:
		tboard.print();
		cout << "It's a draw." << endl;
		break;
	default:
		cout << "Something seems to have gone wrong.  Blame it on Professor Alcon.";
	}

}

//Main method for the Tic-Tac-Toe
int main()
{
	char first;

	//Asks user who would like go first
	cout << "Who would like to go first?" << endl;
	cout << "Please enter X or O: " << endl;
	cin >> first;

	//Input validation.  Make sure the user enters an X or O (case insensitive)
	while (first != 'X' && first != 'O' && first != 'x' && first != 'o')
	{
		cout << "Invalid player entered. Who would like to go first?" << endl;
		cout << "Please enter only X or O:  ";
		cin >> first;
	}

	//Convert lowercase to uppercase for better visual on game board
	if (first == 'x')
		first = 'X';
	else if (first == 'o')
		first = 'O';

	//initialize a new game and play
	TicTacToe newGame(first);
	newGame.play();

	return 0;
}