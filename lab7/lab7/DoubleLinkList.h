/*MUHAMMAD AZAM
BCSF15M017*/

#include "Node.h"
#ifndef LINKLIST_H
#define LINKLIST_H

class DoubleLinkList {
public:
	DoubleLinkList ( );
	~DoubleLinkList ( );
	void display ( );
	void createLinkList ( int );
	void enqueue ( int);
	void deleteIthNode ( int);
private:
	Node* head;
	Node* tail;
	int size;
};

#endif