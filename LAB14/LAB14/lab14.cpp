#include<iostream>

using namespace std;
class HeapNode //following 2 data members.
{
public:
	int Key; // Heap item priority key
	double Data;// data of herapNode 


};
class  Minheap {
	HeapNode *arr;
	int length , Numelements;
public:
	Minheap ( );
	Minheap ( int x ) {
		length = x;
		arr = new HeapNode [ x ];
		//for ( )
		Numelements = 1;
	}
	void 	Enqueue ( int k , double d );//Add an element in Min Heap.
	void 	Dequeue ( ); // delete the element with least priority.
	void 	printAll ( ); // print all elements in heap.
	void heapifyUp ( );
	//Reheap when an element is added, in order to keep it a minHeap
	void heapifyDown ( );
	// Reheap when an element is deleted.
	int findMax ( ); // find max element in minHeap
	void deleteMax ( ); // Delete max element
	void display ( int k );

};
void Minheap::Enqueue ( int k , double d ) {
	arr [ Numelements ].Key = k;
	arr [ Numelements ].Data = d;
	heapifyUp ( );
	Numelements++;
}
void Minheap::heapifyUp ( ) {
	int i = Numelements;

	while ( i > 1 ) {
		if ( arr [ i ].Key < arr [ i / 2 ].Key )
			swap ( arr [ i ] , arr [ i / 2 ] );

		i = i / 2;
	}
}
void Minheap::Dequeue ( ) {
	Numelements--;
	swap ( arr [ 1 ] , arr [ Numelements ] );
	heapifyDown ( );

}

void Minheap::heapifyDown ( ) {
	int i = 1;
	int index = 1;
	bool flag = true;
	while ( i * 2 <= Numelements&&flag ) {
		flag = false;
		if ( arr [ i ].Key > arr [ i * 2 ].Key ) {
			swap ( arr [ i ] , arr [ i * 2 ] );
			index = i * 2;
			flag = true;
		}
		if ( i * 2 < Numelements ) {
			if ( arr [ i * 2 ].Key > arr [ i * 2 + 1 ].Key ) {
				swap ( arr [ i * 2 ] , arr [ i * 2 + 1 ] );
				index = i * 2 + 1;
				flag = true;
			}
		}
		index = i;
	}

}
void Minheap::printAll ( ) {
	for ( int i = 1; i < Numelements; i++ ) {
		cout << arr [ i ].Key << " " << arr [ i ].Data << endl;

	}

}
void Minheap::deleteMax ( ) {
	int max = 1;
	for ( int i = 2; i < Numelements; i++ ) {
		if ( arr [ max ].Key < arr [ i ].Key )
			max = i;
	}
	for ( int i = max; i < Numelements - 1; i++ ) {
		swap ( arr [ i ] , arr [ i + 1 ] );
	}
	Numelements--;
}
int   Minheap::findMax ( ) {
	int max = arr [ 1 ].Key;
	for ( int i = 2; i < Numelements; i++ ) {
		if ( max < arr [ i ].Key )
			max = arr [ i ].Key;
	}
	return max;


}
void Minheap::display ( int k ) {
	for ( int i = 1; i < Numelements; i++ ) {
		if ( arr [ i ].Key == k ) {
			if ( i * 2 < Numelements )
				cout << "\nleft : " << arr [ i * 2 ].Key;
			if ( i * 2 + 1 < Numelements )
				cout << "\nright : " << arr [ i * 2 + 1 ].Key;
			if ( i > 1 )
				cout << "\nparent :  " << arr [ i / 2 ].Key << endl;
		}
	}

}

int main ( ) {
	cout << "Enter size : ";
	int s;
	cin >> s;
	Minheap mh ( s );
	int n;
	for ( int i = 0; i < s; i++ ) {
		cout << "Enter key : ";
		cin >> n;
		mh.Enqueue ( n , 3.6 );
	}
	//	mh.Dequeue ( );
	cout << "print left right parent ";
	cin >> n;
	mh.display ( n );
	mh.printAll ( );

	cout << "deleted max" << endl<<endl;
	mh.deleteMax ( );
	cout << "deleted max" << endl << endl;
	mh.printAll ( );

}