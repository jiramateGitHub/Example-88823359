#ifndef STACKARRAY_H
#define STACKARRAY_H
#include <iostream>
using namespace std;
class StackArray
{
	private:
		int *arr_stack;
		int max;
		int top;
	public:
		StackArray(int size);
		~StackArray();
		void push(int value);
		int pop();
		void show();
		bool isFull();
		bool isEmpty();
};

#endif
