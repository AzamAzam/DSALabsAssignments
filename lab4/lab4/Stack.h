#include "Node.h"

class Stack {
	Node *top;
	int count;
	int size;
	int element;
public :
	Stack ( ) {
		size = 0;
		top = NULL;
		count = 0;
		element = 0;
	}
	Stack ( int size ) {
	this->size = size;
		top = NULL;
		count = 0;
		element = 0;
	}
	~Stack ( );

	void push ( int element );
	void pop ( );
	bool isEmpty ( );
	bool isFull ( );
	int peek ( );
	int getStackSize ( );
	void print ( );



};
