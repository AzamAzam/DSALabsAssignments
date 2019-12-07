/*MUHAMMAD AZAM
BCSF15M017*/

#include "Node.h"
#ifndef LINKLIST_H
#define LINKLIST_H



class LinkList {


	Node *head;
	Node  *tail;
	int size;
	
public:
	LinkList ( );
	~LinkList ( );
	void reverse ( );

	void display ( );
	void createLinkList (int );
	void insertNode (int ,int  );
	void insertHead ( int );
	void insertTail ( int );
	void push ( int );
	void sortLinkList ( );
	bool compareLinkList ( LinkList* );
};
#endif 