//============================================================================
// Name        : 6.cpp
// Author      : shwet
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int x=10;
	int y=20;
	int z=30;

	int *px=&x;
	int *py=&y;
	int *pz=&z;

    cout<<"Before Swap the value variable"<<endl;
    cout<<"Value of x: "<<x<<endl;
    cout<<"Value of y: "<<y<<endl;
    cout<<"Value of z: "<<z<<endl;

     cout<<"Before Swap the variable address stored in each pointer"<<endl;
     cout<<"Address of x: "<<&x<<endl;
     cout<<"Address of y: "<<&y<<endl;
     cout<<"Address of z: "<<&z<<endl;


//    int *temp=&x;
//    px=&z;
//    pz=temp;

     int temp=x;
     x=z;
     z=temp;

    cout<<"After Swap the value of variable"<<endl;
    cout<<"Value of x: "<<*px<<endl;
    cout<<"Value of y: "<<*py<<endl;
    cout<<"Value of z: "<<*pz<<endl;

    cout<<"After Swap the variable address stored in each pointer"<<endl;
    cout<<"Address of x: "<<px<<endl;
    cout<<"Address of y: "<<py<<endl;
    cout<<"Address of z: "<<pz<<endl;

//values are changed but address stored in each pointer can not be changed.


	return 0;
}
