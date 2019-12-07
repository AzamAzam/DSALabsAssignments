class LNode {
public:
	int data;
	LNode *next;
	LNode ( ) {
		data = 0;
		next = 0;
	}
};
class linkList {
public:

	LNode *head;
	LNode  *tail;

	void insertAtTail ( int x ) {
		LNode *n = new LNode;
		LNode *temp;

		n->data = x;
		if ( tail ==NULL ) {
			tail = n;
			head = n;

		}
		else {
			tail->next = n;
			tail = n;


		}
	}
};