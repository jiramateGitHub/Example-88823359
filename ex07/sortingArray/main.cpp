#include "SortingArray.h"
int main() {
	int choice = 0,number = 0;
	int size = 0;
	cout << "Input Size Array : ";
	cin >> size;
	SortingArray obj(size);
	do {
		cout << "============ MENU ============" << endl;
		cout << "\t1.Random Number" <<endl;
		cout << "\t2.Insertion Sort" << endl;
		cout << "\t3.Selection Sort" << endl;
		cout << "\t4.Bubble Sort" << endl;
		cout << "\t5.Show All" << endl;
		cout << "\t0.Exit" <<endl;
		cout << "Please choose menu: " ;
		cin >> choice;
		if(choice == 1) {
			obj.random();
			obj.show();
		} else if(choice == 2) {
			obj.insertion();
			obj.show();
		} else if(choice == 3) {
			obj.selection();
			obj.show();
		} else if(choice == 4) {
			obj.bubblesort();
			obj.show();
		} else if(choice == 5) {
			obj.show();
		}
	} while(choice != 0);
	return 0;
}
