//============================================================================
// Name        : 6.cpp
// Author      : shwet
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Employee{
	const int employeeId;
	string name;
	float salary;

public:
	Employee(int employeeId, string name, float salary):employeeId(employeeId), name(name), salary(salary){

	}
	void displayDetails(){
		cout<<"Employee Id: "<<employeeId<<endl;
		cout<<"Name of Employee: "<<name<<endl;
		cout<<"Salary: "<<salary<<endl;
	}
};
int main() {

	Employee e(11,"Radhe", 5000);
	e.displayDetails();
	return 0;
}
