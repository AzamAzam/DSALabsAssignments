//#include"LOGs.h"
#include"BST in Search engine.h"

int main ( ) {

	BST ob;
	ob.readHistoryFile ( );
	ob.sortLogs ( );
	ob.display ( );
	ob.creatBST ( );
	ob.inorderTraverse ( );
	string str;
	
	do {
		cout <<endl<< "Enter key you want  to search : ";
		getline(cin, str);

		BSTNode* n;
		n = ob.searchInBST ( str );
		if ( n ) {
			if ( str == n->urls ) {
				fstream f;
				f.open ( str , ios::in );
				getline ( f , str );
				cout << "output : " << str << endl;
				cout << "URLs Read From: Hard disk "<<endl;
				f.close ( );
			}
			else {
				cout << "output : " << n->urls << endl;
				cout << "URLs Read From : Memory "<<endl;
			}

		}
		else
			cout << "Not found "<<endl;
	} while ( str != "-1" );
}