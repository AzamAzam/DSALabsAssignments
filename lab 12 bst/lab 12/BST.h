#include<iostream>
#include<vector>
#include "linklist.h"
using namespace std;
class Node {
public:	int data ;

		Node *left , *right , *parent;
		Node ( ) {
			data = 0;
			
			left = NULL;
			right = NULL;
			parent = NULL;
		}
};
class BST {
public:
	Node* root;
	int count,sum,heght ;
	linkList leaves;

	BST ( ) {
		root = NULL;
		count = 0;
		sum =heght= 0;
	}
	void insert ( int );
	void insert ( string );
	void inorderTraverse ( Node* );
	void inorderTraverse ( );
	void preorderTraverse ( Node* );
	void preorderTraverse ( );
	void postorderTraverse ( Node* );
	void postorderTraverse ( );

	Node* search ( int );
	Node* minimum ( );
	Node* maximum ( );
	Node* minimum ( Node* );
	Node* maximum ( Node* );
	
	Node* successor ( Node* );

	void  findleaves ( );
	void  findleaves ( Node* );
	void printPath ( );


	void  deleteNode ( Node* );
	int countNode ( );
	void mirror ( Node* );
	void mirror (  );
	vector<int> largestValues ( Node* );
	vector<int> largestValues (  );
};
