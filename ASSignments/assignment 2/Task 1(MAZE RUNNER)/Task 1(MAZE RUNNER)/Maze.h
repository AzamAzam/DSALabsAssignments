#ifndef MAZE_H
#define MAZE_H
#include"Stack.h"
class Maze
{
	char**maze;
	int noOfHurdles;
	int totalRows;
	int totalColumns;
	int curRow;
	int curCol;
	int moves;
	Stack coordinates;
public:
	Maze();				     // Default constructor
	void PrintLogo();
	void ReadFromFile();    // reads all the data from file, allocates memory and populate it according to given coordinates
	void JumpUp();		    // goes back to the previos row
	void JumpDown();		//moves to next row
	void MoveForward();	    //moves to next  col
	void MoveBackward();	// moves to prevoius col
	void MoveNext();		// moves to the next location according to given condition
	void DrawMaze();		// prints maze
	bool isFinished();		// checks that the game is finished or not 
	bool isBlocked();		// checks that the end point is blocked or not
	int getMoves();			// return total moves
	void PrintCoordinates(); // prints the solution coordinates
	~Maze();
};
#endif