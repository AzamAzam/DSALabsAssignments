#include"BST in Search engine.h"
#include<unordered_map>

template <typename A , typename B>
multimap<B , A> flip_map ( unordered_map<A , B> & src ) {

	multimap<B , A> dst;

	for ( unordered_map<A , B>::iterator it = src.begin ( ); it != src.end ( ); ++it ) {
		dst.insert ( pair<B , A> ( it->second , it->first ) );

	}
	return dst;
}

void  BST::readHistoryFile ( ) {
	unordered_map <string , int  > mapp;
	typedef pair < string , int  > p;
	unordered_map <string , int >::iterator iter;

	fstream input;
	input.open ( "search-history.txt" , ios::in );
	if ( !input.is_open ( ) ) {
		cout << "history file can't open " << endl;
		exit(0);
	}

	string str;

	while ( !input.eof ( ) ) {		   //reading data from file 
		getline ( input , str );

		iter = mapp.find ( str );
		if ( iter != mapp.end ( ) )
			iter->second++;
		else
			mapp.insert ( p ( str , 1 ) );
	}
	input.close ( );


	sortedmap = flip_map ( mapp );

}
void BST::readResultFile ( ) {
	fstream file;
	file.open ( "search-results.txt" , ios::in );
	if ( !file.is_open ( ) ) {
		cout << "result file can't open " << endl;
		exit(0);
	}


	string substrkey , substrUrls;

	while ( !file.eof ( ) ) {
		getline ( file , substrkey , ':' );
		getline ( file , substrUrls );
		urlsmap.insert ( p ( substrkey , substrUrls ) );

	}
	file.close ( );
}
void BST::createBST ( ) {
	multimap <int , string >::iterator sortiter;
	multimap<string , string >::iterator keyfound;

	sortiter = sortedmap.end ( );
	sortiter--;

	for ( int nodes = 1; nodes <= 10000; nodes++ ) {
		string key = sortiter->second;

		keyfound = urlsmap.find ( key );
		if ( keyfound != urlsmap.end ( ) )
			insertNode ( key , keyfound->second , nodes );

		sortiter--;
	}

}

void BST::insertNode ( string k , string u , int n ) {
	BSTNode *current = NULL;
	BSTNode* next = root;
	BSTNode *temp = new BSTNode;
	temp->keyrequest = k;
	if ( n <= 1000 ) {
		temp->urls = u;

	}
	else {
		fstream file;
		file.open ( k + ".dat" , ios::out );
		
		file << u;
		temp->urls = k;

		file.close ( );
	}
	while ( next != NULL ) {
		current = next;
		if ( k < next->keyrequest )
			next = next->left;
		else
			next = next->right;
	}

	temp->parent = current;
	if ( current == NULL )
		root = temp;
	else if ( k < current->keyrequest )
		current->left = temp;
	else
		current->right = temp;
}


BSTNode* BST::searchInBST ( string k ) {
	BSTNode*test = root;
	while ( test != NULL&&test->keyrequest != k ) {
		if ( k < test->keyrequest )
			test = test->left;
		else
			test = test->right;

	}
	return test;

}
void BST::showResult ( string str ) {


	BSTNode* n;
	n = searchInBST ( str );
	if ( n ) {
		if ( str == n->urls ) {
			fstream f;
			f.open ( str + ".dat" , ios::in );
			getline ( f , str );
			cout << "output : " << str << endl;
			cout << "URLs Read From: Hard disk " << endl;
			f.close ( );
		}
		else {
			cout << "output : " << n->urls << endl;
			cout << "URLs Read From : Memory " << endl;
		}

	}
	else
		cout << "Not found " << endl;
}