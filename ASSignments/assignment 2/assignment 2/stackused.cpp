//#include <iostream>
//#include <stack>
//void display ( int [ ] , int , int );
//using namespace std;
//int main ( ) {
//	int Arr [ 16 ] = { 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 , 12 , 13 , 14 , 15 , 16 };
//	int start = 0 , end = 15;
//	stack<int> s;
//	int mid;
//	int i = 0;
//	do {
//
//		cout << "ARRAY : ";
//		display ( Arr , start , end );
//		mid = ( start + end ) / 2;
//		cout << "Left : ";
//		display ( Arr , start , mid );
//		cout << "Right : ";
//		display ( Arr , mid + 1 , end );
//		cout << "----------------------------------------------"<<endl;
//		if ( start < end - 1 ) {
//			s.push ( start );
//			s.push ( mid );
//
//			s.push ( mid + 1 );
//			s.push ( end );
//		}
//		end = s.top ( );
//		s.pop ( );
//		start = s.top ( );
//		s.pop ( );
//
//		i++;
//
//	} while ( i < 14 );
//}
//
//void display ( int A [ ] , int s , int e ) {
//
//	for ( int i = s; i <= e; i++ ) {
//		cout << A [ i ] << " ";
//	}
//	cout << endl;
//
//}