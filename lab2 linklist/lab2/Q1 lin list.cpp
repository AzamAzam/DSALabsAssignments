#include <iostream>
using namespace std;
class Node
{
public:
	int data;
	Node *next;
	Node()
	{
		data=0;
		next = NULL;
	}
};
class linkList {
public:

	Node *head;
	Node  *tail;
	int size;
//	Node *temp = new Node;
	void insertAtHead(int x)
	{
		Node *n = new  Node;
		n->data = x;
		if (head == NULL){
			head = n;
			tail = head;
		}
		else{

			n->next = head;
			head = n;
		}
		size++;
	}
	void insertAtTail(int x)
	{
		Node *n=new Node ;
		Node *temp;
		
		n->data = x;
		if (tail == NULL){
			tail = n;
			head = n;
		}
		else
		{
			tail->next=n;
			tail = n;
		
			
		}
		size++;
	}
	void  reverse()
	{
		Node *n = head ;
		Node *n1 = NULL;
		while (head->next != NULL)
		{
			
		//	n = head->next;
			Node *temp = n->next;
			n->next = n1;
			n1 = n;
			n = temp;

		}
		head = n1;
	}
	void deleteAtHead(){
		Node*t = head;
		head = head->next;
		size--;
		delete t;
	}
	void display()
	{
		Node *temp;
		temp = head;
		int i = 0;
		while (temp!=NULL)
		{
			cout << temp->data<<" ";
			temp = temp->next;
			i++;
		}
		cout << endl;
	}

	void  removeNthFromEnd ( int n ) {
		Node* temp = head;
		for ( int i = 0; i<n; i++ ) {
			temp = temp->next;
		}
		Node* test = head;
		if ( temp == NULL ) {
			Node* deleted = head;
			head = head->next;
			delete deleted;
			return;
		}
		
		while ( temp->next != NULL ) {
			temp = temp->next;
			test = test->next;
		}
		Node* deleted = test->next;
		test->next = deleted->next;
		delete deleted;
	
	}

	linkList(){
		head = NULL;
		tail = NULL;
		size = 0;
	}
};



int main()
{

	linkList obj;
	
	//obj.insertAtHead(1);
	//obj.insertAtHead(12);
	//obj.display();
	//obj.deleteAtHead();
	//obj.display();
	obj.insertAtHead(1);
	/*obj.insertAtTail(2);
	obj.insertAtTail(3);
	obj.insertAtTail(4);
	obj.insertAtTail ( 5 );
*/
	obj.display();
	cout << endl;
	//obj.reverse();
	//obj.deleteAtHead();
	
	obj.removeNthFromEnd ( 1);
	obj.display();

	

}