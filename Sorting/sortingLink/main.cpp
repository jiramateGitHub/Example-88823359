#include"DBLinkedList.cpp"
int main(){
	int choice;
	int data;
	int index;
	DBLinkedList * lk = new DBLinkedList();
	do{
		cout << "======== Menu ========" << endl;
		cout << "1) Add Value "<< endl;
		cout << "2) Add Index" << endl;
		cout << "3) Get" << endl;
		cout << "4) Set" << endl;
		cout << "5) Remove" << endl;
		cout << "6) Size" << endl;
		cout << "7) Show" << endl;
		cout << "8) Show Backward" << endl;
		cout << "9) Find" << endl;
		cout << "10) isEmpty" << endl;
		cout << "11) Selection Sort" << endl;
		cout << "12) Insertion Sort" << endl;
		cout << "99) Random" << endl;
		cout << "0) Exit" << endl;
		cout << "Input Choice : ";
		cin >> choice;
		if(choice == 1){
			cout << "Input Data : ";
			cin >> data;
			lk->add(data);
			lk->show();	
		}
		if(choice == 2){
			cout << "Add | Input Index : ";
			cin >> index;
			cout << "Add | Input Data : ";
			cin >> data;
			lk->add(index,data);
			lk->show();
		}
		if(choice == 3){
			cout << "Get | Input Index : ";
			cin >> index;
			cout << "Value : " << lk->get(index) << endl;
			lk->show();
		}
		if(choice == 4){
			cout << "Set | Input Index : ";
			cin >> index;
			cout << "Set | Input Data : ";
			cin >> data;
			lk->set(index,data);
			lk->show();
		}
		if(choice == 5){
			cout << "Remove | Input Data : ";
			cin >> data;
			lk->remove(data);
			lk->show();
		}
		if(choice == 6){
			cout << "Size : " << lk->size() << endl;
		}
		if(choice == 7){
			lk->show();
		}
		if(choice == 8){
			lk->show_backward();
		}

		if(choice == 9){
			cout << "Find Data : ";
			cin >> data;
			if(lk->find(data) == true){
				cout << "True" << endl;
				lk->show();
			}else{
				cout << "False" << endl;
			}
		}
		if(choice == 10){
			if(lk->isEmpty()){
				cout << "True" << endl;
			}else{
				cout << "False" << endl;
			}
		}
		if(choice == 11){
			lk->sortSelect();
			lk->show();
		}
		if(choice == 12){
			lk->sortInsert();
			lk->show();
		}
		if(choice == 99){
			lk->random();
			lk->show();
		}

	}while(choice != 0);
}
