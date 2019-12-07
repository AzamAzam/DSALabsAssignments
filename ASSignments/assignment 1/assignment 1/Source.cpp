///*MUAMMAD AZAM
//BCSF15M017*/
//
//#include <iostream>
//#include <fstream>
//using namespace std;
//class stack;
//class Node {
//	int RowIndex , colIndex;
//	Node*next;
//
//	friend class Stack;
//
//public:
//
//	Node ( );
//
//
//
//
//};
//
//Node::Node ( ) {
//	RowIndex = 0;
//	colIndex = 0;
//	next = NULL;
//}
//
//class Stack {
//
//public:
//	Stack ( ) {
//		head = NULL;
//	}
//	Node* head;
//	void push ( int , int );
//	void pop ( );
//	void display ( );
//	void rev ( );
//};
//
//void Stack::push ( int r , int c ) {
//	Node *temp = new Node;
//	temp->RowIndex = r;
//	temp->colIndex = c;
//
//	temp->next = head;
//	head = temp;
//
//}
//void Stack::pop ( ) {
//	Node *temp = head;
//	if ( head->next != NULL )
//		head = head->next;
//	else
//		head = NULL;
//	delete head;
//}
//void Stack::display ( ) {
//	Node *temp = head;
//
//
//	while ( temp != NULL ) {
//		cout << " ( " << temp->RowIndex << " , " << temp->colIndex << " ) , ";
//		temp = temp->next;
//	}
//
//}
//
//void Stack::rev ( ) {
//	Node *n = head;
//	Node *n1 = NULL;
//	while ( n != NULL ) {
//
//
//		Node *temp = n->next;
//		n->next = n1;
//		n1 = n;
//		n = temp;
//
//	}
//	head = n1;
//}
//
//
//class Maze {
//	int hurdles , row , col;
//	char **arr;
//	int l = 0 , m = 0;
//	int count , maxiterations;
//public:
//	Stack store ;
//	void readFile ( );
//	bool pathFind ( );
//	void displayMaze ( );
//	bool left ( );
//	bool right ( );
//	bool up ( );
//	bool down ( );
//	Maze ( ) {
//		row = 0;
//		col = 0;
//		count = 0;
//	}
//	~Maze ( ) {
//		for ( int i = 0; i < row; i++ ) {
//			delete arr [ i ];
//		}
//		delete arr;
//	}
//
//};
//void Maze::readFile ( ) {
//
//	fstream input;
//	int r = 0; int c = 0;
//	input.open ( "input 1.txt" , ios::in );
//
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
//
//	//maxiterations = row*col;
//	displayMaze ( );
//	if ( !pathFind ( ) )
//		cout << "path blocked !!" << endl;
//
//}
//bool Maze::pathFind ( ) {
//
//	//	count = 0;
//	while ( l != row - 1 || m != col - 1 ) {
//
//		if ( right ( ) );
//
//		else if ( down ( ) );
//
//
//		else if ( left ( ) );
//
//		else if ( up ( ) );
//
//		else {
//			return false;
//			//	break;
//		}
//
//
//	}	  arr [ row - 1 ][ col - 1 ] = 'E';
//	return true;
//}
//
//bool Maze::right ( ) {
//	if ( m < col - 1 && ( arr [ l ][ m + 1 ] == '_' || arr [ l ][ m + 1 ] == 'O' ) ) {
//		if ( arr [ l ][ m + 1 ] == 'O' ) {
//			arr [ l ][ m ] = 'A';
//			store.pop ( );
//		}
//
//		m++;
//		arr [ l ][ m ] = 'O';
//
//		store.push ( l , m );
//		return true;
//
//	}				return false;
//}
//bool Maze::down ( ) {
//	if ( l < row - 1 && ( arr [ l + 1 ][ m ] == '_' || arr [ l + 1 ][ m ] == 'O' ) ) {
//		if ( arr [ l + 1 ][ m ] == 'O' ) {
//			arr [ l ][ m ] = 'A';
//			store.pop ( );
//		}
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
//		if ( arr [ l - 1 ][ m ] == 'O' ) {
//			arr [ l ][ m ] = 'A';
//			store.pop ( );
//		}
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
//		if ( arr [ l ][ m - 1 ] == 'O' ) {
//			store.pop ( );
//		}
//		arr [ l ][ m ] = 'A';
//		m--;
//		arr [ l ][ m ] = 'O';
//		store.push ( l , m );
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
//	store.rev ( );
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