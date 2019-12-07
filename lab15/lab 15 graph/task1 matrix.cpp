//#include <iostream>
//#include <fstream>
//#include<queue>
//
//using namespace std;
//
//class Graph {
//	int **matric;
//	int size;
//public:
//	Graph ( );
//	Graph ( int );
//	void addedge ( int , int );
//	bool isconnected ( int , int );
//	void BFS ( int );
//};
////constructor 
//Graph::Graph ( int s ) {
//	size = s;
//	matric = new int* [ size ];
//	for ( int i = 0; i < size; i++ ) {
//		matric [ i ] = new int [ size ];;
//	}
//	for ( int i = 0; i < size; i++ ) {
//		for ( int j = 0; j < size; j++ ) {
//			matric [ i ][ j ] = 0;
//		}
//	}
//}
//void Graph::addedge ( int u , int v ) {
//	matric [ u ][ v ] = 1;
//	matric [ v ][ u ] = 1;
//}
//bool Graph::isconnected ( int u , int v ) {
//	if ( u < size&&v < size )
//		return matric [ u ][ v ];
//	return 0;
//}
//
//void Graph::BFS ( int source ) {
//	bool  *vistedList = new bool [ size ];
//	for ( int i = 0; i < size; i++ ) {
//		vistedList [ i ] = false;
//	}
//	vistedList [ source ] = true;
//	queue<int >q;
//	q.push ( source );
//	int var=source;
//	while ( !q.empty ( ) ) {
//		var = q.front ( );
//		cout << var << " ";
//		q.pop ( );
//	
//
//		for ( int i = 0; i < size; i++ ) {
//			if ( matric [ var ][ i ] == 1 && vistedList [ i ] == false ) {
//				q.push ( i );
//				vistedList [ i ] = true;
//			}
//		}
//		
//	}
//}
//
//
//int main ( ) {
//	fstream f;
//	f.open ( "test.dat" , ios::in );
//	int s;
//	f >> s;
//	Graph g ( s );
//	int totalconnections;
//	f >> totalconnections;
//	int r , c;
//	for ( int i = 0; i < totalconnections; i++ ) {
//		f >> r >> c;
//		g.addedge ( r , c );
//	}
//	g.BFS ( 1 );
//}
