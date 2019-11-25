#include<iostream>
using namespace std;
class ArrayList {
	private:
		int capacity;
		int count;
		int * item;
		int * arry;
	public:
		ArrayList(int size) {
			arry = new int[size];
			count = 0;
			capacity = size;
			for(int i=0; i<max_size(); i++) {
				arry[i] = 0;
			}
		}
		~ArrayList() {
			delete []arry;
		}
		void add(int value) {
			if(!isFull()) {
				arry[count] = value;
				cout << "Count " << size() <<" : Add " << arry[count] << endl;
				count++;
			} else {
				cout << "Is Full";
			}
		}
		void add(int index,int value) {
			if(!isFull()) {
				if(index < max_size()) {
					if (arry[index] != 0) {
						for(int i = max_size()-1 ; i >= index ; i--) {
							arry[i] = arry[i-1];
						}
					}
					arry[index] = value;
					count++;
				} else {
					cout << "Out capacity!! " << endl;
				}
			} else {
				cout << "Is Full!! " << endl;
			}
		}
		int get(int index) {
			if(index < size()) {
				cout << "Get Arry : " << arry[index] << endl;
			} else {
				cout << "No data!!! " << endl;
			}

		}
		void set(int index,int value) {
			if(index < max_size()) {
				cout << "Set Arry Index " << index << " : " << arry[index] << " to " << value << endl;
				arry[index] = value;
			} else {
				cout << "Out capacity!! " << endl;
			}
		}
		int indexOf(int value) {
			int check = 0;
			for(int i=0; i<max_size(); i++) {
				if(value == arry[i]) {
					cout << "indexOf : " << i << endl;
					check = 1;
				}
			}
			if (check != 1) {
				cout << "No Data!!!" << endl;
			}
		}
		int size() {
			return count;
		}
		int max_size() {
			return capacity;
		}
		bool isEmpty() {
			if(count == 0) {
				return true;
			} else {
				return false;
			}
		}
		bool isFull() {
			if(count == capacity) {
				return true;
			} else {
				return false;
			}
		}
		void show() {
			cout << "Capacity : " << max_size() << endl;
			for(int i=0; i<max_size(); i++) {
				cout << "[" << arry[i] << "] " ;
			}
			cout << endl;
		}
};
