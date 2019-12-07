///*MUHAMMAD AZAM
//BCSF15M017*/
//
//
//#include <iostream>
//#include<string>
//using namespace std;
//
//bool ispalindrome ( string  , int );
//int fab ( int );
//int findValue ( int [ ] , int , int );
//
//int main ( )  {
//	string str;
//	
//	cout << "Enter a string : ";
//	getline ( cin , str );
//	if ( ispalindrome ( str , str.size() ) )
//		cout << "Palindrome ";
//	else
//		cout << "It's NOt palindrome ";
//	cout << endl;
//
//	cout << "Enter number of terms for fibonacci Series: ";
//	int x = 0;
//	cin >> x;
//	for ( int count = 0; count < x; count++ )
//		cout << fab ( count ) << "	";
//	cout << endl;
//
//
//
//
//	int a [ 5 ] = { 1 , 12 , 9 , 10 , 10 };
//	cout << "Enter value you want to find : ";
//	int n;
//	cin >> n;
//	int index = findValue ( a , 5 , n );
//	if ( index < 0 )
//		cout << "Value not found ";
//	else 
//	cout <<"Value is at "<<index  <<" index "<< endl;
//}
//
//
//bool ispalindrome ( string str , int size ) {
//
//	static int count = 0;
//	if ( size == 1 )
//		return true;
//	if ( str [ size-1  ] != str [ count ] )
//		return false;
//	else if ( count == size )
//		return true;
//	else {
//		count++;
//		return ispalindrome ( str , size - 1 );
//	}
//}
//int fab ( int n ) {
//	if ( n<2 )
//		return n;
//	else
//
//		return fab ( n - 1 ) + fab ( n - 2 );
//
//}
//int findValue ( int arr [ ] , int size,int value ) {
//
//	if ( size < 0 ) {
//		return -1;
//
//	}
//	else {
//		if ( arr [ size - 1 ] == value )
//			return size - 1;
//
//		return findValue ( arr , size - 1,value );
//	}
//}