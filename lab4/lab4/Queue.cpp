#include "Queue.h"
bool Queue::isEmpty ( ) {
	if ( count == 0 )
		return true;
	return false;

}
void Queue::Enqueue ( int element ) {
	Node *temp = new Node;
	temp->next = NULL;
	temp->data = element;
	if ( rear == NULL &&front == NULL ) {
		front = temp;
		rear = temp;
	}
	else {
		rear->next = temp;
		rear = temp;
	}
	count++;
}
void  Queue::deQueue ( ) {
	if ( count > 0 ) {
		Node *temp = front;

		cout << "Removing Element : " << front->data << endl;
		front = front->next;
		delete temp;
		count--;
	}
}
void Queue::getfirstNode ( ) {
	cout << "Fist Node : " << front->data << endl;
}
void Queue::print ( ) {

	Node *temp = front;

	while ( temp != NULL ) {
		cout << temp->data << " ";

		temp = temp->next;
	}

}
void Queue::clear ( ) {
	while ( front != NULL ) {
		Node *temp;
		temp = front;
		front = front->next;
		delete temp;
	}
	if ( isEmpty ( ) )
		cout << "Queue  Cleared  " << endl;

}