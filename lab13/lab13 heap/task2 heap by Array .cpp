#include <iostream>
using namespace std;

class perQ {
	int* arr;
	int index;

public:
	perQ ( );
	perQ ( int );
	~perQ ( ) {
		//delete []arr ;
	}
	bool is_empty ( );
	void pop ( );
	void  push ( int );
	int  size ( );
	int top ( );

	void display ( );

};
perQ::perQ ( ) {
	int s = 10;
	arr = new int [ s ];
	for ( int i = 0; i < s; i++ ) {
		arr [ i ] = -1;
	}
	index = 1;
}
perQ::perQ ( int s ) {
	s = s + 2;
	arr = new int [ s ];
	for ( int i = 0; i < s; i++ ) {
		arr [ i ] = -1;
	}
	index = 1;
}
bool perQ::is_empty ( ) {
	if ( index < 1 )
		return true;
	else
		return false;

}

int perQ::size ( ) {
	return index - 1;

}

int perQ::top ( ) {
	return arr [ 1 ];
}
void perQ::push ( int x ) {
	arr [ index ] = x;
	int i = index;

	while ( i > 1 && arr [ i ] > arr [ i / 2 ] ) {
		swap ( arr [ i ] , arr [ i / 2 ] );
		i = i / 2;
	}
	index++;
}

void perQ::pop ( ) {
	if ( index < 1 )
		return;
	arr [ 1 ] = arr [ index-1 ];
	arr [ index - 1 ] = 0;
	int i = 1;

	int max , maxindex;
	while ( i < index && ( arr [ i ] < arr [ (i * 2) + 1 ] || arr [ i ] < arr [ i * 2 ] ) ) {
		if ( arr [ i * 2 ] > arr [ (i * 2) + 1 ] ) {
			max = arr [ i * 2 ];
			maxindex = i * 2;
		}
		else {

			max = arr [ (i * 2) + 1 ];
			maxindex = (i * 2) + 1;
		}
		if ( arr [ i ] < arr [ maxindex ] )
			swap ( arr [ i ] , arr [ maxindex ] );
		i = maxindex;
	}
	index--;
}
void perQ::display ( ) {
	for ( int i = 1; i < index; i++ ) {
		cout <<arr [ i ] << " ";

	}
}
int main ( ) {

	cout << "How many values you want  to push : ";
	int n , m;
	cin >> n;

	perQ q ( n );

	while ( n > 0 ) {
		cout << "Enter value : ";
		cin >> m;
		q.push ( m );
		n--;
	}
	q.display ( );
	cout <<"top : "<< q.top ( ) << endl;
	cout <<"size : "<< q.size ( ) << endl;
	cout << "pop an elemnent " << endl;
	q.pop ( );
	q.display ( );
	//	cout << q.top ( ) << endl;
	//	cout << q.size ( ) << endl;

	//	return 0;
}