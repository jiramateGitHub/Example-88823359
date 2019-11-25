#ifndef QUEUELINK_H
#define QUEUELINK_H
#include <iostream>
using namespace std;
class QueueLink
{
	private :
		class node{
			public :
				int data;
				node *link;
				node(int data){
					this->data = data;
					link = NULL;
				}
			
		};
		int count;
		node *font;
		node *back;
	public:
		QueueLink();
		~QueueLink();
		void enqueue(int value);
		int dequeue();
		void show();
		bool isEmpty();
		int size();
};

#endif
