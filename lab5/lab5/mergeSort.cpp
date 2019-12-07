//not working 

//#include <iostream>
//using namespace std;
//
//
//void mergesorting ( int [ ],int,int ,int  );
//void breakArr ( int [ ] , int , int );
//void displayArray ( int [ ] , int );
//
//int main ( ) {
//	int arr2 [ 8 ] = { 8,7,6,5,4,3,2,1 };
//	displayArray ( arr2 , 8 );
//	breakArr ( arr2 , 0 , 7 );
//
//	displayArray ( arr2, 8 );
//	return 0;
//}
//void displayArray (int A[],int size  )  {
//	for ( int i = 0; i < size ; i++ ) {
//		cout << A [ i ] << " ";
//	}
//	cout << endl;
//}
//
////void breakArr ( int A [ ] , int start , int end ) {
////
////	if ( start >= end )
////		return;
////	int mid = ( start + end ) / 2;
////	breakArr ( A , start , mid );
////	//cout << ". ";
////	breakArr ( A , mid + 1 , end );
////	//for ( int i = 0; i < mid; i++ )
////	//	cout << A [ i ] << " ";
////	//cout << ",";
////	//for ( int i = mid; i < end; i++ )
////	//	cout << A [ i ] << " ";
////	//cout << ". ";
////
////}
//void breakArr ( int A [ ] , int start , int end ) {
//	
//	if ( start >= end )
//		return;
//	int mid = ( start + end ) / 2;
//	breakArr ( A , start , mid );
//	breakArr ( A , mid + 1 , end );
//
//	mergesorting ( A , start , mid , end );
//}
//
//
//void mergesorting ( int B [ ],int p,int q ,int r ) {
//	int l1 = q - p + 1;
//	int  l2 = r - q;
//	int l3 = l1 + l2-2;
//	int Lindex=0 , Rindex=0,Bindex=p;
//	
//	int* L = new int [l1 ];
//	int* R = new int [ l2 ];
//	
//	int k = 0;
//	for ( int i = p; i <= q; i++ )
//	{
//		L [ k++ ] = B [ i ];
//	}
//	L [ k ] = 2147483647;
//	k = 0;
//	for ( int i = q+1; i <= r; i++ ) {
//		R [ k++ ] = B [ i ];
//	}
//	L [ k ] = 2147483647;
//
//	for ( int i = 0; i < l3; i++ ) {
//		if ( L [ Lindex ] < R [ Rindex ] )
//			B [ Bindex++ ] = L [ Lindex++ ];
//		else
//			B [ Bindex++ ] = R [ Rindex++ ];
//	}
//
//
//}
////
////void merge ( int* , int* , int , int , int );
////
////void mergesort ( int *a , int*b , int start , int end ) {
////	int halfpoint;
////	if ( start < end ) {
////		halfpoint = ( start + end ) / 2;
////		mergesort ( a , b , start , halfpoint );
////		mergesort ( a , b , halfpoint + 1 , end );
////		merge ( a , b , start , halfpoint , end );
////	}
////}
////
////void merge ( int *a , int *b , int start , int halfpoint , int end ) {
////	int h , i , j , k;
////	h = start;
////	i = start;
////	j = halfpoint + 1;
////
////	while ( ( h <= halfpoint ) && ( j <= end ) ) {
////		if ( a [ h ] <= a [ j ] ) {
////			b [ i ] = a [ h ];
////			h++;
////		}
////		else {
////			b [ i ] = a [ j ];
////			j++;
////		}
////		i++;
////	}
////	if ( h > halfpoint ) {
////		for ( k = j; k <= end; k++ ) {
////			b [ i ] = a [ k ];
////			i++;
////		}
////	}
////	else {
////		for ( k = h; k <= halfpoint; k++ ) {
////			b [ i ] = a [ k ];
////			i++;
////		}
////	}
////
////	// Write the final sorted array to our original one
////	for ( k = start; k <= end; k++ ) {
////		a [ k ] = b [ k ];
////	}
////}
////
////