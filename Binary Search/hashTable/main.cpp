#include "SortingArray.h"
int main() {
	int choice = 0,number = 0;
	int size = 0;
	cout << "Input Size Array (1-10) : ";
	cin >> size;
	SortingArray obj(size);
	do {
		cout << "============ MENU ============" << endl;
		cout << "\t1.Add" << endl;
		cout << "\t2.Search" << endl;
		cout << "\t3.Show" << endl;
		cout << "\t0.Exit" <<endl;
		cout << "Please choose menu: " ;
		cin >> choice;
		if(choice == 1) {
			cout << "Input Number : ";
			cin >> number;
			obj.hash(number);
			obj.show();
		} else if(choice == 2) {
			cout << "Input Number : ";
			cin >> number;
			obj.search(number);
		}else if(choice == 3) {
			obj.show();
		}
	} while(choice != 0);
	return 0;
}
