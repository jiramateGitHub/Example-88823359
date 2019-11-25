#ifndef SORTINGARRAY_H
#define SORTINGARRAY_H
#include <iostream>
#include <cstdlib>
using namespace std;
class SortingArray
{
	private:
		class node{
			public:
				int data;
				node(int data){
					this->data = data;
					link = NULL;	
				}	
				node * link;
		};
		node * head[10];
		node * tail[10];
		int *data;
		int count;
	public:
		SortingArray(int size);
		~SortingArray();
		void hash(int data);
		void hashAdd(int data,int index);
		void search(int data);
		void random();
		void show();
		
};

#endif
