#include<iostream>
using namespace std;
class LinkedList{
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
		node * head;
		node * tail;
		int count;
	public:
		LinkedList(){
			this->head = NULL;
			this->tail = NULL;
			this->count = 0;
		}
		~LinkedList(){
			for(int i = 1; i < this->count; i++){
				node * tmp = this->head;
				this->head = this->head->link;
				delete tmp;
				tmp = NULL;
			}
			this->head = NULL;
			this->tail = NULL;
		}
		void add(int value){
			node * newNode = new node(value);
			if(isEmpty()){
				this->head = newNode;
				this->tail = newNode;
			}else{
				this->tail->link = newNode;
				this->tail = newNode;
			}
			count++;
		}
		void add(int index,int value){
			node * newNode = new node(value);
			if(isEmpty()){
				this->head = newNode;
				this->tail = newNode;
				count++;
			}else if(index >= 0 && index < size()){
				if(index == 0){
					newNode->link = head;
					head = newNode;		
				}else{
					node * ptemp = head;
					node * temp = head;
					for(int i=0;i<index;i++){
						ptemp = temp;
						temp = temp->link;
					}
					newNode->link = temp;
					ptemp->link = newNode;
				}
				count++;
			}else{
				cout << "->Index OVER!!! ";
			}
		}
		int get(int index){
			int round = 0;
			if(isEmpty()){
				cout << "->No Data!!! ";
				return 0;
			}else if(index >=0 && index < size()){
				for(node * temp = head;temp != NULL;temp = temp->link){
					if(index == round){
						return temp->data;
						break;	
					}
					round++;
				}
			}else{
				cout << "->Index OVER!!! ";
				return 0;
			}
			cout << endl;
		}
		int set(int index,int value){
			int round=0;
			if(isEmpty()){
				cout << "->No Data!!! ";
			}else if(index >=0 && index < size()){
				for(node * temp = head;temp != NULL;temp = temp->link){
					if(round == index){
						temp->data = value;
						show();
						break;
					}
					round++;		
				}
			}else{
				cout << "->Index OVER!!! ";
			}

			cout << endl;
		}
		void remove(int value){
			int round = 0;
			int check = 0;
			for(node * temp = head;temp != NULL;temp = temp->link){
				node *ptemp;
				if(round == 0){
					ptemp = temp;	
					if(temp->data == value){
						if(temp == head && temp == tail){
							head = NULL;
							tail = NULL;
						}else if(temp == head){
							head = head->link;
						}
						delete temp;
						count--;
						check = 2;
						break;
					}
				}else{
					if(temp->data == value){
						if(temp == tail){
							tail = ptemp;
							tail->link = NULL;
						}else{
							ptemp->link = temp->link;
						}				
						delete temp;
						count--;
						check = 2;
						break;
					}else{
						ptemp = temp;
						check = 1;
					}
				}
				round++;
			}
			if(check == 1){
				cout << "->No Data!!! " << endl;
			}else if(check == 2){
				cout << "-> Remove Value : " << value << " Complete."  << endl;
			}
		}	
		int size(){
			return count;
		}
		void show(){
		int i = 0;
			cout << "====================SHOW===================" << endl;
			if(isEmpty()){
				cout << "No Data...";
			}else{
				for(node * temp = head;temp != NULL;temp = temp->link){
					cout << "[" << i << "] " << endl;
					cout << "[" << temp->data << "] ";	
				}
			}
			cout << endl;
			cout << "============================================" << endl;
			cout << endl;
		}
		bool find(int data){
			for(node * temp = head;temp != NULL;temp = temp->link){
				if(temp->data == data){
					return true;
				}
			}
		}
		bool isEmpty(){
			if(count == 0){
				return true;
			}else{
				return false;
			}
		}
};
