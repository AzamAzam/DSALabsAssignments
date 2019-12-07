//#include<iostream>
//#include<stack>
//#include<string>
//
//using namespace std;
//
//struct location {
//	int x_index , y_index;
//
//	location ( int x = 0 , int y = 0 ) {
//		x_index = x , y_index = y;
//	}
//
//	bool isValidIndex ( ) {
//		if ( x_index > -1 && x_index < 23 && y_index > -1 && y_index < 50 )
//			return true;
//
//		return false;
//	}
//};
//
//int main ( ) {
//	//Maze
//	string maze [ 23 ] = {
//		"**************************************************" ,
//		"*******                              ******** ****" ,
//		"******* ************* ************** ******** ****" ,
//		"******* ************* ***          * ***      ****" ,
//		"S       ************* **  *******  * *** **** ****" ,
//		"******* *** ***    ** *  ********        **** ****" ,
//		"******* *** ****** ** *  ******************** ****" ,
//		"******* *** ****** **    ******************** ****" ,
//		"******* *** ****** ************************** ****" ,
//		"******* *** **                      ********* ****" ,
//		"***     *** ** **** **** ******************** ****" ,
//		"*** ********** **** ****                ***** ****" ,
//		"*** ********** **** ************************* ****" ,
//		"*** ********** **** ************************* ****" ,
//		"***            **** ************ ************ ****" ,
//		"******** ********** ************ ************ ****" ,
//		"******** ********** ************      ******* ****" ,
//		"********     ****** ************ **** ******* ****" ,
//		"*******************              **** ******* ****" ,
//		"************************************* ******* ****" ,
//		"************************************* ************" ,
//		"*************************************            E" ,
//		"**************************************************"
//	};
//
//	// Creating a stack
//	stack<location> Stack;
//
//	//Finding S location in maze
//	for ( int i = 0; i < 23; i++ ) {
//		for ( int j = 0; j < 50; j++ ) {
//			if ( maze [ i ][ j ] == 'S' ) {
//				Stack.push ( location ( i , j ) );
//				break;
//			}
//		}
//		if ( !Stack.empty ( ) )
//			break;
//	}
//
//	while ( !Stack.empty ( ) ) {
//		location temp = Stack.top ( );
//		Stack.pop ( );
//
//		if ( maze [ temp.x_index ][ temp.y_index ] == 'E' ) {
//			break;
//		}
//
//		if ( maze [ temp.x_index ][ temp.y_index ] != 'S' )
//			maze [ temp.x_index ][ temp.y_index ] = '-';
//
//		system ( "cls" );
//
//		for ( int i = 0; i < 23; i++ ) {
//			cout << maze [ i ] << "\n";
//		}
//
//		location top = { temp.x_index - 1 , temp.y_index };
//		location down = { temp.x_index + 1 , temp.y_index };
//		location right = { temp.x_index , temp.y_index + 1 };
//		location left = { temp.x_index , temp.y_index - 1 };
//
//		if ( top.isValidIndex ( ) && ( maze [ top.x_index ][ top.y_index ] == ' ' || maze [ top.x_index ][ top.y_index ] == 'E' ) )
//			Stack.push ( top );
//		if ( down.isValidIndex ( ) && ( maze [ down.x_index ][ down.y_index ] == ' ' || maze [ down.x_index ][ down.y_index ] == 'E' ) )
//			Stack.push ( down );
//		if ( right.isValidIndex ( ) && ( maze [ right.x_index ][ right.y_index ] == ' ' || maze [ right.x_index ][ right.y_index ] == 'E' ) )
//			Stack.push ( right );
//		if ( left.isValidIndex ( ) && ( maze [ left.x_index ][ left.y_index ] == ' ' || maze [ left.x_index ][ left.y_index ] == 'E' ) )
//			Stack.push ( left );
//	}
//	return 0;
//}