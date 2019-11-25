#include "QueueLink.h"
QueueLink::QueueLink() {
	count = 0;
	font = NULL;
	back = NULL;
}
QueueLink::~QueueLink() {
	for(node * tmp = font; tmp != NULL; font = font->link) {
		delete tmp;
		tmp = NULL;
	}
	font = NULL;
	back = NULL;
}
void QueueLink::enqueue(int value) {
	node *NewNode = new node(value);
	if(count == 0) {
		font = NewNode;
		back = NewNode;
	} else {
		back->link = NewNode;
		back = NewNode;
	}
	count++;
}
int QueueLink::dequeue() {
	node *temp = font;
	int value = font->data;
	if(count == 1) {
		font = NULL;
		back = NULL;
	} else {
		font = font->link;
	}
	count--;
	delete temp;
	return value;
}
bool QueueLink::isEmpty() {
	if(count == 0) {
		return true;
	} else {
		return false;
	}
}
void QueueLink::show() {
	cout << "font : ";
	for(node *temp = font; temp != NULL; temp = temp->link) {
		cout << temp->data << " ";
	}
	cout << ": back" << endl;
}
int QueueLink::size() {
	return count;
}
