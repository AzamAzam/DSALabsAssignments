//#include <hash_map>
////#include <functional>
//#include <iostream>
//#include <string> 
//#include <fstream>
//
//using namespace std;
//
//int main ( )  {
//	hash_multimap <string,int  > map;
//	typedef pair < string,int  > p;
//	hash_multimap <string,int >::iterator iter;
//	fstream input;
//	input.open ( "search-history.txt" , ios::in );
//	if ( !input.is_open ( ) ) {
//		cout << "history file can't open " << endl;
//		return 0;
//	}
//	int i = 1;
//	string str;
//	while ( !input.eof ( ) && i <= 100000 ) {		   //reading data from file 
//		getline ( input , str );
//		   
//		 iter = map.find ( str );
//		if ( iter != map.end ( ) )
//			iter->second++;
//		else 
//		map.insert ( p ( str , 1 ) );
//		
//		i++;
//	}
//	input.close ( );
//	iter = map.begin ( );
//
//	while ( iter != map.end ( ) ) {
//		cout << iter->first << " \t" << iter->second << endl;
//		iter++;
//	}
//
//	return 0;
//}