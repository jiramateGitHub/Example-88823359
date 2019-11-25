#include "QueueArray.h"
int main() {
	int choice = 0,number = 0;
	int size = 0;
	cout << "Input Size QueueArray : ";
	cin >> size;
	QueueArray obj(size);
	do {
		cout << "============ MENU ============" << endl;
		cout << "\t1.Enqueue" <<endl;
		cout << "\t2.Dequeue" << endl;
		cout << "\t3.Show All" << endl;
		cout << "\t4.Check Full" << endl;
		cout << "\t5.Check Empty" << endl;
		cout << "\t0.Exit" <<endl;
		cout << "Please choose menu: " ;
		cin >> choice;
		if(choice == 1) {
			cout << "Input number : ";
			cin >> number;
			obj.enqueue(number);
			cout << "-----------------------" << endl;
			obj.show();
			cout << "-----------------------" << endl;
		} else if(choice == 2) {
			if(!obj.isEmpty()) {
				cout << "Dequeue : "<< obj.dequeue() << endl;
				cout << "-----------------------" << endl;
				obj.show();
				cout << "-----------------------" << endl;
			} else {
				cout << "QueueArray is Empty" << endl;
			}
		} else if(choice == 3) {
			obj.show();
		} else if(choice == 4) {
			if(obj.isFull()) {
				cout << "QueueArray is Full" << endl;
			} else {
				cout << "QueueArray isn't Full" << endl;
			}
		} else if(choice == 5) {
			if(obj.isEmpty()) {
				cout << "QueueArray is Empty" << endl;
			} else {
				cout << "QueueArray isn't Empty" <<endl;
			}
		}

	} while(choice != 0);
	return 0;
}
