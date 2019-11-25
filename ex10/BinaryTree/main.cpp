#include "BinaryTree.h"
int main() {
	int choice = 0,number = 0;
	BinaryTree obj;
	do {
		cout << "\n============ MENU ============" << endl;
		cout << "\t1.Add" << endl;
		cout << "\t2.Search" << endl;
		cout << "\t3.Pre-Order" << endl;
        cout << "\t4.In-Order" << endl;
        cout << "\t5.Post-Order" << endl;    
		cout << "\t0.Exit" <<endl;
		cout << "Please choose menu: " ;
		cin >> choice;
		if(choice == 1) {
			cout << "Input Number : ";
			cin >> number;
	        obj.insert(number);
		} else if(choice == 2) {
			cout << "Input Number (Search) : ";
			cin >> number;
            if(obj.search(number)){
                cout << "Found!!!" << endl;
            }else{
                cout << "Not Found!!!" << endl;
            }
		}else if(choice == 3) {
			obj.printPreOrder(obj.root);
		}else if(choice == 4) {
			obj.printInOrder(obj.root);
		}else if(choice == 5) {
			obj.printPostOrder(obj.root);
		}
	} while(choice != 0);
	return 0;
}
