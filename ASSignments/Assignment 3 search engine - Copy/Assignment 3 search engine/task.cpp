#include"BST in Search engine.h"

int main ( ) {

	BST ob;
	cout << "Reading history file . . . " << endl;
	ob.readHistoryFile ( );
	cout << "Reading REsult file . . . " << endl;
	ob.readResultFile ( );
	cout << "Creating BST . . . " << endl;
	ob.createBST ( );

	string str;
	system ( "cls" );
	do {
		
		cout << endl << "Enter key you want  to search(-1 for exit ) : ";
		getline ( cin , str );
		if ( str != "-1" )
			ob.showResult ( str );
	} while ( str != "-1" );
}