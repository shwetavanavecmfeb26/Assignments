//============================================================================
// Name        : 1.cpp
// Author      : shwet
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Employee{
	int  id;
	string name;
	mutable int accessCount;
public:
	Employee():id(0),name(""),accessCount(0){

	}
	Employee(int id, string name, int accessCount):id(id),name(name),accessCount(accessCount){

	}

	//here we cannot using data memeber as pointer
	//so that two object can not point same memory location
	//so that here is shallow copy
	Employee(Employee &other){
		id=other.id;
		name=other.name;
		accessCount=other.accessCount;
	}
	void display()const{//const member function cannot modify any data member here rollno and name must be const so display is constant
		                   //but if we want modify data member then we have to declare that data memeber as mutable
		accessCount++;     //here we want to increse the count so that we use mutable
	}
	int getcount(){
		return accessCount;
	}

};
int main() {
	Employee e1;
	e1.display();
	e1.display();
	e1.display();
	e1.display();
	e1.display();
	e1.display();
	e1.display();
	cout<<"accessCount of e1: "<<e1.getcount()<<endl;

	Employee e2=e1;//copy Constructor

    e2.display();
    cout<<"accessCount of e2: "<<e2.getcount()<<endl;



	return 0;
}
