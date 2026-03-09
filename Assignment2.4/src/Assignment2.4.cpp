//============================================================================
// Name        : 4.cpp
// Author      : shwet
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class Employee{
	int empID;
	string empName;
	double empSalary;
public:
	Employee(){
		empID=0;
		empName="";
		empSalary=0;
	}


int getEmpId() const
{
	return empID;
}

void setEmpId(int empId) {
	empID = empId;
}

const string& getEmpName() const {
	return empName;
}

void setEmpName(const string &empName) {
	this->empName = empName;
}

	double getEmpSalary() const {
		return empSalary;
	}

	void setEmpSalary(double empSalary) {
		this->empSalary = empSalary;
	}

	double calculateGrossSalary(){
        double bonus;
		if(empSalary<=5000){
			bonus=empSalary*0.10;
		}
		else if(empSalary> 5000 && empSalary<=10000 ){
			bonus=empSalary*0.15;
		}
		else if(empSalary>10000){
			bonus=empSalary*0.20;
		}

		return empSalary+bonus;;
	}

	void acceptEmployeeDetails(){
		cout<<"Enter EmployeeID: "<<endl;
		int empID;
		cin>>empID;
		setEmpId(empID);

		cout<<"Enter Employee Name: "<<endl;
		string  empName="";
		cin>>empName;
		setEmpName(empName);

		cout<<"Enter Salary of Employee: "<<endl;
		double empSalary;
		cin>>empSalary;
		setEmpSalary(empSalary);
	}

	void displayEmployeeDetails(){
		cout<<"EmployeeID: "<<getEmpId()<<endl;
		cout<<"Employee Name: "<<getEmpName()<<endl;
		cout<<"Employee Salary: "<<getEmpSalary()<<endl;
		cout<<"Employee Gross Salary: "<<calculateGrossSalary()<<endl;
	}

};

int menuList(){
	cout<<"1.Add a new Employee"<<endl;
	cout<<"2.Calculate Gross Salary For employee"<<endl;
	cout<<"3.Display the Employee Details"<<endl;
	cout<<"4.Update Employee Information"<<endl;
	cout<<"5.Exit the Program<<endl"<<endl;
	cout<<"Enter Your Chioce: "<<endl;
	int choice;
	cin>>choice;
	return choice;
}
int main() {
	Employee e;
	string name;
	float salary;

	int choice=menuList();
	while(choice!=5){
		switch(choice){
		case 1:
			e.acceptEmployeeDetails();
			break;
		case 2:
			e.calculateGrossSalary();
			break;
		case 3:
			e.displayEmployeeDetails();
			break;
		case 4:
			cout << "Enter New Name: ";
			cin >> name;
			e.setEmpName(name);

			cout << "Enter New Salary: ";
			 cin >> salary;
			 e.setEmpSalary(salary);

			cout << "Employee Updated Successfully\n";
			break;
		default:
			cout<<"Enter valid Number"<<endl;
			break;
		}
		cout<<endl;
		choice=menuList();
	}

	cout<<"Exit the Program"<<endl;
	return 0;
}
