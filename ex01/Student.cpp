#include<iostream>
using namespace std;
class Student
{
	private:
		string id;
		string prefixName;
		string fname;
		string lname;
		string nickName;
	public:
		string getId(){
			return id;
		}
		void setId(string id){
			this->id = id;
		}
		string getPrefixName(){
			return prefixName;
		}
		void setPrefixName(string prefixName){
			this->prefixName = prefixName;
		}
		string getFname(){
			return fname;
		}
		void setFname(string fname){
			this->fname = fname;
		}
		string getLname(){
			return lname;
		}
		void setLname(string lname){
			this->lname = lname;
		}
		string getNickName(){
			return nickName;
		}	
		void setNickName(string nickName){
			this->nickName = nickName;
		}

};
