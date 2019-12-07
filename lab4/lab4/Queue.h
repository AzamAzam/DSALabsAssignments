#include "Node.h"

class Queue {
	Node *rear;
	Node *front;
	int count;
public:
	Queue ( ) {
		rear = NULL;
		front = NULL;
		count = 0;
	}
	bool isEmpty ( );
	void clear ( );
	void Enqueue ( int element );
	void deQueue ( );
	void getfirstNode ( );
	void print ( );

};