//============================================================================
// Name        : 7.cpp
// Author      : shwet
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<cstring>
using namespace std;

class String{
	 char *str;
	int size;
public:
	String( char *str){
		size=strlen(str);
		this->str=new char[size+1];

		strcpy(this->str, str);
	}

	String( const String  &other){
		this->str=new char[other.size+1];

		strcpy( this->str, other.str);
		this->size=other.size;
	}

	void operator=(String &other){
		strcpy(this->str, other.str);
	}

	String& operator+(String &other ){

		char* temp = new char[strlen(this->str)];
		strcpy(temp, this->str);

//		delete[] this->str;

		this->str = new char[other.size + this->size + 1];
		strcpy(this->str, temp);
		strcat(this->str,other.str);
		return *this;
	}

     void display(){
    	 cout<<"size:"<<size<<endl;
    	 cout<<str<<endl;;
     }

     friend ostream& operator<<(ostream &out, String &obj);
     ~String(){
    	 delete[] str;
    	 cout<<"Memory delete sucessfullly "<<endl;
     }
};

ostream& operator<<(ostream &out, String &obj){
	cout<< obj.str<<endl;
	return out;

}
int main() {
//     string str1;
//     cin>>str1;
//     string str2;
//     cin>>str2;

	cout<<"=====calling parametrized constructor======"<<endl;

	String s("Radhe");
	String s1("Shweta");

	cout<<"=====calling copy constructor======"<<endl;
	String s2=s1;
	s.display();
	s2.display();

	cout<<"==============================="<<endl;

	cout<<"=====calling assignment operator======"<<endl;
	s2=s;
	cout<<s2;
	cout<<"==============================="<<endl;
    String s3=s+s1;
    cout<<s3;

	return 0;
}
