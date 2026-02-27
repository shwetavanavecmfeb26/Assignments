//============================================================================
// Name        : 3.cpp
// Author      : shwet
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<stdio.h>
//Type Size Explorer
int main(){
    short int num;
    int num1;
    long int num2;
    long long int num3;
    unsigned int num4;
    float num5;
    double num6;
    long double num7;
    char c;
    printf("Size of short int: %d\n", sizeof(short int));
    printf("Size of int: %d\n", sizeof(int));
    printf("Size of long int: %d\n", sizeof(long int));
    printf("Size of long long int: %d\n", sizeof(long long int));
    printf("Size of unsigned int: %d\n", sizeof(unsigned int));
    printf("Size of float : %d\n", sizeof(float));
    printf("Size of double: %d\n", sizeof(double));
    printf("Size of long double int: %d\n", sizeof(long double ));
    printf("Size of char: %d\n", sizeof(char));

    return 0;
}
    //Q.1 Which two types have the same size on your machine?
    //ans. long long int and double have same (8byte) size.

     //Q.2 Does unsigned int have a different size than int
     //ans. No.unsigned int and int have same size

