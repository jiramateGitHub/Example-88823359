#include<iostream>
#include <cstdlib>
using namespace std;
class DBLinkedList{
	private:
		class node{
			public:
				int data;
				node(int data){
					this->data = data;
					link = NULL;
					plink = NULL;		
				}	
				node * link;
				node * plink;
		};
		node * head;
		node * tail;
		int count;
	public:
		DBLinkedList(){
			this->head = NULL;
			this->tail = NULL;
			this->count = 0;
		}
		~DBLinkedList(){
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
				head = newNode;
				tail = newNode;
			}else{
				newNode->plink = tail;
				tail->link = newNode;
				tail = newNode;
			}
			count++;
		}
		void add(int index,int value){
			node * newNode = new node(value);
			if(isEmpty()){
				this->head = newNode;
				this->tail = newNode;
				count++;
			}else if(index >= 0 && index <= size()){
				if(index == 0){
					newNode->link = head;
					head->plink = newNode;
					head = newNode;		
				}else{
					node * temp = head;
					if(index == count){
						newNode->plink = tail;
						tail->link = newNode;
						tail = newNode;

					}else{
						for(int i=0;i<index;i++){
							temp = temp->link;
						}
						newNode->link = temp;
						temp->plink->link = newNode;
						newNode->plink = temp->plink;	
						temp->plink = newNode;			
					}
				}
				count++;
			}else{
				cout << "->Index OVER!!! ";
			}
			cout << endl;
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
				if(round == 0){

					if(temp->data == value){
						if(temp == head && temp == tail){
							head = NULL;
							tail = NULL;
						}else if(temp == head){
							head = head->link;
							head->plink = NULL;
						}
						delete temp;
						count--;
						check = 2;
						break;
					}
				}else{
					if(temp->data == value){
						if(temp == tail){
							tail = tail->plink;
							tail->link = NULL;
						}else{
							temp->plink->link = temp->link;
							temp->link->plink = temp->plink;						}				
						delete temp;
						count--;
						check = 2;
						break;
					}else{

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
			cout << "====================SHOW===================" << endl;
			if(isEmpty()){
				cout << "No Data...";
			}else{
				for(node * temp = head;temp != NULL;temp = temp->link){
					cout << "[" << temp->data << "] ";	
				}
			}
			cout << endl;
			cout << "============================================" << endl;
			cout << endl;

		}
		void show_backward(){
			cout << "====================SHOW===================" << endl;
			if(isEmpty()){
				cout << "No Data...";
			}else{
				for(node * temp = tail;temp != NULL;temp = temp->plink){
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
		void sort(){
			node *min,*itemp,*jtemp;
			int temp;
			for(itemp=head;itemp!=NULL;itemp=itemp->link){
				min = itemp;
				for(jtemp=itemp->link;jtemp!=NULL;jtemp=jtemp->link){
					if(jtemp->data < min->data){
						min = jtemp;
					}
				}
				temp = itemp->data;
				itemp->data = min->data;
				min->data = temp;
			}	
		}
		void random(){
			for(int i=1;i<=10;i++){
				add(rand()%10);
			}
		}
};
