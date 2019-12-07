#include "BST.h"

int main ( ) {
	BST t;
	Node* m;
	int n , i = 1;
	//Q1
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
	cout << endl;

	vector<int> v=t.largestValues ( );
	for ( size_t i = 0; i < v.size(); i++ ) {
		cout << v[i]<<" " ;
	}

	/*t.mirror ( );
	t.inorderTraverse ( );

*/
	////Q2
	//cout << "Enter key you want to delete : ";
	//cin >> n;
	//m = t.search ( n );

	//if ( m == NULL ) {
	//	cout << "Doesn't exits this key : ";
	//}
	//else {
	//	t.deleteNode ( m );
	//	cout << "Deleted";
	//}
	//cout << endl;

	////Q3
	//cout << "InOrder travese : ";
	//t.inorderTraverse ( );
	//cout << endl;

	////Q4
	//cout << "PreOrder Traverse : ";
	//t.preorderTraverse ( );
	//cout << endl;
	////Q5
	//cout << "post Order traverse : ";
	//t.postorderTraverse ( );
	//cout << endl;

	////Q6
	//cout << "All leaves : " << endl;
	//t.findleaves ( );
	//cout << endl;

	////Q7
	//cout << "Paths : " << endl;
	//t.printPath ( );
	//cout << endl;

	////Q8 
	//cout << "Mincost = " << t.sum << endl;

	////Q9
	//cout << "Total Nodes : " << t.countNode ( ) << endl;

	////Q10
	//cout << "HEIGHT : " << t.heght << endl;

	////Q11
	//cout << "Enter you want  to search : ";
	//cin >> n;
	//m = t.search ( n );
	//if ( m != NULL )
	//	cout << "Found ";
	//else cout << "Not found ";
	//cout << endl;



	////Q12
	//m = t.minimum ( );
	//if ( m != NULL )
	//	cout << "min : " << m->data << endl;
	////Q13 to be  change 
}