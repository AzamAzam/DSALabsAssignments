/*MUAMMAD AZAM
BCSF15M017*/

#include <iostream>
#include <fstream>
#include <string>
#include<iomanip>
using namespace std;
class logs;
class Node {
	string webName;
	int countRequest;
	unsigned	long   totalResponseSize;
	Node *next;
	friend class logs;

public:
	Node ( ) {
		countRequest = 1;
		totalResponseSize = 0;
		next = NULL;
	}

};