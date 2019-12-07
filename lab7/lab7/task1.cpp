///*MUHAMMAD AZAM
//BCSF15M017*/
//
//
//#include"SingleLinkList.h"
//int main ( )  {
//			   
//
//	LinkList l,l1;
//	cout << "Enter size  of  linkList  : ";
//	int s;
//	cin >> s;
//	l.createLinkList (s  );
//	cout << "LinkList created  ";
//	l.display ( );
//	
//	cout << "Reverse linklist ";
//	l.reverse ( );
//	l.display ( );
//	
//	cout << "Enter Node Numberto insert  : ";
//	int NodeNumber;
//	cin >> NodeNumber;
//	int value;
//	cout << "Enter Data  : ";
//	cin >> value;
//	l.insertNode (NodeNumber,value  );
//	cout << "After insertion NOde ";
//	l.display ( );
//
//	cout << "Sorted Link List ";
//	l.sortLinkList ( );
//	l.display ( );
//
//	cout << "Enter size  of another linkList  : ";
//	cin >> s;
//	l1.createLinkList ( s );
//	cout << "LinkList created  ";
//	l1.display ( );
//
//	if ( l.compareLinkList ( &l1 ) )
//		cout << "Both Linked Lists are equal " << endl;
//	else
//		cout << "Link Lists are not equal ";
//
//
//}