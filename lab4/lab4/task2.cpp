#include "Queue.h"
int main ( )  {
	Queue obj1;						
	if ( obj1.isEmpty ( ) )
	cout << "Empty Queue " << endl;
	obj1.Enqueue ( 10 );
	if ( obj1.isEmpty ( ) )
	cout << "Empty Queue " <<   endl;
	obj1.print ( );
	obj1.Enqueue ( 44 );
	obj1.print ( );
	obj1.deQueue ( );
	obj1.deQueue ( );
	obj1.print ( );
	if ( obj1.isEmpty ( ) )
		cout << "Empty Queue " << endl;
	obj1.clear ( );
}