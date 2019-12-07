//#include <iostream>
//#include <queue>
//void display ( int [ ] , int , int );
//void populate (int[], int );
//using namespace std;
//int main ( ) {
//	int size;
//	cout << "Enter size of ARRAY in power of 2 : ";
//	cin >> size;
//	int *Arr = new int [ size ];
//	populate ( Arr , size );
//	int start = 0 , end =size-1;
//	queue<int> s;
//	int mid;
//	int i = 0;
//	while ( i < size-1 ) {
//
//		mid = ( start + end ) / 2;
//		cout << "ARRAY : ";
//		display ( Arr , start , end );
//		cout << "Left : ";
//		display ( Arr , start , mid );
//		cout << "Right : ";
//		display ( Arr , mid + 1 , end );
//		cout << "---------------------------------" << endl;
//		if ( start < end  ) {
//			s.push ( start );
//			s.push ( mid );
//
//			s.push ( mid + 1 );
//			s.push ( end );
//		}
//		start = s.front( );
//		s.pop ( );
//		end = s.front  ( );
//		s.pop ( );
//		i++;
//	} 
//}
//void populate (int A[], int size ) {
//	for ( int i = 0; i < size; i++ ) 
//		A [ i ] = rand ( )%10;
//}
//
//void display ( int A [ ] , int s , int e ) {
//	
//	for ( int i = s; i <= e; i++ )
//		cout << A [ i ] << " ";
//	cout << endl;
//}
