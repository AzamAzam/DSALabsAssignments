//#include<iostream>
//
//#include<fstream>
//
//#include<iomanip>
//
//#include<string>
//
//#include<cstdlib>
//
//using namespace std;
//
//class Node
//{
//public:
//	int TotalNumberOfRequest;
//	long double TotalResponseSize;
//	string WebName;
//	Node *next;
//	Node()
//	{
//		TotalResponseSize = TotalNumberOfRequest = 0;
//	}
//};
//
//class FileManagement
//{
//	int ResponseSize;
//	Node *head;
//	fstream MyFile;
//public:
//	FileManagement()
//	{
//		head = NULL;
//		ResponseSize = 0;
//	}
//	void readFromFile();
//	void SeparateData(string str);
//	void CreateLinkedList(string name);
//	int Search(string name);
//	void display();
//};
//
//int main()
//{
//	system("mode con:cols=130 lines=9000");
//	FileManagement f;
//	f.readFromFile();
//	f.display();
//}
//
//void FileManagement::readFromFile()   // I HAVE TO CHANGE WHILE LOOP CONDITION
//{
//	MyFile.open("File.txt", ios::in);
//	if ( !MyFile.is_open ( ) ) {
//		cout << " file can't open " << endl;
//		return;
//	}
//	int i = 0;
//	while (!MyFile.eof()&& i<100000)
//	{
//		string str;
//		getline(MyFile, str);
//		SeparateData(str);
//		i++;
//	}
//}
//
//void FileManagement::SeparateData(string str)
//{
//	int size = str.length();
//	char *name = new char[size - 53];
//	int spaces = 0, index = 0;
//	bool flag = true;
//	for (int i = 44; i < size; i++)
//	{
//		if (str[i] == ' ')
//		{
//			spaces++;
//		}
//		else if (spaces == 2 && str[i] != '?'&& flag) // separating Name
//		{
//			name[index++] = str[i];
//		}
//		else if ((str[i] == '?' || spaces == 3) && flag) // 
//		{
//			flag = false;
//			name[index] = '\0';
//			index = 0;
//		}
//		else if (spaces == 5 && str[i] >= '0' && str[i] <= '9') // separating response size
//		{
//			str[index++] = str[i];
//		}
//		else
//		{
//			ResponseSize = 0;
//		}
//	}
//	if (index > 0)
//	{
//		str[index] = '\0';
//		ResponseSize = stoi(str);
//	}
//	if (Search(name))
//	{
//		CreateLinkedList(name);
//	}
//
//}
//
//int FileManagement::Search(string name)
//{
//	Node *temp = new Node;
//	temp = head;
//	while (temp != NULL)
//	{
//		if (temp->WebName == name)
//		{
//			temp->TotalNumberOfRequest++;
//			temp->TotalResponseSize += ResponseSize;
//			return 0;
//		}
//		temp = temp->next;
//	}
//	return 1;
//}
//
//void FileManagement::CreateLinkedList(string name)
//{
//	Node *temp = new Node;
//	Node *tempHead;
//	temp->TotalResponseSize = ResponseSize;
//	temp->WebName = name;
//	temp->TotalNumberOfRequest = 1;
//	if (head == NULL)
//	{
//		head = temp;
//		head->next = nullptr;
//	}
//	else
//	{
//		tempHead = head;
//		while (tempHead->next != nullptr)
//		{
//			tempHead = tempHead->next;
//		}
//		tempHead->next = temp;
//		temp->next = nullptr;
//	}
//}
//
//void FileManagement::display()
//{
//	int r = 2;
//	Node *temp = new Node;
//	temp = head;
//	cout << "\tWeb Page Name\t\t\t\t\t\t\t     Requests\t\t\tAverage Response Size\n\n";
//	while (temp != NULL)
//	{
//		cout << left << setw(80) << temp->WebName;
//		cout << setw(30) << temp->TotalNumberOfRequest;
//		cout << temp->TotalResponseSize / temp->TotalNumberOfRequest << endl;
//		temp = temp->next;
//	}
//	cout << endl;
//}
