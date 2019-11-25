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
		cout << "+++++++++++++++++++++++++++++" << endl;
		temp = data[i];
		for(j=i-1; j>=0; j--) {
			cout << "-----------------------------------" << endl;
			cout << "data[j] > temp " << data[j] << " > " << temp <<endl;
			if(data[j]>temp) {
				cout << "j+1 = j " << data[j+1] << " " << data[j] << endl;
				data[j+1] = data[j];
				cout << "data[j+1] : " << data[j+1] << endl;
				cout << " j = temp " << data[j] << " " << temp << endl;
				data[j] = temp; 
				cout << "data[j] : " << data[j] << endl;
			}
		}
	}
}

void SortingArray::selection() {
	int temp,min,i,j;
	for(i=0; i<=count-2; i++) {
		cout << "+++++++++++++++++++++++++++++" << endl;
		min = i;
		cout << "min : " << min << endl;
		for(j=i+1; j<=count-1; j++) {
			cout << "--------------------------------" << endl;
			cout << "data[j] < data[min]" << data[j] << " < " << data[min] << endl;
			if(data[j]<data[min]) {
				min = j;
				cout << "min = j " << min << endl;
			}
		}
		cout << "temp = data[i] " << temp << " " << data[i] << endl;
		temp = data[i];
		cout << "temp = " << temp << endl;
		
		cout << "data[i] = data[min] " << data[i] << " " << data[min] << endl;
		data[i] = data[min];
		cout << "data[i] = " << data[i] << endl;
		
		cout << "data[min] = temp " << data[min] << " " << temp << endl;
		data[min] = temp;
		cout << "data[min] = " << data[min] << endl;
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
