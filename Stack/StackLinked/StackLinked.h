#ifndef STACKLINKED_H
#define STACKLINKED_H
#include<iostream>
using namespace std;
class StackLinked {
	private:
		class node {
			public:
				int data;
				node *link;
				node(int data) {
					this->data = data;
					link = NULL;
				}
		};
		node *top;
		int count;
	public:
		StackLinked();
		~ StackLinked();
		void push(int value);
		int pop();
		void show();
		bool isEmpty();
		int size();
};

#endif
