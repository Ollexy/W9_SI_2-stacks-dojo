#pragma once

class Stack
{
	int rozmiar;
	int* arr = new int[rozmiar];
	int top;
public:
	void size();
	Stack(int nn);
	bool push(int x);
	bool pop();
	int peek();
	bool isEmpty();
	void emptySpace();
	void menu(int x);
};

