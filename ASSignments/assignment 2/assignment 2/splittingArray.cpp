#include <iostream>
#include <queue>
#include <cmath>
#include<ctime>

void display ( int [ ] , int , int );
void populate ( int [ ] , int );
void splitArray ( int [ ] , int );
using namespace std;
int main ( ) {



	srand ( time ( 0 ) );
	int size;

	
	cout << "Enter size of ARRAY in power of 2 : ";
	do {
		cin >> size;
		int s = log2 ( size );
		if ( pow ( 2 , s ) != size || size == 0 ) {
			cout << "ReEnter Size : ";
			size = -1;
		}
		cin.clear ( );
		cin.ignore ( 100 , '\n' );
	} while ( size < 1 );


	int *Arr = new int [ size ];
	populate ( Arr , size );
	splitArray ( Arr , size );

}
void splitArray ( int Arr [ ] , int size ) {

	int start_s = clock ( );

	int start = 0 , end = size - 1;
	queue<int> q;
	int mid;
	bool isQueueNotEmpty = true;

	while ( isQueueNotEmpty ) {

		mid = ( start + end ) / 2;

		{		  //calling display  block 
			cout << "ARRAY : ";
			display ( Arr , start , end );
			cout << "Left : ";
			display ( Arr , start , mid );
			cout << "Right : ";
			display ( Arr , mid + 1 , end );
			cout << "---------------------------------" << endl;
		}

		if ( start < mid ) {
			q.push ( start );
			q.push ( mid );

			q.push ( mid + 1 );
			q.push ( end );
		}

		if ( q.empty ( ) )
			isQueueNotEmpty = false;
		if ( isQueueNotEmpty ) {
			start = q.front ( );
			q.pop ( );
			end = q.front ( );
			q.pop ( );
		}

	}

	int stop_s = clock ( );
	double exeTime = ( stop_s - start_s ) / double ( CLOCKS_PER_SEC ) * 1000;
	cout << "Execution Time: " << exeTime << endl;

}
void populate ( int A [ ] , int size ) {
	for ( int i = 0; i < size; i++ )
		A [ i ] = rand ( ) % 10;
}

void display ( int A [ ] , int s , int e ) {

	for ( int i = s; i <= e; i++ )
		cout << A [ i ] << " ";
	cout << endl;
}
