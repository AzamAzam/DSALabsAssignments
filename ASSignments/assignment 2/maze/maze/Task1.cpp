//#include<iostream>
//#include<fstream>
//using namespace std;
//class Maze
//{
//	char **maze;
//	int rows, cols, n, temp_rows, temp_cols ;
//	int max;
//public:
//	Maze();
//	void DrawLine();
//	void ReadFromFile();
//	void SetHurdlesAndOpenBlocks();
//	int isBlocked();
//	void MoveLeft();
//	void MoveRight();
//	void MoveUp();
//	void MoveDown();
//	void FindMazeTogoOut();
//	int Notfinished();
//	void ShowMaze();
//	void SHowCoordinates();
//};
//
//int main()
//{
//	Maze maze;
//	maze.ReadFromFile();
//	maze.SetHurdlesAndOpenBlocks();
//	maze.ShowMaze();
//	if (maze.isBlocked())
//	{
//		cout << "Path Blocked !!!\n\n\n";
//	}
//	else
//	{
//		while (maze.Notfinished() && maze.isBlocked()==0)
//		{
//			maze.FindMazeTogoOut();
//		}
//		cout << endl << endl;
//		if (maze.isBlocked())
//		{
//			cout << "Path Blocked !!!\n\n\n";
//		}
//		else
//		{
//			cout << "Solved !!!\n\n\n";
//		}
//	}
//	maze.ShowMaze();
//	maze.SHowCoordinates();
//}
//
//Maze::Maze()
//{
//	maze = NULL;
//	rows = cols = temp_rows = temp_cols = n = 0;
//}
//
//void Maze::ReadFromFile()
//{
//	fstream MyFile;
//	MyFile.open("Maze.txt", ios::in | ios::app);
//	MyFile >> rows;
//	MyFile >> cols;
//	maze = new char*[rows];     // dynamic memory allocation
//	for (int i = 0; i < rows; i++)
//	{
//		maze[i] = new char[cols];
//	}
//	MyFile.close();
//}
//
//void Maze::SetHurdlesAndOpenBlocks()
//{
//	fstream MyFile;
//	int rows, cols, n;
//	MyFile.open("Maze.txt", ios::in | ios::app);
//	MyFile >> rows;
//	MyFile >> cols;
//	MyFile >> n;    // number of hurdles
//	for (int i = 0; i < rows; i++)  // setting open blocks
//	{
//		for (int j = 0; j < cols; j++)
//			maze[i][j] = NULL;
//	}
//	for (int i = 0; i < n; i++)  // setting hurdles
//	{
//		MyFile >> rows;
//		MyFile >> cols;
//		maze[rows][cols] = '1';
//	}
//	MyFile.close();
//}
//
//void Maze::ShowMaze()
//{
//	for (int i = 0; i < rows; i++)  //  Display Maze1
//	{
//		int line = cols;
//		while (line>0 && i == 0)
//		{
//			DrawLine();
//			line--;
//		}
//		cout << endl << "|";
//
//		for (int j = 0; j < cols; j++)
//		{
//			cout << maze[i][j] << "\t|";
//		}
//
//		cout << "\n";
//
//		line = cols;
//		while (line>0)
//		{
//			DrawLine();
//			line--;
//		}
//	}
//	cout << endl;
//}
//
//int Maze::isBlocked()
//{
//	if ((maze[0][1] == '1' && maze[1][0] == '1') || (maze[rows - 2][cols - 1] == '1' && maze[rows - 1][cols - 2] == '1'))
//	{
//		maze[0][0] = 'S';
//		return 1;
//	}
//	else
//		return 0;
//}
//
//void Maze::DrawLine()
//{
//	cout << "________";
//}
//
//void Maze::MoveRight()
//{
//	temp_cols++;
//	maze[temp_rows][temp_cols] = 'M';
//}
//
//void Maze::MoveDown()
//{
//	temp_rows++;
//	maze[temp_rows][temp_cols] = 'M';
//}
//
//void Maze::MoveLeft()
//{
//	maze[temp_rows][temp_cols] = '1';
//	temp_cols--;
//	maze[temp_rows][temp_cols] = 'M';
//
//}
//
//void Maze::MoveUp()
//{
//	maze[temp_rows][temp_cols] = '1';
//	temp_rows--;
//	maze[temp_rows][temp_cols] = 'M';
//}
//
//int Maze::Notfinished()
//{
//	if (temp_rows == rows - 1 && temp_cols == cols - 1)
//	{
//		maze[temp_rows][temp_cols] = 'E';
//		maze[0][0] = 'S';
//		return 0;
//	}
//		
//	else
//		return 1;
//}
//
//void Maze::FindMazeTogoOut()
//{
//	if (temp_cols < cols - 1 && maze[temp_rows][temp_cols+1] != '1')
//		MoveRight();
//	else if (temp_rows < rows - 1 && maze[temp_rows + 1][temp_cols] != '1')
//		MoveDown();
//	else if (temp_cols > 0 && maze[temp_rows][temp_cols-1] != '1')
//		MoveLeft();
//	else if (temp_rows > 0 && maze[temp_rows-1][temp_cols] != '1')
//		MoveUp();
//}
//
//void Maze::SHowCoordinates()
//{
//	cout << endl << endl << "\tCo-ordinates are \n\n";
//	for (int i = 0; i < rows; i++)  
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			if (maze[i][j] == 'M' || maze[i][j] == 'S' || maze[i][j] == 'E')
//			cout << "\t( " << i << " , " << j << " )" << endl;
//		}
//			
//	}
//}
