/*MUHAMMAD AZAM
BCSF15M017*/

#include "DoubleLinkList.h"


DoubleLinkList::DoubleLinkList ( ) {
	head = NULL;
	tail = NULL;
	size = 0;
}


DoubleLinkList::~DoubleLinkList ( ) {
	while ( head != NULL ) {
		Node *temp = head;
		temp = temp->next;

		delete head;
		head = temp;
	}
	cout << "Distructor" << endl;
}
void DoubleLinkList::display ( ) {
	cout << endl;
	Node * temp;

	temp = head;

	int count = 1;

	while ( temp != NULL ) {
		cout << count << "\t" << temp->data << endl;
		temp = temp->next;
		count++;

	}
	cout << endl;
}
void DoubleLinkList::createLinkList ( int s ) {

	
	cout << "Enter Values : " << endl;
	int value;
	for ( int i = 1; i <= s; i++ ) {
		cout << "Enter  " << i << "  :  ";
		cin >> value;
		Node *temp = new Node;
		temp->data = value;

		if ( i == 1 ) {
			tail = temp;
			head = temp;
		}
		else {
			temp->perivous = tail;
			tail->next = temp;
			tail = temp;
		}
		size++;
	}
	tail->next = NULL;
	
}

void DoubleLinkList::enqueue ( int n) {
	
	Node *temp = new Node;
	temp->perivous = tail;
	tail->next = temp;
	temp->data = n;
	tail = temp;
	size++;
}
void DoubleLinkList::deleteIthNode ( int n) {
	
	if ( n > size ) {
		cout << "It cant be deleted ";
		return;
	} 
	Node *current = head->next;
	Node *perviousNOde = head;
	Node *temp = new Node;

	int count = 1;
	if ( n > 1 ) {
		while ( count < n - 1 ) {
			current = current->next;
			perviousNOde = perviousNOde->next;
			count++;

		}

		perviousNOde->next = current->next;
		if ( n < size )
			current->next->perivous = perviousNOde;
		delete current;
	}
	else if ( n == 1 ) {
		temp = head;
		head = head->next;
		head->next->perivous = NULL;
	}



}