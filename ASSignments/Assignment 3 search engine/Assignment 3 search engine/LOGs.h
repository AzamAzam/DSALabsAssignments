/*MUAMMAD AZAM
BCSF15M017*/

#include"LinkListNode.h"
class BST;
class logs {
	LinkListNode*  head;
	LinkListNode* tail;

	fstream input;
	string str;
	friend class BST;
public:
	void readHistoryFile ();
	
	void insertNode ( string );
	void display ( );
	bool search ( string );
	void sortLogs ( );
	logs ( ) {
		head = NULL;
		tail = NULL;
		
	}
};