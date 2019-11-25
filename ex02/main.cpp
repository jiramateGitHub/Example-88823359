#include<iostream>
#include"ArrayList.cpp"
using namespace std;
int main() {
	int menu;
	int value;
	int index;
	int sizearry;
	cout << "Input Size Array : ";
	cin >> sizearry;
	ArrayList ay(sizearry);
	do {
		cout << "1) Add" << endl;
		cout << "2) Add into" << endl;
		cout << "3) Set " << endl;
		cout << "4) Get " << endl;
		cout << "5) Index of" << endl;
		cout << "6) Size" << endl;
		cout << "7) Max_size" << endl;
		cout << "8) Show " << endl;
		cout << "9) isFull " << endl;
		cout << "10) isEmpty" << endl;
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
		} else if(menu == 2) {
			cout << endl <<"=================================" << endl << endl ;
			cout << "Input index, value : ";
			cin >> index;
			cin >> value;
			ay.add(index,value);
			cout << endl <<"=================================" << endl << endl ;
			ay.show();
			cout << endl <<"=================================" << endl << endl ;
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
		} else if(menu == 4) {
			cout << endl <<"=================================" << endl << endl ;
			cout << "[Get] Input index : ";
			cin >> index;
			cout << endl <<"=================================" << endl << endl ;
			ay.get(index);
			cout << endl <<"=================================" << endl << endl ;
		} else if(menu == 5) {
			cout << endl <<"=================================" << endl << endl ;
			cout << "[index of] Input value : ";
			cin >> value;
			cout << endl <<"=================================" << endl << endl ;
			ay.indexOf(value);
			cout << endl <<"=================================" << endl << endl ;
		} else if(menu == 6) {
			cout << endl <<"=================================" << endl << endl ;
			cout << "Size : " << ay.size() << endl;
			cout << endl <<"=================================" << endl << endl ;
		} else if(menu == 7) {
			cout << endl <<"=================================" << endl << endl ;
			cout << "Max_size : " << ay.max_size() << endl;
			cout << endl <<"=================================" << endl << endl ;
		} else if(menu == 8) {
			cout << endl <<"=================================" << endl << endl ;
			ay.show();
			cout << endl <<"=================================" << endl << endl ;
		}else if(menu == 9) {
			cout << endl <<"=================================" << endl << endl ;
			if(ay.isFull()){
				cout << " Is true" << endl;
			}else{
				cout << " Is false" << endl;
			}

			cout << endl <<"=================================" << endl << endl ;
		}else if(menu == 10) {
			cout << endl <<"=================================" << endl << endl ;
			if(ay.isEmpty()){
				cout << " Is true" << endl;
			}else{
				cout << " Is false" << endl;
			}
			cout << endl <<"=================================" << endl << endl ;
		}
	} while(menu != 0);
	return 0;
}

