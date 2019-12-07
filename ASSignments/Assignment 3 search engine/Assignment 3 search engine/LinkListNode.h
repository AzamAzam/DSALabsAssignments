/*MUAMMAD AZAM
BCSF15M017*/

#include <iostream>
#include <fstream>
#include <string>
#include<iomanip>
using namespace std;
class LinkListNode {
public:
	string keyRequest;
	int countRequest;
	LinkListNode *next;
	LinkListNode *pervious;



	LinkListNode ( ) {
		countRequest = 1;
		next = NULL;
		pervious = NULL;
	}

};