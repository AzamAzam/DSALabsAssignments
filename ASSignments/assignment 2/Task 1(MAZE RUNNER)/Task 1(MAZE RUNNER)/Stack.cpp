#include"Stack.h"
Stack::Stack()
{
	count = 0;
	top = nullptr;
}
void Stack::push(int xElement, int yElement)
{
	if (top != nullptr)
	{
		Node* newNode = new Node;
		newNode->row = xElement;
		newNode->column = yElement;
		newNode->next = top;
		top = newNode;
	}
	else
	{
		top = new Node;
		top->row = xElement;
		top->column = yElement;
		top->next = nullptr;
	}
	count++;
}
void Stack::pop()
{
	if (top != nullptr)
	{
		Node*temp = new Node;
		temp = top;
		top = top->next;
		count--;
		delete temp;
	}


}
bool Stack::isEmpty()
{
	if (count == 0)
		return true;
	else return false;
}
int Stack::getStackSize()
{
	return count;
}
void Stack::print()
{
	int n = 1;
	Node* temp = new Node;
	temp = top;
	while (temp != nullptr)
	{
		cout << left << setw(10) << "Coordinate  No. ";
		cout << left << setw(3) << n << " : ( " << temp->row << " , " << temp->column << " )" << endl;
		temp = temp->next;
		n++;
	}
}
Stack::~Stack()
{
	Node*temp = top;
	while (temp != nullptr)
	{
		top = temp->next;
		delete temp;
		temp = top;
	}
}
int Stack::getRow()
{
	if (top != nullptr)
		return top->row;
	else
		return 0;
}
int Stack::getColumn()
{
	if (top != nullptr)
		return top->column;
	else
		return 0;
}