#include "LOGs.h"
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
	~BSTNode ( );



};



class BST : public logs {
public:
	BST ( ) {
		root = NULL;
	}
	BSTNode *root;
	void creatBST ( );
	void insertNode ( string , string,int  );
	
	BSTNode* searchInBST (string  );
	void inorderTraverse ( );
	void inorderTraverse (BSTNode* );
	
	
};