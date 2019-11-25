#ifndef SORTINGARRAY_H
#define SORTINGARRAY_H
#include <iostream>
#include <cstdlib>
using namespace std;
class SortingArray
{
	private:
		int *data;
		int count;
	public:
		SortingArray(int size);
		~SortingArray();
		void insertion();
		void selection();
		void bubblesort();
		void random();
		void show();
};

#endif
