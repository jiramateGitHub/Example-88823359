#include "StackArray.h"
int main() {
	int choice = 0,number = 0;
	int size = 0;
	cout << "Input Size StackArray : ";
	cin >> size;
	StackArray obj(size);
	do {
		cout << "============ MENU ============" << endl;
		cout << "\t1.Push" <<endl;
		cout << "\t2.Pop" << endl;
		cout << "\t3.Show All" << endl;
		cout << "\t4.Check Full" << endl;
		cout << "\t5.Check Empty" << endl;
		cout << "\t0.Exit" <<endl;
		cout << "Please choose menu: " ;
		cin >> choice;
		if(choice == 1) {
			cout << "Input number : ";
			cin >> number;
			obj.push(number);
		} else if(choice == 2) {
			cout << "Push : "<<obj.pop() << endl;
		} else if(choice == 3) {
			obj.show();
		} else if(choice == 4) {
			if(obj.isFull()) {
				cout << "StackArray is Full" << endl;
			} else {
				cout << "StackArray isn't Full" << endl;
			}
		} else if(choice == 5) {
			if(obj.isEmpty()) {
				cout << "StackArray is Empty" << endl;
			} else {
				cout << "StackArray isn't Empty" <<endl;
			}
		}
	} while(choice != 0);
	return 0;
}
