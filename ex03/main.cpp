#include"LinkedList.cpp"
int main(){
	int choice;
	int data;
	int index;
	LinkedList * lk = new LinkedList();
	do{
		cout << "======== Menu ========" << endl;
		cout << "1) Add Value "<< endl;
		cout << "2) Add Index" << endl;
		cout << "3) Get" << endl;
		cout << "4) Set" << endl;
		cout << "5) Remove" << endl;
		cout << "6) Size" << endl;
		cout << "7) Show" << endl;
		cout << "8) Find" << endl;
		cout << "9) isEmpty" << endl;
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
			cout << "Find Data : ";
			cin >> data;
			if(lk->find(data) == true){
				cout << "True" << endl;
				lk->show();
			}else{
				cout << "False" << endl;
			}
		}
		if(choice == 9){
			if(lk->isEmpty()){
				cout << "True" << endl;
			}else{
				cout << "False" << endl;
			}
		}

	}while(choice != 0);
}
