/*MUHAMMAD AZAM
BCSF15M017*/

#include <iostream>
using namespace std;
#ifndef NODE_H
#define NODE_H

class Node {
private:
	int data;
	Node* next;
	Node* perivous;

public:
	Node ( ) {
		next = NULL;
		perivous = NULL;
	}
	
	friend class LinkList;
	friend  class DoubleLinkList;

};


#endif 