//============================================================================
// Name        : 3.cpp
// Author      : shwet
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int a=10;
	//cout<<"Enter value of varible: ";
	//cin>>a;
	int *ptr=&a;//Create a pointer pointing to the variable
	cout<<"Value of Pointer:"<<*ptr<<endl;
	int &ref=a;//Create a reference to the same variable
	cout<<"Value of Reference:"<<ref<<endl;


	//Modify the value using pointer and reference
	*ptr=20; //pointer
	ref=30;

	cout<<"After modifying, Value of Pointer:"<<*ptr<<endl;
	cout<<"After modifying,Value of reference:"<<ref<<endl;
	return 0;
}
/*
Q.1Two differences between pointer and reference
ANS:1) Pointer is variable that stores the address of another variable and
     reference is also variable that is alias or  another name of existing variable.
    2)A pointer can be declared without initialization and can later point to different variables
      reference has to initialize at the time of declaration
    3)A pointer can store a null value (nullptr), meaning it does not point to any valid memory location.
      A reference cannot be null; it must always refer to a valid object.
      Pointer: A pointer can be reassigned to point to another variable at any time.
      Reference: Once a reference is initialized to a variable, it cannot be changed to refer to another variable.



Q.2 Why references cannot be reseated but pointers can
ANS:   References cannot be reseated because they are aliases for an existing variable and do not store a separate memory address.
Once a reference is bound to a variable, it must always refer to that variable. Pointers,are store memory addresses of another variable as values,
so the stored address can be changed when pointer can point to another variable


Q.3 Why references cannot be NULL
reference is alis or another name of existing variable and must always refer to a valid object.since it doesnot stores seperate memory so that
When a reference is declared, it must be initialized with a valid variable. so it is not NULL.
*/

