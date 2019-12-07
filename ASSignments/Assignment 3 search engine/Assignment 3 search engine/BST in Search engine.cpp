#include"BST in Search engine.h"

void BST::creatBST ( ) {
	LinkListNode *read = head;

	for ( int nodes = 1; nodes <= 10000; nodes++ ) {

		string key = read->keyRequest;
		fstream file;
		file.open ( "search-results.txt" , ios::in );
		if ( !file.is_open ( ) ) {
			cout << "result file can't open " << endl;
			return;
		}

		string line;
		char *substrkey = new char [ 30 ] , *substrtUrls;
		while ( !file.eof ( ) ) {
			getline ( file , line );
			int i = 0;

			while ( line [ i ] != ':' ) {
				substrkey [ i ] = line [ i ];
				i++;
			}
			substrkey [ i ] = '\0';
			if ( substrkey == key ) {
				substrtUrls = new char [ line.length ( ) ];
				int j = 0;
				for ( i += 2; line [ i ] != '\0'; i++ ) {
					substrtUrls [ j++ ] = line [ i ];
				}
				substrtUrls [ j ] = '\0';
				insertNode ( substrkey , substrtUrls , nodes );
				break;
			}
		}
		read = read->next;
		file.close ( );
	}

}

void BST::insertNode ( string k , string u , int n ) {
	BSTNode *current = NULL;
	BSTNode* next = root;
	BSTNode *temp = new BSTNode;
	temp->keyrequest = k;
	if ( n <= 1000 ) {
		temp->urls = u;
		
	}
	else {
		fstream file;
		file.open ( k , ios::out );
		file << u;
		temp->urls = k;
		
		file.close ( );
	}
	while ( next != NULL ) {
		current = next;
		if ( k < next->keyrequest )
			next = next->left;
		else  if ( k > next->keyrequest )
			next = next->right;
		else return;
	}

	temp->parent = current;
	if ( current == NULL )
		root = temp;
	else if ( k < current->keyrequest )
		current->left = temp;
	else
		current->right = temp;
}

void BST::inorderTraverse ( ) {
	inorderTraverse ( root );

}
void BST::inorderTraverse ( BSTNode*t ) {
	if ( t == NULL )
		return;
	inorderTraverse ( t->left );
	fstream file;
	file.open ( "name.txt" , ios::app );
	//cout << t->keyrequest << endl;
	file << t->keyrequest << endl;

	//cout << t->urls << endl << endl;
	file << t->urls << endl << endl;
	file.close ( );
	inorderTraverse ( t->right );

}

BSTNode* BST::searchInBST ( string k) {
	BSTNode*test = root;
	while ( test != NULL&&test->keyrequest != k ) {
		if ( k < test->keyrequest )
			test = test->left;
		else
			test = test->right;

	}
	return test;

}