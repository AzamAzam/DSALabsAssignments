//
//#include<iostream>
//#include<fstream>
//#include <list>
//
//using namespace std;
//
//
//class Graph {
//	int size;    
//	list<int,int> *List;
//	//	typedef pair<int , int>  p;
//	list < pair<int , int >>p;
//public:
//	Graph ( int size );  // Constructor
//	void addEdge ( int , int, int  );
//	void BFS ( int );  
//	void showNeighbours ( int );
//	bool isPath (int  ,int )
//};
//
//Graph::Graph ( int size ) {
//	this->size = size;
//	List = new list<int,int> [ size ];
//}
//
//void Graph::addEdge ( int u , int v,int c ) {
//	List [ u ].insert ( p ( v , c ) );
////	List [ u ].push_back ( v,c);
////	List [ v ].push_back ( u );
//}
//bool  Graph::isconnected ( int u , int v ) {
//	list<int>::iterator i;
//	i = List [ u ].begin ( );
//	for ( i; i != List [ u ].end ( ); i++ ) {
//		if ( *i == v )
//			return true;
//	}
//	return false;
//}
//
//void Graph::BFS ( int s ) {
//	bool *visited = new bool [ size ];
//	for ( int i = 0; i < size; i++ )
//		visited [ i ] = false;
//
//
//	list<int> queue;
//
//
//	visited [ s ] = true;
//	queue.push_back ( s );
//
//
//	list<int>::iterator i;
//
//	while ( !queue.empty ( ) ) {
//
//		s = queue.front ( );
//		cout << s << " ";
//		queue.pop_front ( );
//
//		for ( i = List [ s ].begin ( ); i != List [ s ].end ( ); ++i ) {
//			if ( !visited [ *i ] ) {
//				visited [ *i ] = true;
//				queue.push_back ( *i );
//			}
//		}
//	}
//}
//
//int main ( ) {
//		fstream f;
//		f.open ( "test3.dat" , ios::in);
//		int s;
//		f >> s;
//		Graph g ( s );
//		int totalconnections;
//		f >> totalconnections;
//		int r , c;
//		for ( int i = 0; i < totalconnections; i++ ) {
//			f >> r >> c;
//			g.addEdge ( r , c );
//		}
//		if ( g.isconnected ( 2,4 ) )
//			cout << "connected" << endl;
//		else
//			cout << "Not connected "<<endl;
//		g.BFS ( 2 );
//}