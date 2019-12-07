#include <iostream>
using namespace std;
const int N = 16;
template <typename T>
void bubblesort ( T [ ] );
void selectionSort ( int [ ] );
void insertionSort ( int [ ] );


int main ( ) {
	//int start = 0;
	//	int end = 15;
	//	int arr [ 16 ] = { 5 , 14 , 10 , 27 , 45 , 30 , 50 , 7 , 20 , 40 , 37 , 43 , 10 , 14 , 50 , 53 };
	int arr2 [ 16 ] = { 5 , 7 , 23 , 31 , 37 , 39 , 41 , 11 , 13 , 17 , 19 , 19 , 21 , 1 , 2 , 3  };
	int arr3 [ 16 ] = { 5 , 7 , 23 , 31 , 37 , 39 , 41 , 11 , 13 , 17 , 19 , 19 , 21 , 1 , 2 , 3 };
	bubblesort ( arr2 );
	//selectionSort ( arr3 );
	insertionSort ( arr3 );

	return 0;

}
template<typename T>
void bubblesort ( T a [ ] ) {
	cout << "Bubble Sorted Array" << endl;

	int i , j , count = 0;
	bool  change = true;
	for ( i = 0; i < N&&change; i++ ) {

		change = false;
		for ( j = 0; j < N - ( i + 1 ); j++ ) {
			count++;
			if ( a [ j ] > a [ j + 1 ] ) {
				swap ( a [ j ] , a [ j + 1 ] );
				change = true;
			}


		}
	}

	cout << " Ascending Order : ";

	for ( int i = 0; i < N; i++ )
		cout << " " << a [ i ] << " , ";
	cout << endl;
	cout << "Time :  " << count << endl;
}

void selectionSort ( int a [ ] ) {
	cout << "Selection Sort: " << endl;

	int count = 0;
	int i , j , mini , minindex;
	for ( i = 0; i < N; i++ ) {
		mini = a [ 0 ];
		for ( j = 0; j < N - i; j++ ) {
			count++;
			if ( a [ j ] >= mini ) {
				mini = a [ j ];
				minindex = j;
			}
		}

		swap ( a [ minindex ] , a [ j - 1 ] );
	}

	cout << "Ascending Order";

	for ( i = 0; i < N; i++ )
		cout << " " << a [ i ];
	cout << endl;
	cout << "Time :  " << count << endl;
}
void insertionSort ( int a [ ] ) {
	cout << "Insertion Sort: " << endl;

	int i , count = 0;

	for ( i = 1; i < N; i++ ) {
		for ( int j = i;j>0 && a [ j ] < a [ j - 1 ]; j-- , count++ ) {


			swap ( a [ j ] , a [ j - 1 ] );


		}
	}
	cout << "Ascending Order";

	for ( i = 0; i < N; i++ )
		cout << " " << a [ i ];
	cout << endl;
	cout << "Time :  " << count << endl;


}
