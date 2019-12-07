//#include <functional>
//#include <hash_map>
//#include <iostream>
//#include <string>
//using namespace std;
//int main ( ) {
//	hash_multimap<int , string > map;
//	typedef pair <int , string > p;
//	hash_multimap <int , string>::iterator iter;
//	hash_multimap <int , string>::iterator iter2;
//	hash_multimap <int , string>::size_type size;
//	//int i = map.count ( 1);
//	//map.size ( );
//	iter = map.begin ( );
//	int id;
//	string name;
//	int i;
//	for ( i = 1; i <= 5; i++ ) {
//
//
//		cout << "Enter ID " << i << " : ";
//		cin >> id;
//		cin.clear ( );
//		cin.ignore ( 100 , '\n' );
//		cout << "Enter Name  " << i << " : ";
//		getline ( cin , name );
//
//		map.insert ( p ( id , name ) );
//	}
//	iter = map.begin ( );
//	i = 1;
//	while ( i <= map.size ( ) ) {
//		cout << iter->first << "\t" << iter->second << endl;
//		iter++;
//		i++;
//	}
//	////Q3
//	//iter = map.begin ( );
//	//cout << "First Record : " << iter->first << "\t" << iter->second << endl;
//	//iter++; iter++;
//	//cout << "Third Record : " << iter->first << "\t" << iter->second << endl;
//	//iter = map.end ();
//	//iter--;
//	//cout << "Last Record : " << iter->first << "\t" << iter->second << endl;
//	//iter = map.begin ( );
//	//i = 1;
//	//cout << "All records  "<<endl;
//	//while ( i <= map.size() ) {
//	//	cout << iter->first << "\t" << iter->second << endl;
//	//	iter++;
//	//	i++;
//	//}
//	////Q4
//	//cout << "Enter key you find ";
//	//int key;
//	//cin >> key;
//
//	//iter = map.begin ( );
//	//i = 1;
//	//while ( i <= map.size ( ) ) {
//	//	if ( key == iter->first )
//	//	cout << iter->first << "\t" << iter->second << endl;
//	//	iter++;
//	//	i++;
//	//}
//	////iter=map.find ( key );
//	////cout << iter->first << "\t" << iter->second << endl;
//	//
//	//
//	////Q5
//	//cout << "Entera VAlue you find ";
//	//string  value;
//	//cin.clear ( );
//	//cin.ignore ( 100 , '\n' );
//	//getline (cin, value);
//
//	//iter = map.begin ( );
//	//i = 1;
//	//while ( i <= map.size ( ) ) {
//	//	if ( value == iter->second )
//	//		cout << iter->first << "\t" << iter->second << endl;
//	//	iter++;
//	//	i++;
//	//}
//
//
//	////Q6
//	//cout << "Entera VAlue you Duplicate  ";
//	//string  value1;
//	//cin.clear ( );
//	//cin.ignore ( 100 , '\n' );
//	//getline ( cin , value1 );
//
//	//iter = map.begin ( );
//	//i = 1;
//	//int  flag=0;
//	//while ( i <= map.size ( ) ) {
//	//	if ( value1 == iter->second )   {
//	//		cout << " Dublication Found at " << iter->first << endl;
//	//			flag++;
//	//	}
//	//	iter++;
//	//	i++;
//	//}
//	//if ( !flag )
//	//	cout << "value not  found ";
//	//else if ( flag == 1 )
//	//	cout << "Duplication not  found ";
//
//	////Q7 
//	//cout << endl;
//	//iter = map.begin ( );
//	//	i = 1;
//	//	int j;
//	//	cout << "Duplicate Records " << endl;
//	//	while ( i <= map.size ( ) ) {
//	//		j =i+1;
//	//		iter2 = iter;
//	//		iter2++;
//	//		while ( j<= map.size() ) {
//	//					if (iter->second==iter2->second)
//	//						cout << iter->first << "  " << iter->second << " \t:\t " << iter2->first << "  " << iter2->second << endl;
//	//					iter2++;
//	//					j++;
//	//		}
//	//		iter++;
//	//		i++;
//	//	}
//
//
//	////8th 
//	//iter = map.begin ( );
//	//map.erase ( iter );
//	//i = 0;
//	//iter = map.begin ( );
//	//while ( i < 3 ) {
//	//	iter++;		 i++;
//	//}
//	//map.erase ( iter );
//	//iter = map.end ( );
//	//iter--;
//	//map.erase ( iter );
//	// iter = map.begin ( );
//	//i = 1;
//	//cout << "Remaining  records  "<<endl;
//	//cout << map.size ( ) << endl;
//	//while ( i <= map.size() ) {
//	//	cout << iter->first << "\t" << iter->second << endl;
//	//	iter++;
//	//	i++;
//	//}
//
//	////Q9
//
//	//cout << "Enter key you find ";
//	//int key;
//	//cin >> key;
//
//	//iter = map.begin ( );
//	//i = 1;
//	//while ( i <= map.size ( ) ) {
//	//	if ( key == iter->first ) {
//	//		map.erase ( iter );
//	//		iter = map.begin ( );
//	//		i = 1;
//	//	}
//	//	iter++;
//	//	i++;
//	//}
//	//iter = map.begin ( );
//	//i = 1;
//	//cout << "Remaining  records  " ;
//	//cout << map.size ( ) << endl;
//	//while ( i <= map.size ( ) ) {
//	//	cout << iter->first << "\t" << iter->second << endl;
//	//	iter++;
//	//	i++;
//	//}
//
//	//Q10
//	i = 0;
//
//	cout << "reverse " << endl;
//	iter = map.end ( );
//	iter--;
//	while ( i <map.size ( ) ) {
//		cout << iter->first << "\t" << iter->second << endl;
//		i++;
//		if ( i<map.size () )
//		iter--;
//		
//	}
//}