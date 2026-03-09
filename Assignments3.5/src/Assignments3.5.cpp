//============================================================================
// Name        : 5.cpp
// Author      : shwet
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


class Student{
	int rollNo;
	string name;
	float marks;
public:
	Student(){
		this->rollNo = 0;
		this->name = "";
		this->marks = 0;
	}
	Student(int rollNo, string name, float marks){
		this->rollNo = rollNo;
		this->name = name;
		this->marks = marks;
	}

	void printRecord(){
		cout<<"RollNumber  of Student: "<<this->rollNo<<endl;
		cout<<"Name of Student: "<<this->name<<endl;
		cout<<"Marks of Student: "<<this->marks<<endl;
		cout<<endl;

	}

};


int main() {
	Student s;
	Student s1(70, "Radhe", 95);
	Student s2(71, "Shweta", 90);

	s.printRecord();
	s1.printRecord();
	s2.printRecord();

	return 0;
}
/*
Q.1)  When does compiler generate a default constructor?
If object is created with no parameter and user cannot define any constructor then default constructor will called
A default constructor is a constructor that takes no parameters.
The C++ compiler automatically generates a default constructor when:
A class does not define any constructor.
The compiler creates an implicit constructor to initialize objects.

Q.2) When does it NOT generate one?

pragrammer  have to create explicit constructor with default or with parameter.



Q.3) Can constructors be overloaded?
Yes.Constructor can overloaded. overloading means same constructor or function name but different paramemter.
 so default constructor
 one parameter constructor
 two paramemter constructor etc are  overloaded constructor
*/
