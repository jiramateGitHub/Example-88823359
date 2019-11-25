#include "StackLinked.h"
int main() {
	int choice = 0,number = 0;
	StackLinked obj;
	do {
		cout << "=========== MENU ===========" << endl;
		cout << "\t1.Push" <<endl;
		cout << "\t2.Pop" << endl;
		cout << "\t3.Show All" << endl;
		cout << "\t4.Check Empty" << endl;
		cout << "\t5.Check Size" << endl;
		cout << "\t0.Exit" <<endl;
		cout << "Please choose menu: " ;
		cin >> choice;
		if(choice == 1) {
			cout << "Input number : ";
			cin >> number;
			obj.push(number);
		} else if(choice == 2) {
			if(!obj.isEmpty()) {
				cout << "Push : " << obj.pop() << endl;
			} else {
				cout << "StackLinked is Empty" << endl;
			}
		} else if(choice == 3) {
			obj.show();
		} else if(choice == 4) {
			if(obj.isEmpty()) {
				cout << "StackLinked is Empty" << endl;
			} else {
				cout << "StackLinked isn't Empty" <<endl;
			}
		} else if(choice == 5) {
				cout << "Size : " << obj.size() << endl;
		}
	} while(choice!=0);
	return 0;
}
