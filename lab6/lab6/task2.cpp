//#include<iostream>
//#include <ctime>
//using namespace std;
//template <class T>
//void populateArr ( T [ ] , int );
//template <class T>
//int binarysearch ( T [ ] , int , T n );
//
//template <class T>
//void bubblesort ( T [ ] , int );
//
//template <class T>
//void displayArr ( T [ ] , int n );
//
//template <class T1>
//void mergeSort ( T1 a [ ] , int , int );
//
//
//template< class T>
//int  linearsearch ( T a [ ] , int s , T n );
//
//int main ( ) {
//	srand ( time ( 0 ) );
//	float Arr1 [ 100 ];
//	int  Arr2 [ 100 ];
//
//	populateArr ( Arr1 , 100 );
//	cout << endl;
//	populateArr ( Arr2 , 100 );
//
//	int index;
//	mergeSort ( Arr1 , 0 , 99 );  //size-1
//	displayArr ( Arr1 , 100 );
//
//	bubblesort ( Arr2 , 100 );
//	displayArr ( Arr2 , 100 );
//
//	cout << "Enter element you find  to search in Array 1 : ";
//	float number;
//
//	cin >> number;
//
//	index = binarysearch ( Arr1 , 100 , number );
//	if ( index != -1 )
//		cout << number << " found on index : " << index << endl;
//	else
//		cout << number << " nOt found " << endl;
//
//	int numb;
//	cout << "Enter element you find  to search  in Array2: ";
//	cin >> numb;
//
//	index = linearsearch ( Arr2 , 100 , numb );
//	if ( index != -1 )
//		cout << number << " found on index : " << index << endl;
//	else
//		cout << number << " nOt found " << endl;
//
//
//}
//
//
//
//
//template <class T>
//void displayArr ( T a [ ] , int n ) {
//	cout << " Ascending Order : ";
//
//	for ( int i = 0; i < n; i++ )
//		cout << " " << a [ i ];
//	cout << endl;
//
//}
//template <class T>
//void bubblesort ( T Arr [ ] , int N ) {
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
//template <class T>
//void populateArr ( T A [ ] , int size ) {
//
//	for ( int i = 0; i < size; i++ ) {
//		A [ i ] = rand ( ) % RAND_MAX;
//		//cout << A [ i ] << " ";
//	}
//}
//
//template <class T>
//int binarysearch ( T Arr [ ] , int size , T n ) {
//	int start = 0 , mid , end = size;
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
//template <class T>
//void mergeArray ( T arr [ ] , int l , int m , int r ) {
//
//	int i , j , k;
//	int n1 = m - l + 1;
//	int n2 = r - m;
//	T *L = new T [ n1 ] , *R = new T [ n2 ];
//
//	for ( i = 0; i < n1; i++ )
//		L [ i ] = arr [ l + i ];
//
//	for ( j = 0; j < n2; j++ )
//		R [ j ] = arr [ m + 1 + j ];
//
//	i = j = 0 , k = l;
//
//	while ( i < n1 && j < n2 ) {
//		if ( L [ i ] <= R [ j ] )
//			arr [ k++ ] = L [ i++ ];
//		else
//			arr [ k++ ] = R [ j++ ];
//	}
//	//Copy the remaining elements of L[], if there are
//	while ( i < n1 ) {
//		arr [ k++ ] = L [ i++ ];
//	}
//	//Copy the remaining elements of R[], if there are
//	while ( j < n2 ) {
//		arr [ k++ ] = R [ j++ ];
//	}
//}
//template <class T1>
//void mergeSort ( T1 a [ ] , int left , int right ) {
//	if ( left < right ) {
//		int mid = left + ( right - left ) / 2;
//		mergeSort ( a , left , mid );
//		mergeSort ( a , mid + 1 , right );
//		mergeArray ( a , left , mid , right );
//	}
//}
//
//template< class T>
//int  linearsearch ( T a [ ] , int s , T n ) {
//	for ( int i = 0; i < n; i++ ) {
//		if ( n == a [ i ] )
//			return i;
//
//	}
//	return -1;
//}