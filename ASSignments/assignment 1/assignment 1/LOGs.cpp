#include"LOGs.h"

void logs::readFile ( ) {

	input.open ( "input file 2.txt" , ios::in );
	if ( !input.is_open ( ) ) {
		cout << "file can't open " << endl;
		return;
	}
	

	
	while ( !input.eof ( ) ) {		   //reading data from file 

		getline ( input , str );
		fetchData ( );
		
	}
	input.close ( );
}
void logs::fetchData ( ) {
	int s = str.length ( );
	
	if ( str [ s-1 ] == '-' ) 	 //hyphon found 
		
		return;
	
	bool QuestionMark = false;
	char * pageName = new char [ s ];
	char* res = new char [ 10 ];
	int spaces = 0;
	int pageIndex = 0 , resIndex = 0;



	for ( int i = 0; i < s; i++ ) {
		if ( str [ i ] == ' ' )
			spaces++;

		else if ( str [ i ] == '?' )
			QuestionMark = true;

		else if ( spaces == 6 && !QuestionMark )				 //web Page name extract
			pageName [ pageIndex++ ] = str [ i ];
																						
		else if ( spaces == 9 ) 			
				res [ resIndex++ ] = str [ i ];											// response size Extract

	}
	res [ resIndex ] = '\0';
	pageName [ pageIndex ] = '\0';

	responseSize = atoi ( res );     //conversion array to integer  
	
	if ( !search ( pageName ) )
		insertNode ( pageName );
}
void logs::insertNode ( string pageName ) {

	Node *n = new Node;

	n->webName = pageName;
	n->totalResponseSize = responseSize;
	if ( head == NULL )										  // first Node 
	{
		head = n;
		tail = n;
	}
	else {
		

		tail->next = n;					// insert a  node at tail  
		tail = n;
		tail->next = NULL;

	}
}
void logs::display ( ) {
	Node *temp = head;
	fstream output;
	output.open ( "T3.txt" , ios::out );
	cout << left << setw ( 75 ) << "Page Name " << setw ( 12 ) << "Total Requests  ";
	cout << setw ( 30 ) << "Total Response Size  " << setw ( 20 ) << " Average Response Size " << endl;
	
	for ( int i = 0; i < 150; i++ ) {   //line draw
		cout << "-";
	}
	cout << endl;
	
	while ( temp!=NULL ) {
		
		cout << left << setw ( 80 ) << temp->webName << setw ( 20 ) << temp->countRequest;
		cout << setw ( 30 ) << temp->totalResponseSize << temp->totalResponseSize / ( double ) temp->countRequest << endl;
	
		output << left << setw ( 80 ) << temp->webName << setw ( 20 ) << temp->countRequest;
		output << setw ( 30 ) << temp->totalResponseSize << temp->totalResponseSize / ( double ) temp->countRequest << endl;

		temp = temp->next;
		
		
	}

}
bool logs::search ( string name ) {										  //searching and add if found 
	Node * temp = head;													   
	while ( temp != NULL ) {
		if ( temp->webName == name ) {
			temp->countRequest++;
			temp->totalResponseSize += responseSize;
			return true;
		}

		tail = temp;
		temp = temp->next;

	}

	return false;

}