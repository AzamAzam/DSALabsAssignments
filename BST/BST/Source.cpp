#include<iostream>
#include <time.h>
using namespace std;
class Node {
public:	int data;

		Node *left , *right , *parent;
		Node ( ) {
			data = 0;
			left = NULL;
			right = NULL;
			parent = NULL;
		}
};
class BST {
	Node* root;
public:
	BST ( ) {
		root = NULL;
	}
	void insert ( int );
	void inorderTraverse ( Node* );
	void inorderTraverse ( );
	Node* search ( int );
	Node* minimum ( );
	Node* maximum ( );
	Node* minimum ( Node* );
	Node* maximum ( Node* );
	Node* predecessor ( Node* );
	Node* successor ( Node* );
	bool deleteNode ( Node* );
};


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
Node* BST::predecessor ( Node* test ) {
	if ( test == NULL )
		return NULL;
	if ( test->left != NULL )
		return maximum ( test->left );
	else {
		Node* p = test->parent;
		while ( p != NULL&&test == p->left ) {
			test = p;
			p = p->parent;

		}
		return test->parent;
	}

}
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
		test->data = temp->data;
		deleteNode ( temp );
		
	}

}

int main ( ) {
	BST t;
	Node* m;
	int n , i = 1;
	cout << "Enter Values in BST (end with 0)" << endl;
	do {

		cout << "Enter number " << i << " : ";
		cin >> n;
		if ( n != 0 )
			t.insert ( n );
		i++;
		//cin.clear ( );
		cin.ignore ( );
	} while ( n != 0 );

	t.inorderTraverse ( );
	cout << "Enter you want  to search : ";
	cin >> n;
	m = t.search ( n );
	if ( m != NULL )
		cout << "Found ";
	else cout << "Not found ";
	cout << endl;

	m = t.maximum ( );
	if ( m != NULL )
		cout << "max : " << m->data << endl;

	m = t.minimum ( );
	if ( m != NULL )
		cout << "min : " << m->data << endl;

	cout << "Enter a value you want  find  successor : ";
	cin >> n;
	m = t.search ( n );
	m = t.successor ( m );
	if ( m == NULL )
		cout << "Not found successor ";
	else
		cout << m->data;
	cout << endl;

	cout << "Enter a value you want  find  predecessor : ";
	cin >> n;
	m = t.search ( n );
	m = t.predecessor ( m );
	if ( m == NULL )
		cout << "Not found predecessor ";
	else
		cout << m->data;
	cout << endl;

	cout << "Enter key you want to delete : ";
	cin >> n;
	m = t.search ( n );
	n = t.deleteNode ( m );
	if ( n == 0 ) {
		cout << "Doesn't exits this key : ";
	}
	else
		cout << "Deleted";
	cout << endl;
	t.inorderTraverse ( );

}