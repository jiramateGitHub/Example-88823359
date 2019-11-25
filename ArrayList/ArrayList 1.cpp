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

int main() {
	int menu;
	int value;
	int index;
	int sizearry;
	cout << "Input Size Array : ";
	cin >> sizearry;
	ArrayList ay(sizearry);
	do {
		system("cls");
		cout << "1) Add" << endl;
		cout << "2) Add into" << endl;
		cout << "3) Set " << endl;
		cout << "4) Get " << endl;
		cout << "5) Index of" << endl;
		cout << "6) Size" << endl;
		cout << "7) Max_size" << endl;
		cout << "8) Show " << endl;
		cout << "0) Exit " << endl;
		cout << "Enter : ";
		cin >> menu;
		if(menu == 1) {
			cout << endl <<"=================================" << endl << endl ;
			cout << "Count " << ay.size() << " Input value : ";
			cin >> value;
			ay.add(value);
			cout << endl <<"=================================" << endl << endl ;
			ay.show();
			cout << endl <<"=================================" << endl << endl ;
			system("pause");
		} else if(menu == 2) {
			cout << endl <<"=================================" << endl << endl ;
			cout << "Input index, value : ";
			cin >> index;
			cin >> value;
			ay.add(index,value);
			cout << endl <<"=================================" << endl << endl ;
			ay.show();
			cout << endl <<"=================================" << endl << endl ;
			system("pause");
		} else if(menu == 3) {
			cout << endl <<"=================================" << endl << endl ;
			cout << "[Set] Input index, value : ";
			cin >> index;
			cin >> value;
			cout << endl <<"=================================" << endl << endl ;
			cout << "### Before ###" << endl;
			ay.show();
			cout << endl;
			ay.set(index,value);
			cout << endl << "### After ###" << endl;
			ay.show();
			cout << endl <<"=================================" << endl << endl ;
			system("pause");
		} else if(menu == 4) {
			cout << endl <<"=================================" << endl << endl ;
			cout << "[Get] Input index : ";
			cin >> index;
			cout << endl <<"=================================" << endl << endl ;
			ay.get(index);
			cout << endl <<"=================================" << endl << endl ;
			system("pause");
		} else if(menu == 5) {
			cout << endl <<"=================================" << endl << endl ;
			cout << "[index of] Input value : ";
			cin >> value;
			cout << endl <<"=================================" << endl << endl ;
			ay.indexOf(value);
			cout << endl <<"=================================" << endl << endl ;
			system("pause");
		} else if(menu == 6) {
			cout << endl <<"=================================" << endl << endl ;
			cout << "Size : " << ay.size() << endl;
			cout << endl <<"=================================" << endl << endl ;
			system("pause");
		} else if(menu == 7) {
			cout << endl <<"=================================" << endl << endl ;
			cout << "Max_size : " << ay.max_size() << endl;
			cout << endl <<"=================================" << endl << endl ;
			system("pause");
		} else if(menu == 8) {
			cout << endl <<"=================================" << endl << endl ;
			ay.show();
			cout << endl <<"=================================" << endl << endl ;
			system("pause");
		}
	} while(menu != 0);
	return 0;
}


