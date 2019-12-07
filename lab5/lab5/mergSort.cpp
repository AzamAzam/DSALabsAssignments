///*BCSF15M017
//MUHAMMAD AZAM
//*/
//
//#include <iostream>
//using namespace std;
//void mergeArray ( int  [ ] , int  , int  );
//void mergeSort ( int  [ ] , int , int  );
//int main ( ) {
//	int Arr [ 10 ] = { 2 , 5 , 6 , 4 , 7 , 2 , 8 , 3 , 9 , 10 };
//
//	mergeSort ( Arr , 0 , 9 );
//
//
//	for ( int i = 0; i < 10; i++ ) {
//		cout << Arr [ i ] << " ";
//	}
//	cout << endl;
//	return 0;
//}
//
//void mergeArray ( int A [ ] , int start , int endIndex ) {
//
//	int size = ( endIndex - start ) + 1;
//	int *B = new int [ size ] ;
//
//	int LIndex= start;
//	int mid = ( start + endIndex ) / 2;
//	int k = 0;
//	int  RIndex= mid + 1;
//
//	while ( k < size ) {
//		if ( ( LIndex<= mid ) && ( A [ LIndex] < A [  RIndex] ) ) {
//			B [ k++ ] = A [ LIndex++ ];
//		}
//		else {
//			B [ k++ ] = A [ RIndex++ ];
//		}
//
//	}
//
//	for ( k = 0; k < size; k++ ) {
//		A [ start + k ] = B [ k ];
//	}
//
//	delete [ ]B;
//
//}
//
//
//void mergeSort ( int A [ ] , int startIndex , int endIndex ) {
//	int mid;
//
//
//	if ( startIndex >= endIndex ) 
//		return;
//	
//
//
//	mid = ( startIndex + endIndex ) / 2;
//
//
//	mergeSort ( A , startIndex , mid );
//
//
//	mergeSort ( A , mid + 1 , endIndex );
//
//	mergeArray ( A , startIndex , endIndex );
//
//}
//
//
//
