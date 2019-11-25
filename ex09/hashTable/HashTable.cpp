#include "HashTable.h"

HashTable::HashTable(int size) {
	data = new int[size];
	count = size;
	for(int i=0;i<count;i++){
		head[i] = NULL;
	}
}
HashTable::~HashTable() {
	delete []data;
}

void HashTable::hash(int data){
	 hashAdd(data,data % count);
}

void HashTable::hashAdd(int data,int index){
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

void HashTable::show() {
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



void HashTable::search(int data){
	int index = data % count;
	node *temp;
	int row = 0;
	if(head[index] != NULL){
		cout << "\n[" << index <<"]: ";
		for(temp = head[index];temp!=NULL;temp=temp->link){
			if(temp->data == data){
				cout << "\t>[" << temp->data <<":Index " << row << "]<\t";
			}else{
				cout << "\t" << temp->data;
			}
			row++;
		}
		//cout << "\n\n Found " << data << "--> Index " << row << endl;
	}else{
		cout << "\nNot Found !!!" << endl;
	}
	cout << endl << endl;
}

