//============================================================================
// Name        : 2.cpp
// Author      : shwet
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<fstream>
using namespace std;

ofstream ofs("Students.txt");




class Student{
	int  roll;
	string name;
	float marks;
public:
	Student():roll(0),name(""),marks(0){

	}


	void writeToFile(){
		ofs<<"Roll Number: "<<this->roll<<endl;
		ofs<<"Name: "<<this->name<<endl;
		ofs<<"Marks:"<<this->marks<<endl;
	}
	void readFile(){
		ifstream ifs("Students.txt");
		string line;
		while(getline(ifs,line)){
			cout<<line<<endl;
		}
	}

	int getRoll() const {
		return roll;
	}
    void setRoll(int roll) {
		this->roll = roll;
	}

    const string& getName() const {
    		return name;
    }

    void setName(const string &name) {
    		this->name = name;
    }

	float getMarks() const {
		return marks;
	}

	void setMarks(float marks) {
		this->marks = marks;
	}

	~Student(){
			cout<<"Destroying student …"<<endl;
		}
};
int main() {
    Student *s=new Student[3];
    int n;
    string ss;
    float f;
    for(int i=0;i<3;i++){
    	cout<<"Roll:";
    	cin>>n;
    	cout<<"name";
    	cin>>ss;
    	cout<<"Marks:";
    	cin>>f;
    	s[i].setRoll(n);
    	s[i].setName(ss);
    	s[i].setMarks(f);
    	s[i].writeToFile();

    }
    cout<<"Reading file:";
    s[1].readFile();

    delete[] s;

    ofs.close();
	return 0;
}
