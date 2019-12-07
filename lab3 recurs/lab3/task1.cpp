//#include <iostream >
//#include <string>
//using namespace std;
//void printMessage(int n){
//	if (n == 0)
//		return;
//	else {
//		printMessage(n - 1);
//		cout <<n <<" : Meassage " << endl;
//
//	}
//}
//int fact(int n){
//	if (n == 0)
//		return 1;
//	else if (n < 0)
//	{
//
//		cout << "FActorial of " << n << " can't be calculated " << endl;
//		return 0;
//	}
//	else
//		return n*fact(n - 1);
//
//}
//
//int fab(int n)
//{
//	if (n<2)
//		return n;
//	else
//	
//		return fab(n - 1) + fab(n - 2);
//	
//}
//
//float power(float number, int n){
//	if (n == 0)
//		return 1;
//	else {
//		
//		return number *power(number, n - 1);
//	}
//}
//int gcf(int a, int b){
//	if (a%b == 0)
//		return b;
//	else
//	{
//		return gcf(b, a%b);
//		 
//
//	}
//}
//
//int sumArray(int arr[],int size ){
//	if (size == 0)
//		return 0;
//	else {
//		
//		return arr[size - 1]+ sumArray(arr, size - 1);
//	}
//}
//
//
//int maxValue(int arr[], int size)
//{
//	static int max=arr[0];
//	if (size == 0){
//		return max;
//
//	}
//	else {
//		if (arr[size - 1] > max)
//			max = arr[size - 1];
//
//		return maxValue(arr,size-1);
//	}
//}
//bool palindrome(string str, int size){
//	
//	static int count = 0;
//	if (str[size - 2] != str[count])
//		return false;
//	else if (count == size)
//		return true;
//	else {
//		count++;
//		return palindrome(str, size - 1);
//	}
//}
//
//
//int main(){
//	printMessage(5);
//	cout << fact(4) << endl;
//	cout << power(2.5, 3) << endl;
//	cout << gcf(10, 8) << endl;
//	cout << "Enter number of terms for fibonacci Series: ";
//	int x = 0;
//	cin >> x;
//	for (int count = 0; count < x; count++)
//		cout << fab(count) << "	";
//	cout << endl;
//	int a[5] = { 1, 12, 9, 10, 10 };
//	cout << sumArray(a, 5) << endl;;
//	cout << maxValue(a, 5)<<endl;
//	cout << palindrome("MadaM",6) << endl;
//}
//
