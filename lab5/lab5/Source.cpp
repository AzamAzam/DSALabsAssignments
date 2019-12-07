//#include <iostream>
//using namespace std;
//
//
//void merge ( int A [ ] , int start , int end ) {
//
//	int size = ( end - start ) + 1;
//	int *B = new int [ size ]();
//
//	int LIndex = start;
//	int mid = ( start + end ) / 2;
//	int k = 0;
//	int RIndex = mid + 1;
//
//	while ( k < size ) {
//		if ( ( LIndex <= mid ) && ( A [ LIndex ] < A [ RIndex ] ) ) {
//			B [ k++ ] = A [ LIndex++ ];
//		}
//		else {
//			A [ k++ ] = A [ RIndex++ ];
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
//void merge_sort ( int A [ ] , int startIndex , int endIndex ) {
//	int midIndex;
//
//	
//	if ( startIndex >= endIndex ) {
//		return;
//	}
//
//	
//	midIndex = ( startIndex + endIndex ) / 2;
//
//	 
//	merge_sort ( A , startIndex , midIndex );
//
// 
//	merge_sort ( A , midIndex + 1 , endIndex );
//
//	merge ( A , startIndex , endIndex );
//
//}
//
//
//
//
//int main (  ) {
//	int Arr [ 10 ] = { 2 , 5 , 6 , 4 , 7 , 2 , 8 , 3 , 9 , 10 };
//
//	merge_sort ( Arr , 0 , 9 );
//
//	
//	for ( int i = 0; i < 10; i++ ) {
//		cout << Arr [ i ] <<" ";
//	}
//	cout << endl;
//	return 0;
//}