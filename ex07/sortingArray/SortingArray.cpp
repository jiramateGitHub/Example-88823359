#include "SortingArray.h"

SortingArray::SortingArray(int size) {
	data = new int[size];
	count = size;
	random();
}
SortingArray::~SortingArray() {
	delete []data;
}

void SortingArray::insertion() {
	int temp,i,j;
	for(i=1; i<=count-1; i++) {
		temp = data[i];
		for(j=i-1; j>=0; j--) {
			if(data[j]>temp) {
				data[j+1] = data[j];
				data[j] = temp;
			}
		}
	}
}

void SortingArray::selection() {
	int temp,min,i,j;
	for(i=0; i<=count-2; i++) {
		min = i;
		for(j=i+1; j<=count-1; j++) {
			if(data[j]<data[min]) {
				min = j;
			}
		}
		temp = data[i];
		data[i] = data[min];
		data[min] = temp;
	}
}
void SortingArray::bubblesort() {
	int temp,i,j;
	for(i=1; i<count+1; i++) {
		for(j=count-1; j >= i; j--) {
			if(data[j] < data[j-1]) {
				temp = data[j];
				data[j] = data[j-1];
				data[j-1] = temp;
			}
		}
	}
	/*
	for(i=0; i<count-1; i++) {
		for(j=i+1; j < count; j++) {
			if(data[j] > data[i]) {
				temp = data[i];
				data[i] = data[j];
				data[j] = temp;
			}
		}
	}
	*/
}

void SortingArray::random() {
	for(int i=0; i<count; i++) {
		data[i] = rand() % 10;
	}
}

void SortingArray::show() {
	for(int i=0; i<count; i++) {
		cout << data[i] << " " ;
	}
	cout << endl;
}
