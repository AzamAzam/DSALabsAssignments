//#include <iostream>
//#include <cmath>
//using namespace std;
//int main()
//{
//	/* Question NO 1 Solution Code*/
//
//	int num = 0;
//	double numOfMoves = 0;
//	int numOfDays = 0;
//	cout << "  Enter the number of disks with you want to play: ";
//	cin >> num;
//	numOfMoves = (pow(2, num) - 1);
//	cout << "\n  Number of moves to play with " << num << " disks are: " << numOfMoves << endl;
//
//	/* Question NO 2 Solution Code*/
//
//	int arr[] = { 3, 4, 5, 6, 7 };
//	int size = sizeof(arr)/sizeof(arr[0]-1);
//	cout << "\n  Table of minimum numbers of moves to complete the game \n" << endl;
//	cout << "   No.of disks                            Minimum Moves\n" << endl;
//	for (size_t i = 0; i < size; i++)
//	{
//		num = arr[i];
//		numOfMoves = (pow(2, num) - 1);
//		cout << "      " << arr[i] << "                                       " << numOfMoves << endl;
//	}
//
//	/* Question NO 3 Solution Code*/
//
//	cout << "\n  The minimum number of days it should take to complete a game containing 15 discs are: ";
//	numOfDays = (pow(2, 15) - 1)/(60*24)+1;
//	cout << numOfDays << endl;
//
//	return 0;
//}