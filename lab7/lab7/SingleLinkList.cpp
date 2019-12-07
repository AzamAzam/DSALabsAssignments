/*MUHAMMAD AZAM
BCSF15M017*/

#include "SingleLinkList.h" 



LinkList::LinkList ( ) {
	head = NULL;
	tail = NULL;
	size = 0;
}


LinkList::~LinkList ( ) {
	while ( head != NULL ) {
		Node *temp = head;
		temp = temp->next;

		delete head;
		head = temp;
	}
	cout << "Distructor"<<endl;
}

void LinkList::reverse ( ) {

	Node *current = head->next;
	Node *pervious = NULL;
	while ( current != NULL ) {


		current = head->next;
		head->next = pervious;
		pervious = head;
		head = current;

	}
	head = pervious;

}
void LinkList::display ( ) {

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

void LinkList::createLinkList ( int s) {
	
	
	cout << "Enter Values : " << endl;
	int value;
	for ( int i = 1; i <= s; i++ ) {
		cout << "Enter  " << i <<  "  :  ";
		cin >> value;
		Node *temp = new Node;
		temp->data = value;
		if ( i == 1 ) {
			tail = temp;
			head = temp;

		}
		else {
			tail->next = temp;
			tail = temp;
		}
		size++;
	}
	tail->next = NULL;

}
void LinkList::insertNode ( int NodeNumber , int value ) {
	
	
	if ( NodeNumber > size ) {

		cout << "Node can't insert Its size is  " << size << endl;
		return;
	}
	if ( NodeNumber == 1 )   {
	insertHead (value );
	return;
	}
	int count = 2;
	Node* NEWNODE = new Node;
	NEWNODE->data = value;
	Node *temp = head;
	while ( count < NodeNumber&&count <= size ) {
		temp = temp->next;
		cout << count++;

	}
	NEWNODE->next = temp->next;
	temp->next = NEWNODE;
	size++;
}
void  LinkList::insertHead ( int n ) {
	Node *temp = new Node;
	temp->data = n;
	temp->next = head;
	head = temp;
	size++;
}
void LinkList::insertTail ( int n ) {
	Node *temp = new Node;
	temp->data = n;
	tail->next = temp;
	tail = temp;
	size++;
}
void LinkList::push ( int x ) {
	insertHead ( x );
}
void LinkList::sortLinkList ( ) {
	Node *temp1 = head;

	while ( temp1 != NULL ) {
		Node*temp2 = temp1;
		while ( temp2 != NULL ) {
			if ( temp1->data > temp2->data )
				swap ( temp1->data , temp2->data );
			temp2 = temp2->next;
		}
		temp1 = temp1->next;
	}

}

bool LinkList::compareLinkList ( LinkList* h2 ) {
	Node *FirstNode = this->head;
	Node *SecondNode = h2->head;
	

	while ( FirstNode != NULL || SecondNode != NULL ) {
		if ( ( FirstNode != NULL && SecondNode == NULL ) || ( FirstNode == NULL && SecondNode != NULL ) )
			return false;
		if ( FirstNode->data != SecondNode->data )
			return false;
		
		FirstNode = FirstNode->next;
		SecondNode = SecondNode->next;
	}
	return true;
}


