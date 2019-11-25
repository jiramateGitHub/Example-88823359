#include<iostream>
#include<string>
#include"Student.cpp"
using namespace std;
int main(){
	Student std[10];
	//std = new Student[10];
	string id,prefixName,fname,lname,nickName;
	for(int i=0;i<10;i++){
		cout << "====== Row : " << i+1 << " ======" << endl;
		cout << "ID : "; 
		cin >> id;
		std[i].setId(id);
		cout << "PrefixName : ";
		cin >> prefixName;
		std[i].setPrefixName(prefixName);
		cout << "Fname : ";
		cin >> fname;
		std[i].setFname(fname);
		cout << "Lname : ";
		cin >> lname;
		std[i].setLname(lname);
		cout << "nickName : ";
		cin >> nickName;
		std[i].setNickName(nickName); 
	}
	for(int i=0;i<10;i++){
		cout << "==========" << i+1 << "=========" << endl;
		cout << "Id         : " << std[i].getId() << endl;
		cout << "PrefixName : " << std[i].getPrefixName() << endl;
		cout << "Fname      : " << std[i].getFname() << endl;
		cout << "Lname      : " << std[i].getLname() << endl;
		cout << "nickName   : " << std[i].getNickName() << endl;
		cout << "---------------------------------------------" << endl;
	}	
}
