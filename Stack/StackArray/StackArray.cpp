#include "StackArray.h"

StackArray::StackArray(int size) {
	arr_stack = new int[size];
	max = size;
	top = -1;
}
StackArray::~StackArray() {
	delete [] arr_stack;
}
void StackArray::push(int value) {
	if(isFull()) {
		cout << "StackArray Is Full" << endl;
	} else {
		top++;
		arr_stack[top] = value;
		cout << "Pust : " << arr_stack[top] << " Complete."<<endl;
	}
}
int StackArray::pop() {
	return arr_stack[top--];
}
void StackArray::show() {
	cout << "Top : " << top << endl;
	for(int i=top;i>=0;i--) {
		cout << arr_stack[i] << endl;
	}
}
bool StackArray::isFull() {
	if(max == top) {
		return true;
	} else {
		return false;
	}
}
bool StackArray::isEmpty() {
	if(top == -1) {
		return true;
	} else {
		return false;
	}
}
