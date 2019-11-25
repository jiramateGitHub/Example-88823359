#include "StackLinked.h"

StackLinked::StackLinked() {
	top = NULL;
	count = 0;
}
StackLinked::~StackLinked( ) {
	for(node * tmp = top;tmp != NULL;top = top->link) {
		delete tmp;
		tmp = NULL;
	}
	top = NULL;
}
void StackLinked::push(int value) {
	node *newNode = new node(value);
	if(isEmpty()) {
		top = newNode;
	} else {
		newNode->link = top;
		top = newNode;
	}
	count++;
	cout << "Pust : " << value << " Complete."<<endl;
}
int StackLinked::pop() {
	int data = top->data;
	node *temp = top;
	top = temp->link;
	delete temp;
	count--;
	return data;
}
void StackLinked::show() {
	cout << "Size : " << size() << endl;
	for(node *temp = top;temp!=NULL;temp=temp->link) {
		cout << temp->data << endl;
	}
}
bool StackLinked::isEmpty() {
	if(count == 0) {
		return true;
	} else {
		return false;
	}
}
int StackLinked::size() {
	return count;
}

