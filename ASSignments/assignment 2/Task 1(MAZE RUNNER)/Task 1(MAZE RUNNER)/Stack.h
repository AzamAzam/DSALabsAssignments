#ifndef STACK_H
#define STACK_H
#include<iostream>
#include<iomanip>
using namespace std;
class Node
{
public:
	int row, column;
	Node *next;
};
class Stack
{
	Node *top;
	int count;
public:
	Stack();
	void push(int xElement, int yElement);
	void pop();
	bool isEmpty();
	int getStackSize();
	void print();
	int getRow();
	int getColumn();
	~Stack();

};
#endif