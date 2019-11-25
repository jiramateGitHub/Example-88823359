#include "QueueArray.h"

QueueArray::QueueArray(int size) {
	arr_queue = new int [size];
	max = size;
	count = 0;
	font = 0;
	back = 0;
}
QueueArray::~QueueArray() {
	delete [] arr_queue;
}
void QueueArray::enqueue(int value) {
	if(!isFull()) {
		if(back < max) {
			arr_queue[back] = value;
		} else {
			back = 0;
			arr_queue[back] = value;
		}
		back++;
		count++;
	} else {
		cout << "--> QueueArray is Full" << endl;
	}
}
int QueueArray::dequeue() {
	int arr;
	if(font == (max - 1)) {
		arr = arr_queue[font];
		font = 0;
	} else {
		arr = arr_queue[font];
		font++;
	}
	count--;
	return arr;
}
void QueueArray::show() {
	int arr = font;
	cout << "font : ";
	for(int i = 0; i < count; i++) {
		if(arr < max) {
			cout << arr_queue[arr] << " " ;
		} else {
			arr = 0;
			cout << arr_queue[arr] << " " ;
		}
		arr++;
	}
	cout << ": back" << endl;
}
bool QueueArray::isFull() {
	if(count == max) {
		return true;
	} else {
		return false;
	}
}
bool QueueArray::isEmpty() {
	if(count == 0) {
		return true;
	} else {
		return false;
	}
}

