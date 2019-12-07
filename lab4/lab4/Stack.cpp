#include "Stack.h"

void Stack::push ( int element ) {
	if ( isFull() )
		cout << "Stack is Full so it can't be pushed more "<<endl;
	else {
		Node *temp = new Node;
		temp->data = element;
		temp->next = top;
		top = temp;
		this->element = element;
		count++;
	}
}
void Stack::pop ( ) {
	if ( isEmpty ( ) )
		cout << "Stack is empty so it can't be poped " << endl;
	else {
		Node *temp = top;
		cout << "Removing Element : " << top->data << endl;
		top = top->next;
		count--;
		delete temp;
		if ( count != 0 )
			element = top->data;
		else
			element = 0;
	}
}
bool Stack::isEmpty ( ) {
	if ( count <= 0 )
		return true;
	return false;
}
bool Stack::isFull ( ) {
	if ( count == size )
		return true;
	return false;

}

void Stack::print ( ) {
	int n = 0;
	Node *temp = top;

	while ( n < count ) {
		cout << temp->data << " ";
		n++;
		
		temp = temp->next;
	}
}
int Stack::peek ( )  {
	
	return element;
}
int Stack::getStackSize ( ) {
	return count;
}
Stack::~Stack ( ) {
	while ( top != NULL ) {
		Node *temp;
		temp = top;
		top = top->next;
		delete temp;
	}
	cout << "Stack deleted "<<endl;
}