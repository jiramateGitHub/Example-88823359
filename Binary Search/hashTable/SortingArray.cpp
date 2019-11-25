#include "SortingArray.h"

SortingArray::SortingArray(int size) {
	data = new int[size];
	count = size;
	for(int i=0;i<count;i++){
		head[i] = NULL;
	}
}
SortingArray::~SortingArray() {
	delete []data;
}

void SortingArray::hash(int data){
	 hashAdd(data,data % count);
}

void SortingArray::hashAdd(int data,int index){
	node * newNode,*temp;
	newNode = new node(data);
	if(head[index] == NULL){
		head[index] = newNode;
		tail[index] = newNode;
	}else{
		tail[index]->link = newNode;
		tail[index] = newNode;
	}
}

void SortingArray::show() {
	cout << endl;
	node *temp;
	for(int i=0;i<count;i++){
		cout << "\n[" << i <<"]: ";
		for(temp=head[i];temp!=NULL;temp=temp->link){
			cout << "\t" << temp->data;
		}
		cout << endl;
	}
}



void SortingArray::search(int data){
	int index = data % count;
	node *temp;
	int row = 0;
	if(head[index] != NULL){
		cout << "\n[" << index <<"]: ";
		for(temp = head[index];temp!=NULL;temp=temp->link){
			if(temp->data == data){
				cout << "\t>[" << temp->data <<"]<\t";
			}else{
				cout << "\t" << temp->data;
			}
			row++;
		}
		cout << "\n\n Found " << data << "--> Index " << row << endl;
	}else{
		cout << "\nNot Found !!!" << endl;
	}
	cout << endl << endl;
}

