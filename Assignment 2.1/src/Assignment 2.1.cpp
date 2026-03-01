//============================================================================
// Name        : 1.cpp
// Author      : shwet
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstring>
using namespace std;


class Student{
private:
	string name;
	int rollNumber;
	float marks;
	char grade;
public:
	void setName(const string &name) {
		this->name = name;
	}
	const string& getName() const {
		return name;
	}

	void setRollNumber(int rollNumber) {
		this->rollNumber = rollNumber;
	}
	int getRollNumber() const {
		return rollNumber;
	}

	void setMarks(float marks) {
		this->marks = marks;
	}
	float getMarks() const {
		return marks;
	}

	void setGrade(char grade) {
		this->grade = grade;
	}
	char getGrade() const {
		return grade;
	}


	void calculateGrade(){
		if(marks <= 100 && marks >= 90)
			this->grade = 'A';
		else if(marks<=89 && marks>=80)
			grade = 'B';
		else if(marks<=79 && marks>=70)
			grade = 'C';
		else if(marks<=69 && marks>=60)
			grade = 'D';
		else
			grade='F';



	}

	void acceptInfo(){
		cout<<"Enter Name: "<<endl;
		string name="";
		cin>>name;
		setName(name);

		cout<<"Enter Roll Number: "<<endl;
		int rollNumber;
		cin>>rollNumber;
		setRollNumber(rollNumber);

		cout<<"Enter Marks: "<<endl;
		float marks;
		cin>>marks;
		setMarks(marks);

	}

	void displayInfo(){
      cout<<"Name of Student: "<<getName()<<endl;
      cout<<"Roll NUmber of Student: "<<getRollNumber()<<endl;
      cout<<"Mark of Student: "<<getMarks()<<endl;
      cout<<"Grade of Student: "<<getGrade()<<endl;

	}
};


int menuList(){
	cout<<"1 Accept Information."<<endl;
	cout<<"2.calculate Grade"<<endl;
	cout<<"3.Display Information"<<endl;
	cout<<"4.Exit the Program"<<endl;
	cout<<"Enter choice: "<<endl;
	int choice;
	cin>>choice;
	return choice;
}
int main() {
	Student s1;
	int choice = menuList();

     while(choice != 4){
    	 switch(choice){
    	 case 1:
    	    s1.acceptInfo();
    	     break;
    	 case 2:
    	     s1.calculateGrade();
    	     break;
    	 case 3:
    	 s1.displayInfo();
    	     break;

    	 }
    	 cout<<endl;
         choice=menuList();
     }

     cout<<" Exit the Program"<<endl;





	return 0;
}
