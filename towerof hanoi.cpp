//BCSF15M017
//Muhammad Azam 
#include <iostream >
#include <math.h>
using namespace std;

int moves = 0;

void tower(int m, char a, char b, char c){
	moves++;
	if (m == 1){
		cout << "Move disc " << m << " from " << a << " to " << c << endl;
	}
	else{
		tower(m - 1, a, c, b);
		cout << "Move disc " << m << " from " << a << " to " << c << endl;
		tower(m - 1, b, a, c);
	}
}
int main()
{
	
	cout <<"\t\t\t\t TAble" << endl;
	for (int i = 1; i <=7; i++){
		cout <<i<<"\t\t\t\t\t\t\t\t"<< pow(2,i) - 1 << endl;
	}
	
	
	cout << "Total time for 7 Disks moves = " << (pow(2, 7) - 1)<<" minutes "<<endl;
	cout << " If We make one move every minute, the Minimum number of days it should take to complete a game containing 15 discs : " << (pow(2, 15) - 1)/1440<<endl;
	cout << "Priests will take Time  to move all 64 disks : " << (pow(2, 64) - 1) / 31536000 <<" Years "<< endl;

	int discs;
	cout << "Enter the number of discs : " << endl;
	cin >> discs;
	tower(discs, 'A', 'B', 'C');
	cout << "It took " << moves << " moves.  " << endl;


}
