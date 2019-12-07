#include<iostream>
#include <ctime>
#include <Windows.h>
#include <fstream>
template <class T>
void populateArr ( T [ ] , int );
template <class T>
int binarysearch ( T [ ] , int , T n );

template <class T>
void bubblesort ( T [ ] , int );

template <class T>
void displayArr ( T [ ] , int n );

template <class T1>
void mergeSort ( T1 a [ ] , int , int );


template< class T>
int  linearsearch ( T a [ ] , int s , T n );


using namespace std;

int main ( ) 
{
	srand ( time ( 0 ) );
	long int start = GetTickCount ( );
	

float  A1 [ 100 ] , A2 [ 1000 ] , A3 [ 2000 ];
int A4 [ 3000 ] , A5 [ 5000 ] , A6 [ 7000 ],A7[10000];
populateArr ( A1 , 100 );
populateArr ( A2 , 1000 );
populateArr ( A3 , 2000 );
populateArr ( A4 , 3000 );
populateArr ( A5 , 5000 );
populateArr ( A6 , 7000 );
populateArr ( A7 , 10000 );
bubblesort ( A1 , 100 );
int index;
index = binarysearch ( A1 , 100 ,6  );
	if ( index != -1 )
		cout << 6 << " found on index : " << index << endl;
	else
		cout << 6 << " nOt found " << endl;

long int end = GetTickCount ( );
long int time = ( end - start ) * 1000;
fstream file ( "Execution.txt" , ios::app );
file << time << " " << endl;
file.close ( );
}


template <class T>
void displayArr ( T a [ ] , int n ) {
	
	cout << " Ascending Order : ";

	for ( int i = 0; i < n; i++ )
		cout << " " << a [ i ];
	cout << endl;

	
}
template <class T>
void bubblesort ( T Arr [ ] , int N ) {

	srand ( time ( 0 ) );
	long int start = GetTickCount ( );


	int i , j;
	for ( i = 0; i < N; i++ ) {

		for ( j = 0; j < N - i - 1; j++ ) {

			if ( Arr [ j ] >= Arr [ j + 1 ] )
				swap ( Arr [ j ] , Arr [ j + 1 ] );

		}

	}


	long int end = GetTickCount ( );
	long int time = ( end - start ) * 1000;
	fstream file ( "Execution.txt" , ios::app );
	file << time << " " ;
	file.close ( );
}
template <class T>
void populateArr ( T A [ ] , int size ) {
	

	for ( int i = 0; i < size; i++ ) {
		A [ i ] = rand ( ) % RAND_MAX;
		//cout << A [ i ] << " ";
	}

	
}

template <class T>
int binarysearch ( T Arr [ ] , int size , T n ) {
	srand ( time ( 0 ) );
	long int start = GetTickCount ( );


	int start = 0 , mid , end = size;


	while ( start <= end ) {
		mid = ( start + end ) / 2;

		if ( n == Arr [ mid ] )
			return mid;
		else if ( n < Arr [ mid ] )
			end = mid - 1;
		else
			start = mid + 1;

	}

	long int end = GetTickCount ( );
	long int time = ( end - start ) * 1000;
	return -1;
	fstream file ( "Execution.txt" , ios::app );
	file << time << " " ;
	file.close ( );
}
template <class T>
void mergeArray ( T arr [ ] , int l , int m , int r ) {
	srand ( time ( 0 ) );
	long int start = GetTickCount ( );


	int i , j , k;
	int n1 = m - l + 1;
	int n2 = r - m;
	T *L = new T [ n1 ] , *R = new T [ n2 ];

	for ( i = 0; i < n1; i++ )
		L [ i ] = arr [ l + i ];

	for ( j = 0; j < n2; j++ )
		R [ j ] = arr [ m + 1 + j ];

	i = j = 0 , k = l;

	while ( i < n1 && j < n2 ) {
		if ( L [ i ] <= R [ j ] )
			arr [ k++ ] = L [ i++ ];
		else
			arr [ k++ ] = R [ j++ ];
	}
	//Copy the remaining elements of L[], if there are
	while ( i < n1 ) {
		arr [ k++ ] = L [ i++ ];
	}
	//Copy the remaining elements of R[], if there are
	while ( j < n2 ) {
		arr [ k++ ] = R [ j++ ];
	}

	long int end = GetTickCount ( );
	long int time = ( end - start ) * 1000;
	fstream file ( "Execution.txt" , ios::app );
	file << time << " " ;
	file.close ( );
}
template <class T1>
void mergeSort ( T1 a [ ] , int left , int right ) {
	

	if ( left < right ) {
		int mid = left + ( right - left ) / 2;
		mergeSort ( a , left , mid );
		mergeSort ( a , mid + 1 , right );
		mergeArray ( a , left , mid , right );
	}

	
}

template< class T>
int  linearsearch ( T a [ ] , int s , T n ) {
	srand ( time ( 0 ) );
	long int start = GetTickCount ( );


	for ( int i = 0; i < n; i++ ) {
		if ( n == a [ i ] )
			return i;

	}

	long int end = GetTickCount ( );
	long int time = ( end - start ) * 1000;
	fstream file ( "Execution.txt" , ios::app );
	file << time << " " ;
	file.close ( );
	return -1;
}