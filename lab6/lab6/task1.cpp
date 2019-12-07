//#include <iostream>
//using namespace std;
//void bubblesort ( int [ ] , int );
//void mergeArray ( int [ ] , int , int );
//void mergeSort ( int [ ] , int , int );
//void displayArr ( int [ ] , int );
//int  linearsearch ( int [ ] , int , int );
//int binarysearch ( int [ ] , int , int );
//
//int main ( ) {
//	const int SIZE = 10;
//	int Arr [ SIZE ] = { 2 , 5 , 6 , 4 , 19 , 2 , 15 , 3 , 9 , 10 };
//	int index;
//
//	mergeSort ( Arr , 0 , SIZE - 1 );
//	//	bubblesort ( Arr ,SIZE);
//	displayArr ( Arr , SIZE );
//	cout << "Enter element you find  to sesrch : ";
//	int number;
//
//	cin >> number;
//
//	//index = linearsearch ( Arr , SIZE , number );
//	//if ( index != -1 )
//	//	cout << number << " found on index : " << index << endl;
//	//else
//	//	cout << number << " nOt found " << endl;
//
//	index = binarysearch ( Arr , SIZE , number );
//	if ( index != -1 )
//		cout << number << " found on index : " << index << endl;
//	else
//		cout << number << " nOt found " << endl;
//
//	return 0;
//}
//void displayArr ( int a [ ] , int n ) {
//	cout << " Ascending Order : ";
//
//	for ( int i = 0; i < n; i++ )
//		cout << " " << a [ i ];
//	cout << endl;
//
//}
//void mergeArray ( int arr [ ] , int l , int m , int r ) {
//	
//	int i , j , k;
//	int n1 = m - l + 1;
//	int n2 = r - m;
//	int *L = new int [ n1 ] , *R = new int [ n2 ];
//
//	for ( i = 0; i < n1; i++ )
//		L [ i ] = arr [ l + i ];
//
//	for ( j = 0; j < n2; j++ ) 
//		R [ j ] = arr [ m + 1 + j ];
//
//	i = j = 0 , k = l;
//
//	while ( i < n1 && j < n2 ) 
//	{
//		if ( L [ i ] <= R [ j ] )
//			arr [ k++ ] = L [ i++ ];
//		else
//			arr [ k++ ] = R [ j++ ];
//	}
//	//Copy the remaining elements of L[], if there are
//	while ( i < n1 ) 	
//	{
//		arr [ k++ ] = L [ i++ ];
//	}
//	//Copy the remaining elements of R[], if there are
//	while ( j < n2 ) 
//	{
//		arr [ k++ ] = R [ j++ ];
//	}
//}
//
//void mergeSort ( int a [ ] , int left , int right ) {
//	if ( left < right ) {
//		int mid = left + ( right - left ) / 2;
//		mergeSort ( a , left , mid );     
//		mergeSort ( a , mid + 1 , right ); 
//		mergeArray ( a , left , mid , right );
//	}
//}
//
//
//
//
//void bubblesort ( int Arr [ ] , int N ) {
//
//
//	int i , j;
//	for ( i = 0; i < N; i++ ) {
//
//		for ( j = 0; j < N - i - 1; j++ ) {
//
//			if ( Arr [ j ] >= Arr [ j + 1 ] )
//				swap ( Arr [ j ] , Arr [ j + 1 ] );
//
//		}
//
//	}
//
//
//}
//int  linearsearch ( int a [ ] , int s , int n ) {
//	for ( int i = 0; i < n; i++ ) {
//		if ( n == a [ i ] )
//			return i;
//
//	}
//	return -1;
//}
//int binarysearch ( int Arr [ ] , int s , int n ) {
//	int start = 0 , mid , end = n;
//
//
//	while ( start <= end ) {
//		mid = ( start + end ) / 2;
//
//		if ( n == Arr [ mid ] )
//			return mid;
//		else if ( n < Arr [ mid ] ) 
//			end = mid - 1;
//		else 
//			start = mid + 1;
//
//	}		 
//	return -1;
//}