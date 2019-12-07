//#include<iostream>
//#include <string>
//using namespace std;
//class Node {
//public:	string data;
//
//		Node *left , *right , *parent;
//		Node ( ) {
//			data = "";
//
//			left = NULL;
//			right = NULL;
//			parent = NULL;
//		}
//};
//class BSTS {
//public:
//	BSTS ( )  {
//		root = NULL;
//}
//	Node* root;
//
//	void insert ( string );
//	void inorderTraverse ( Node* );
//	void inorderTraverse ( );
//	void preorderTraverse ( Node* );
//};
//void BSTS::inorderTraverse ( ) {
//	inorderTraverse ( root );
//
//}
//void BSTS::inorderTraverse ( Node*t ) {
//	if ( t == NULL )
//		return;
//	inorderTraverse ( t->left );
//	cout << t->data << " ";
//	inorderTraverse ( t->right );
//
//}
//void BSTS::insert (string d ) {
//	Node *current = NULL;
//	Node* next = root;
//	Node *temp = new Node;
//	temp->data = d;
//	while ( next != NULL ) {
//		current = next;
//		if ( d < next->data )
//			next = next->left;
//		else  if ( d > next->data )
//			next = next->right;
//		else return;
//	}
//	temp->parent = current;
//	if ( current == NULL )
//		root = temp;
//	else if ( d < current->data )
//		current->left = temp;
//	else
//		current->right = temp;
//	
//}
//
//int main ( ) {
//	BSTS b;
//	b.insert ("Jan" );
//	b.insert ("Feb" );
//	b.insert ("March" );
//	b.insert ("April" );
//	b.insert ( "May");
//	b.insert ( "June");
//	b.insert ("July" );
//	b.insert ("Aug" );
//	b.insert ( "Sep");
//	b.insert ("Oct" );
//	b.insert ("Nov" );
//	b.insert ( "Dec");
//	b.inorderTraverse ( );
//
//}