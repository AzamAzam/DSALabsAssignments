///*MUAMMAD AZAM
//BCSF15M017*/
//
//#include <iostream>
//#include <fstream>
//using namespace std;
//class Queue;
//class node {
//	int RowIndex , colIndex;
//	node*next;
//
//	friend class Queue;
//
//public:
//
//	node ( );
//	~node ( ) {
//		delete next;
//	}
//
//
//
//};
//
//node::node ( ) {
//	RowIndex = 0;
//	colIndex = 0;
//	next = NULL;
//}
//
//class Queue {
//	node* head;
//	node *tail;
//public:
//	void push ( int , int );
//	void pop ( );
//	void display ( );
//	~Queue ( ) {
//		delete head;
//	}
//};
//
//void Queue::push ( int r , int c ) {
//	node *temp = new node;
//	temp->RowIndex = r;
//	temp->colIndex = c;
//	if ( head == NULL ) 
//	{
//	
//	head = temp;
//	tail = temp;
//}
//else {
//	tail->next = temp;
//	tail = temp;
//}
//}
//void Queue::pop ( ) {
//	node *temp = head;
//	head = head->next;
//	delete head;
//}
//void Queue::display ( ) {
//	node *temp = head;
//	
//	
//	while ( temp != NULL ) {
//		cout << " ( " << temp->RowIndex << " , " << temp->colIndex << " ) , ";
//		temp = temp->next;
//	}
//
//}
//
//class Maze {
//	int hurdles , row , col;
//	char **arr;
//	int l = 0 , m = 0;
//
//public:
//	Queue store ;
//	void readFile ( );
//	void pathFind ( );
//	void displayMaze ( ); 
//	void rev ( );
//	bool left ( );
//	bool right ( );
//	bool up ( );
//	bool down ( );
//	Maze ( ) {
//		row = 0;
//		col = 0;
//
//	}
//	~Maze ( ) {
//		for ( int i = 0; i < row; i++ ) {
//			delete arr [ i ];
//		}
//		delete arr;
//	}
//
//};
//
//void Maze::readFile ( ) {
//
//	fstream input;
//	int r = 0; int c = 0;
//	input.open ( "input 1.txt" , ios::in );
//	if ( !input.is_open ( ) ) {
//		cout << "File can't Access ";
//		return;
//	}
//	input >> row;
//	input >> col;
//
//
//	arr = new char* [ row ];
//	for ( int i = 0; i < row; i++ ) {
//		arr [ i ] = new char [ col ];
//	}
//	for ( int i = 0; i < row; i++ ) {
//		for ( int j = 0; j < col; j++ ) {
//			arr [ i ][ j ] = '_';
//		}
//	}
//	arr [ 0 ][ 0 ] = 'S';
//
//
//	input >> hurdles;
//
//	for ( int i = 0; i < hurdles; i++ ) {
//		input >> r;
//		input >> c;
//		arr [ r ][ c ] = 'H';
//	}
//	input.close ( );
//	displayMaze ( );
//	pathFind ( );
//}
//void Maze::pathFind ( ) {
//
//
//	while ( l != row - 1 || m != col - 1 ) {
//		if ( right ( ) );
//
//		else if ( down ( ) );
//
//
//		else if ( left ( ) );
//
//		else if ( up ( ) );
//		else {
//			cout << "Path blocled!!" << endl;
//			break;
//		}
//
//
//	}	  arr [ row-1 ][ col-1 ] = 'E';
//}
//
//bool Maze::right ( ) {
//	if ( m < col - 1 && ( arr [ l ][ m + 1 ] == '_'  ) ) {
//		m++;
//		arr [ l ][ m ] = 'O';
//
//		store.push ( l , m );
//		return true;
//
//	}				return false;
//}
//bool Maze::down ( ) {
//	if ( l < row - 1 && ( arr [ l + 1 ][ m ] == '_'  ) ) {
//
//		l++;
//		arr [ l ][ m ] = 'O';
//
//		store.push ( l , m );
//		return true;
//
//	}				return false;
//}
//
//bool Maze::left ( ) {
//	if ( l > 0 && ( arr [ l - 1 ][ m ] == '_' || arr [ l - 1 ][ m ] == 'O' ) ) {
//
//		l--;
//		arr [ l ][ m ] = 'O';
//		store.push ( l , m );
//		return true;
//
//	}				return false;
//}
//bool Maze::up ( ) {
//
//	if ( m > 0 && ( arr [ l ][ m - 1 ] == '_' || arr [ l ][ m - 1 ] == 'O' ) ) {
//
//		m--;
//		arr [ l ][ m ] = 'O';
//		store.push ( l , m );
//
//		return true;
//
//	}				return false;
//}
//
//
//void Maze::displayMaze ( ) {
//	cout << endl;
//	for ( int i = 0; i < row; i++ ) {
//		for ( int j = 0; j < col; j++ ) {
//			cout << arr [ i ][ j ] << "    ";
//		}
//		cout << endl << endl;
//
//	}
//	store.display ( );
//}
//int main ( ) {
//	system ( "mode con:cols=150 lines=9999" );
//
//	Maze m;
//	m.readFile ( );
//	m.displayMaze ( );
//
//
//
//	return 0;
//}