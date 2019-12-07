/*MUHAMMAD AZAM
BCSF15M017*/

#include <iostream>
using  namespace std;
void selectionSort ( int [ ] , int );
void quickSort ( int [ ],int , int );
void display ( int [ ] , int );
int main ( )  {
	int arr1 [ 16 ] = { 5 , 14 , 10 , 27 , 45 , 30 , 50 , 7 , 20 , 40 , 37 , 43 , 10 , 14 , 50 , 53 };
	int arr2 [ 16 ] = { 5 , 14 , 10 , 27 , 45 , 30 , 50 , 7 , 20 , 40 , 37 , 43 , 10 , 14 , 50 , 53 };
	cout << "Before sorting " << endl;
	display ( arr1 , 16 );
	selectionSort ( arr1 , 16 );
	cout << "After selection Sort " << endl;
	display ( arr1 , 16 );

	cout << "Before sorting " << endl;
	display ( arr2 , 16 );
	quickSort ( arr2 , 0 , 15 );

	cout << "After Quick Sort " << endl;
	display ( arr1 , 16 );


	

}
void display ( int A [ ] , int s ) {

	for ( int i = 0; i < s; i++ )
		cout << A [ i ] << " ";
	cout << endl;
}

void selectionSort ( int a [ ],int N ) {
	


	int i , j , m , index;
	for ( i = 0; i < N; i++ ) {
		m = a [ 0 ];
		for ( j = 0; j < N - i; j++ ) {

			if ( a [ j ] >= m ) {
				m = a [ j ];
				index = j;
			}
		}

		swap ( a [ index ] , a [ j - 1 ] );
	}

}


int partition ( int arr [ ] , int low , int high ) {
	int pivot = arr [ high ];    
	int i = ( low - 1 ); 

	for ( int j = low; j <= high - 1; j++ ) {
		
		if ( arr [ j ] < pivot ) {
			i++;   
			swap ( arr [ i ] ,arr [ j ] );
		}
	}
	swap ( arr [ i + 1 ] ,arr [ high ] );
	return ( i + 1 );
}


void quickSort ( int arr [ ] , int low , int high ) {
	if ( low < high ) {
		
		int m = partition ( arr , low , high );

		
		quickSort ( arr , low , m- 1 );
		quickSort ( arr ,m + 1 , high );
	}
}