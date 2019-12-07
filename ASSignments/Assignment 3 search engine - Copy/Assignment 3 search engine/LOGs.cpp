#include"LOGs.h"

void logs::readHistoryFile (  ) {

	input.open ("search-history.txt" , ios::in );
	if ( !input.is_open ( ) ) {
		cout << "history file can't open " << endl;
		return;
	}
	int i=1;
	while ( !input.eof ( )&&i<=10000 ) {		   //reading data from file 
		getline ( input , str );
		if ( !search ( str ) )
			insertNode ( str );
		i++;
	}
	input.close ( );
}
void logs::insertNode ( string pageName ) {

	LinkListNode *n = new LinkListNode;
	n->keyRequest = pageName;
	if ( head == NULL )										  // first Node 
	{
		head = n;
		tail = n;
	}
	else {
		n->pervious = tail;
		tail->next = n;					// insert a  node at tail  
		tail = n;
		tail->next = NULL;
	}
}
void logs::display ( ) {
	LinkListNode *temp = head;
	fstream output;
	output.open ( "T3.txt" , ios::out );
	int i = 1;
	while ( temp != NULL&&i<=5 ) {


		output << left << setw ( 50 ) << temp->keyRequest << temp->countRequest << endl;
		//cout << left << setw ( 50 ) << temp->keyRequest << temp->countRequest << endl;
		temp = temp->next;
		i++;

	}
	output.close ( );

}
bool logs::search ( string name ) {										  //searching and increment  if found
	LinkListNode * temp = head;
	LinkListNode* temp2 = tail;
	if ( temp == NULL )
		return false;
	while ( temp != temp2&& temp->next != temp2 ) {
		if ( name == temp->keyRequest ) {
			temp->countRequest++;
			return true;
		}
		else if ( name == temp2->keyRequest ) {
			temp2->countRequest++;
			return true;
		}
		temp = temp->next;
		temp2 = temp2->pervious;

	}
	if ( name == temp->keyRequest ) {
		temp->countRequest++;
		return true;
	}
	else if ( name == temp2->keyRequest ) {
		temp2->countRequest++;
		return true;
	}
	return false;

}
void logs::sortLogs ( ) {
	LinkListNode *temp1 = head;
	LinkListNode* temp2;
	int i = 1;
	while ( temp1 != NULL&&i<=10 ) {
		 temp2 = temp1->next;
		while ( temp2 != NULL ) {
			if ( temp1->countRequest <  temp2->countRequest ) {
				swap ( temp1->countRequest , temp2->countRequest );
				swap ( temp1->keyRequest , temp2->keyRequest );
			}
			temp2 = temp2->next;
		}
		temp1 = temp1->next;
		i++;
	}
	
	while ( temp1 != NULL ) {
		LinkListNode* tobeDeleted = temp1;
		
		temp1 = temp1->next;
		delete tobeDeleted;
	}

}
