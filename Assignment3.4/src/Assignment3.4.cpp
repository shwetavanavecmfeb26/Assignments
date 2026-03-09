//============================================================================
// Name        : 4.cpp
// Author      : shwet
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main1() {
	int *arr = new int[5];


	cout<<"Enter elements in array: "<<endl;
	for(int i=0;i<5;i++){
         cin>>arr[i];
	}

	cout<<"Print the values of array:"<<endl;
	for(int i=0;i<5;i++){
         cout<<arr[i]<<" ";
	}

	delete[] arr;
	return 0;
}

int main() {

	int *arr=(int*)malloc(5*(sizeof(int)));


	cout<<"Enter elements in array: "<<endl;
	for(int i=0;i<5;i++){
         cin>>arr[i];
	}
	cout<<"Print the values of array:"<<endl;
	for(int i=0;i<5;i++){
         cout<<arr[i]<<" ";
	}

	free(arr);
	return 0;
}

/*
Q.1) Why constructors are not called when using malloc
  ANS:
   malloc is a C library function used for allocating raw memory from the heap
    It simply reserves a block of memory of a specified size and returns a pointer to it.
    It does not know anything about C++ classes or objects, so it cannot call constructors.


Q.2) Why new is preferred in C++

The new operator is designed specifically for C++ object creation. It performs two important operations:
Allocates memory from the heap
Calls the constructor of the object

Because of this, new ensures that objects are properly initialized and ready to use.
It also improves type safety and integrates well with C++ features such as classes and inheritance



Q.3) Difference in return types and initialization
malloc returns a void* pointer and requires explicit type casting in C++. It only allocates raw memory and does not initialize it.
 In contrast, new returns a pointer of the correct type and can initialize the allocated memory, and it also calls constructors for class objects.

Q.4) Why malloc cannot initialize complex types
Complex types such as classes, objects with constructors, objects with inheritance, or objects with
 virtual functions require special initialization performed by constructors.
Since malloc only allocates raw memory and does not understand class structures,
it cannot execute constructors or initialize object members properly.
This means objects created with malloc may have uninitialized data members and incorrect internal state.
In contrast, new correctly calls constructors, ensuring that complex objects are properly initialized.
 */
