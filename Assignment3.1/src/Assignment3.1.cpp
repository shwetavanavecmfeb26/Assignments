//============================================================================
// Name        : 1.cpp
// Author      : shwet
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Box{
	int length;
	int width;
	int height;
public:
	Box(int length, int width, int height):length(length), width(width), height(height){

	}
	void setDimensions(int length, int width, int height){
		this->length=length;
		this->width=width;
		this->height=height;
	}

	int volume(){
		return (this->length)*(this->width)*(this->height);
	}
};
int main() {

	//Initalization using constructor
	Box b(10,20,15);

	cout<<"Volume of BOX: "<<b.volume()<<endl;

	//Assignment using setDimensions()
	Box b1(1,2,3);//temparary intialization
	b1.setDimensions(15, 20, 10);
	cout<<"Volume of BOX: "<<b1.volume()<<endl;


	return 0;
}
//Q.1) Why must initialization happen before assignment?
//ANS.
//when we create object memory is allocated then automatically constructor will call
//constructor is used to initalize data member of object
//so that data memeber cannot contains garbage value.
//assignment is used assign value to data memberit can change value after object creation but
//initailzation is used to initialize object ata object creation
//
//Q.2)  When is initialization preferred over assignment?

//initialization preferred when
//.we use constructor
//data memeber is const
//when mwmbers are reference
