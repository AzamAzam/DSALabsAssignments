/*MUAMMAD AZAM
BCSF15M017*/

#include"Node.h"

class logs {
	Node*  head;
	Node*tail;

	fstream input;
	string str;
	int responseSize;

public:
	void readFile ( );
	void fetchData ( );
	void insertNode ( string );
	void display ( );
	bool search ( string );
	logs ( ) {
		head = NULL;
		tail = NULL;
		responseSize = 0;
	}
};