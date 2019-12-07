#include"Maze.h"
#include"Stack.h"
#include<fstream>
#include<iostream>
#include<iomanip>
#include<string>  
using namespace std;
// This File contains the definitions of the function in the maze.
Maze::Maze()
{
	maze = nullptr;
	noOfHurdles = 0;
	totalRows = 0;
	totalColumns = 0;
	curCol = 0;
	curRow = 0;
	moves = 0;
}
void Maze::PrintLogo()
{
	string *strs = new string[5];
	strs[0] = "\t\t\tM     M      A        ZZZZZZZ   EEEEEE";
	strs[1] = "\t\t\tM M M M     A  A          ZZ    E ";
	strs[2] = "\t\t\tM  M  M    A AA A        ZZ     EEEEEE";
	strs[3] = "\t\t\tM     M   A      A      ZZ      E";
	strs[4] = "\t\t\tM     M  A        A    ZZZZZZZ  EEEEEE";
	for (int i = 0; i<5; i++)
		cout << strs[i] << endl;
}
void Maze::ReadFromFile()
{
	coordinates.push(0, 0);
	fstream file;
	file.open("input file 1.txt", ios::in);
	if (file.is_open())
	{
		file >> totalRows;
		file >> totalColumns;
		file >> noOfHurdles;
		maze = new char*[totalRows];					//Dynamic Memory Allocation
		for (int i = 0; i < totalRows; i++)
			maze[i] = new char[totalColumns];
		for (int i = 0; i < totalRows; i++)
		{
			for (int j = 0; j < totalColumns; j++)
			{
				maze[i][j] = NULL;

			}

		}
		for (int i = 0; i < noOfHurdles; i++)
		{
			file >> curRow;
			file >> curCol;
			maze[curRow][curCol] = 'H';
		}
		file.close();
		curRow = 0;
		curCol = 0;
		maze[curRow][curCol] = 'S';
	}
	else
		cout << "Error Opening File !!!!\n";
}
void Maze::JumpUp()
{
	curRow--;
	maze[curRow][curCol] = '^';
	coordinates.push(curRow, curCol);

}
void Maze::JumpDown()
{
	curRow++;
	maze[curRow][curCol] = 'v';
	if (curRow == totalRows - 1 && curCol == totalColumns - 1)
		maze[curRow][curCol] = 'E';
	coordinates.push(curRow, curCol);
	
}
void Maze::MoveForward()
{
	curCol++;
	maze[curRow][curCol] = char(175);
	if (curRow == totalRows - 1 && curCol == totalColumns - 1)
		maze[curRow][curCol] = 'E';
	coordinates.push(curRow, curCol);
}
void Maze::MoveBackward()
{
	curCol--;
	maze[curRow][curCol] = char(174);
	coordinates.push(curRow, curCol);
	
}
void Maze::DrawMaze()
{
	cout << "\n\n\t\t\t";
	for (int i = 0; i < totalColumns; i++)
		cout << "________";
	cout << "\n";
	for (int i = 0; i < totalRows; i++)
	{
		cout << "\t\t\t|";
		for (int j = 0; j < totalColumns; j++)
		{
			cout << maze[i][j] << "\t|";
		}
		cout << "\n\t\t\t";
		for (int k = 0; k < totalColumns; k++)
			cout << "--------";
		cout << "\n";
	}
}
void Maze::MoveNext()
{
	if ((curCol < totalColumns - 1) && (maze[curRow][curCol + 1] == NULL))
		MoveForward();
	else if ((curRow < totalRows - 1) && (maze[curRow + 1][curCol] == NULL))
		JumpDown();
	else if ((curCol > 0) && (maze[curRow][curCol - 1] == NULL))
		MoveBackward();
	else if ((curRow > 0) && (maze[curRow - 1][curCol] == NULL))
		JumpUp();
	else
	{
		maze[curRow][curCol] = 'X';
		coordinates.pop();
		curRow = coordinates.getRow();
		curCol = coordinates.getColumn();
	}

	moves++;
}
bool Maze::isFinished()
{
	if (curCol == totalColumns - 1 && curRow == totalRows - 1)
		return true;
	else
		return false;
}
bool Maze::isBlocked()
{
	if ((maze[totalRows - 2][totalColumns - 1] == 'H' && maze[totalRows - 1][totalColumns - 2] == 'H') || (maze[totalRows - 2][totalColumns - 1] == 'X' && maze[totalRows - 1][totalColumns - 2] == 'X'))
		return true;
	else if ((maze[1][0] == 'H' && maze[0][1] == 'H') || (maze[1][0] == 'X' && maze[0][1] == 'X'))
		return true;
	else  if ((maze[1][0] == 'H' && maze[0][1] == 'X') || (maze[1][0] == 'X' && maze[0][1] == 'H'))
		return true;
	else 
		return false;
}
int Maze::getMoves()
{
	return moves;
}
void Maze::PrintCoordinates()
{
	int n = 0;
	for (int i = 0; i < totalRows; i++)
	{
		for (int j = 0; j < totalColumns; j++)
		{
			if (maze[i][j] != NULL && maze[i][j] != 'X' && maze[i][j] != 'H')
			{
				n++;
				cout << left << setw(10) << "Coordinate  No. ";
				cout << left << setw(3) << n << " : ( " << i << " , " << j << " )" << endl;
			}
		}
	}
}
Maze::~Maze()
{
	delete maze;
}