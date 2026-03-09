//============================================================================
// Name        : 2.cpp
// Author      : shwet
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

//call by value
void swapByValue(int a, int b){
	int temp=a;
	a=b;
	b=temp;
}

void swapByReference(int &a, int &b){
	int temp=a;
	a=b;
	b=temp;
}

void swapByAddress(int *a, int *b){
	int temp =*a;
	*a=*b;
	*b=temp;
}
int main() {
	int a;
	int b;
	cout<<"Enter value of a and b: ";
	cin>>a>>b;
	swapByValue(a, b);
	cout<<"After swaping by value,value of a,b : "<<a<<" "<<b<<endl;

	swapByReference(a, b);
	cout<<"After swaping by reference,value of a,b : "<<a<<" "<<b<<endl;

	swapByAddress(&a, &b);
	cout<<"After swaping by address,value of a,b : "<<a<<" "<<b<<endl;

	return 0;
}


//Explain how reference variables act as aliases and how that affects swapByReference()
//ANS> we know that reference is the alias of variable means another name of that variable
//so memory address is same same variable but different name so when we pass parameter as
//reference in swapByReference() the actual variables are swapping their values.
//so it can change original value of variables
