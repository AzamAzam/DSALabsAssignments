#include"Maze.h"
#include<iostream>
using namespace std;
void main()
{

	Maze maze1;
	cout << "\n\n\t\t\tMaximize the screen and Press Any key to continue.\n";
	system("PAUSE");
	system("CLS");
	maze1.ReadFromFile();
	maze1.PrintLogo();
	cout << "\n\t\t\tThe Given Maze is : \n";
	maze1.DrawMaze();
	while (!(maze1.isFinished()))
	{
		maze1.MoveNext();
		if (maze1.isBlocked())
			break;
	}
	cout << "To show the solved Maze , Press any key to continue!\n";
	system("PAUSE");
	system("CLS");
	cout << "\t\t\t-----------> SOLVED MAZE <------------\n";
	maze1.DrawMaze();
	if (maze1.isBlocked())
		cout << " The Path is Blocked.\n";
	else if (maze1.isFinished())
	{
		cout << "\nTotal Moves  :  " << maze1.getMoves() << endl;
		cout << "\nThe Coordinates are :   " << endl;
		maze1.PrintCoordinates();
	}
}