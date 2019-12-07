#include "BST.h"
#include<algorithm>
void BST::insert ( int d ) {
	Node *current = NULL;
	Node* next = root;
	Node *temp = new Node;
	temp->data = d;
	while ( next != NULL ) {
		current = next;
		if ( d < next->data )
			next = next->left;
		else  if ( d > next->data )
			next = next->right;
		else return;
	}
	temp->parent = current;
	if ( current == NULL )
		root = temp;
	else if ( d < current->data )
		current->left = temp;
	else
		current->right = temp;
	count++;
}


void BST::inorderTraverse ( ) {
	inorderTraverse ( root );

}
void BST::inorderTraverse ( Node*t ) {
	
	if ( t == NULL )
		return;
	
	 inorderTraverse ( t->left );
	cout << t->data << " ";
	inorderTraverse ( t->right );

}

void BST::preorderTraverse ( ) {
	preorderTraverse ( root );

}
void BST::preorderTraverse ( Node*t ) {
	if ( t == NULL )
		return;
	cout << t->data << " ";
	preorderTraverse ( t->left );
	
	preorderTraverse ( t->right );

}

void BST::postorderTraverse ( ) {
	postorderTraverse ( root );

}
void BST::postorderTraverse ( Node*t ) {
	if ( t == NULL )
		return;
	postorderTraverse ( t->left );
	
	postorderTraverse ( t->right );
	cout << t->data << " ";


}

Node* BST::search ( int k ) {
	Node*test = root;
	while ( test != NULL&&test->data != k ) {
		if ( k < test->data )
			test = test->left;
		else
			test = test->right;

	}
	return test;
}
Node* BST::minimum ( ) {
	return minimum ( root );
}
Node* BST::minimum ( Node *test ) {

	if ( test != NULL )
	while ( test->left != NULL ) {
		test = test->left;
	}
	return test;
}
Node* BST::maximum ( ) {
	return maximum ( root );
}
Node* BST::maximum ( Node *test ) {

	if ( test != NULL )
	while ( test->right != NULL ) {
		test = test->right;
	}
	return test;
}
/*
bool BST::deleteNode ( Node*test ) {
if ( test == NULL )
return false;
else if ( test->left == NULL&&test->right == NULL ) {
Node*p = test->parent;
if ( p->left == test )
p->left = NULL;
else
p->right = NULL;
delete test;
return true;
}

else if ( test->left == NULL ) {
Node*p = test->parent;

if ( p->left == test )
p->left = test->right;
else
p->right = test->right;
delete test;
return true;
}
else if ( test->right == NULL ) {
Node*p = test->parent;

if ( p->left == test )
p->left = test->left;
else
p->right = test->left;
delete test;
return true;
}
else {

Node*temp = minimum ( test->right );
Node *p = temp->parent;

}

}*/
Node* BST::successor ( Node* test ) {
	if ( test == NULL )
		return NULL;
	if ( test->right != NULL )
		return minimum ( test->right );
	else {
		Node* p = test->parent;
		while ( p != NULL&&test == p->right ) {
			test = p;
			p = p->parent;

		}
		return test->parent;
	}

}
//void BST::deleteNode ( Node *x ) {
//	Node *temp ;
//	if ( x->right == NULL && x->left == NULL ) // no child
//	{
//		temp = x->parent;
//		if ( temp->right == x )
//			temp->right = NULL;
//		else
//			temp->left = NULL;
//	}
//	else if ( x->right != NULL && x->left == NULL ) // right child
//	{
//		temp = x->parent;
//		temp->right = x->right;
//	}
//	else if ( x->right == NULL && x->left != NULL ) // left child
//	{
//		temp = x->parent;
//		temp->left = x->left;
//	}
//	else if ( x->right != NULL && x->left != NULL ) // both child
//	{
//		Node*temp = minimum ( test->right );
//		test->data = temp->data;
//
//		return deleteNode ( temp );
//
//	}
//	count--;
//}
int BST::countNode ( )
{
	return count;
}
void BST::findleaves ( ) {
	findleaves ( root );
}
void BST::findleaves ( Node*x ) {
	if ( x == NULL )
		return;

	findleaves ( x->left );
	findleaves ( x->right );

	if ( x->left == NULL&&x->right==NULL ) {
		cout << x->data << " ";
		leaves.insertAtTail ( x->data );
	}
	
		

}

//void BST::printPath ( ) {
//	printPath ( root );
//
//}
void BST::printPath ( ) {
	LNode* n = leaves.head;
		
	int s,h;

	while ( n != NULL ) {
		s = 0;
		h = 0;
		Node*test = root;
		while ( test != NULL ) {
			cout << test->data<<" ";
			s += test->data;
			h++;
			if ( n->data < test->data )
				test = test->left;
			else 
				test = test->right;
			
		}
		if ( h>heght )
			heght = h;
		if ( sum == 0 )
			sum = s;
		else if ( s < sum )
			sum = s;
		cout << endl;
		n = n->next;
	}
}	
void BST::mirror ( ) {
	mirror ( root );
}
void BST::mirror ( Node* r ) {

	if ( r == NULL )
		return;
	swap ( r->left , r->right );
	mirror ( r->left );
	mirror ( r->right );
}
vector<int> BST::largestValues (  ) {
	return largestValues ( root );
}
vector<int>BST:: largestValues ( Node* root ) {
	vector<int> largeEachRow;
	if ( !root ) return largeEachRow;
	vector<Node*> currentRow;
	currentRow.push_back ( root );
	while ( currentRow.size ( ) > 0 ) {
		int rowMax = currentRow [ 0 ]->data;
		vector<Node*> nextRow;
		for ( int i = 0; i < currentRow.size ( ); i++ ) {

			rowMax = max ( rowMax , currentRow [ i ]->data ); 
			if ( currentRow [ i ]->left )
				nextRow.push_back ( currentRow [ i ]->left );
			if ( currentRow [ i ]->right ) 
				nextRow.push_back ( currentRow [ i ]->right );
		
		}
		largeEachRow.push_back ( rowMax );
		currentRow = nextRow;
	}
	return largeEachRow;
}