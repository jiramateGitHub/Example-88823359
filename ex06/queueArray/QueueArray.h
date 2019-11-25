#ifndef QUEUEARRAY_H
#define QUEUEARRAY_H
#include <iostream>
using namespace std;
class QueueArray
{
	private :
		int *arr_queue;
		int max; 
		int count; 
		int font; 
		int back;
	public:
		QueueArray(int size);
		~QueueArray();
		void enqueue(int value);
		int dequeue();
		void show();
		bool isFull();
		bool isEmpty();
};

#endif
