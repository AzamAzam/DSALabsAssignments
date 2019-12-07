//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//class AdjListNode
//{	  public:
//	int source;
//    int dest;
//	int cost;
//    AdjListNode* next;
//};
//  
//class  AdjList
//{	  public:
//   AdjListNode *head;
//};
// 
//class Graph
//{
//    private:
//        int V;
//        AdjList* array;
//    public:
//        Graph(int n)
//        {
//            V = n;
//            array = new AdjList [V];
//            for (int i = 0; i < V; ++i)
//                array[i].head = NULL;
//        }
//       
//        AdjListNode* newAdjListNode(int src, int dest, int cost)
//        {
//            AdjListNode* newNode = new AdjListNode;
//            newNode->dest = dest;
//			newNode->source =src;
//			newNode->cost = cost;
//            newNode->next = NULL;
//            return newNode;
//        }
//       
//        void addEdge(int src, int dest,int cost)
//        {
//            AdjListNode* newNode = newAdjListNode(src,dest,cost);
//            newNode->next = array[src].head;
//            array[src].head = newNode;
//
//            newNode = newAdjListNode(src,dest,cost);
//            newNode->next = array[dest].head;
//            array[dest].head = newNode;
//        }
//		void showNeighbours(int u)
//		{
//			  AdjListNode* test = array[u].head;
//			  cout << "\n Adjacency list" <<endl;
//                while (test)
//                {
//                    cout<<"-> "<<test->dest;
//                    test = test->next;
//                }
//                cout<<endl;
//		}
//		bool ispath (int )
//};
//int main ( ) {
//		fstream f;
//		f.open ( "test.dat" , ios::in );
//		int size;
//		f >> size;
//		Graph g ( size );
//		int totalconnections;
//		f >> totalconnections;
//		int s,d , c;
//		for ( int i = 0; i < totalconnections; i++ ) {
//			f >> s>>d>>c;
//			g.addEdge ( s,d,c );
//
//		}
//}