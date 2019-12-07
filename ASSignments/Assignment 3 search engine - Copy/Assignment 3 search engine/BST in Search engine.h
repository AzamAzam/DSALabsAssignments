
#include <iostream>
#include <fstream>
#include <string>
#include<map>

using namespace std;

class BSTNode {
public:
	string keyrequest;
	string urls;

	BSTNode* left;
	BSTNode *right;
	BSTNode* parent;
	BSTNode ( ) {
		keyrequest = urls = '\0';
		left = right = parent = NULL;
	}
};



class BST {
public:
	BST ( ) {
		root = NULL;
	}


	multimap<int , string> sortedmap;
	multimap<string , string >urlsmap;
	typedef pair < string , string   > p;
	BSTNode *root;


	void  readHistoryFile ( );
	void readResultFile ( );
	void createBST ( );
	void insertNode ( string , string , int );

	BSTNode* searchInBST ( string );

	void showResult ( string );

};