//#include<iostream>
//using namespace std;
//const int N = 16;
//void computesum (int n );
//void findelement ( int  [ ] , int  );
//void matricesMultiplicstion ( );
//int main ( )  {
//
//	int  n;
//	int arr2 [ 16 ] = { 1 , 2 , 3 , 5 , 7 , 11 , 13 , 17 , 19 , 21 , 23 , 19 , 31 , 37 , 39 , 41 };
//	cout << "Enter Numbers :";
//	cin >> n;
//	computesum ( n );
//	findelement ( arr2 , 37 );
//	matricesMultiplicstion ( );
//}
//
//void computesum ( int n ) {
//	cout << "COMPUTE SUM " << endl;
//	int count = 0,sum=0;
//	sum=(n*( n + 1 )) / 2;
//
//	cout << "SUM " << sum << endl;
//	cout << "Time :  O(1)" << endl;
//
//}
//void findelement ( int a [ ] , int x ) {
//	int count = 0;
//	int i;
//	cout << "Find a vlaue : " << endl;
//	for ( i = 0; i < N; i++ ) {
//		if ( x == a [ i ] ) {
//			cout << "found " << endl;
//			break;
//			
//		}
//		count++;
//	}
//	if ( i == N )
//		cout << "NOt found ";
//	cout << "Time :  "<<count  << endl;
//}
//
//void matricesMultiplicstion ( ) {
//	int A [ 3 ][ 3 ] = { { 3 , 5 , 2 } , { 5 , 3 , 3 } , { 6 , 9 , 8 }};
//	int B [ 3 ][ 3 ] = { 3 , 3 , 6 , 9 , 8, 3 , 5 , 2 , 5 , };
//	int C [ 3 ][ 3 ];
//	cout << "Multiplication of matrixes is \n";
//	int r , c , k,sum;
//	int count = 0;
//	for ( r = 0; r<3; r++ ) {
//		for ( c = 0; c<3; c++ ) {
//			sum = 0;
//			for ( k = 0; k<3; k++ ) {
//				sum = sum + A [ r ][ k ] * B [ k ][ c ];
//				count++;
//			}
//			C [ r ][ c ] = sum;
//			cout << C [ r ][ c ] << "\t";
//		}
//		cout << endl;
//	}
//	cout << "Time :  " << count << endl;
//}
