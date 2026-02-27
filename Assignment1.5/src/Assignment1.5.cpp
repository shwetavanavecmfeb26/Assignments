//============================================================================
// Name        : 5.cpp
// Author      : shwet
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

  //call by value
//#include <stdio.h>
//void doubleIt(int n) {
//    n = n * 2;
//    printf("Inside doubleIt: %d\n", n);
//}
//int main() {
//    int num = 7;
//    doubleIt(num);
//    printf("In main after call: %d\n", num);

//return 0;
//}
//output of above is
//Inside doubleIt: 14
//In main after call: 7


//call by reference
#include <stdio.h>

void doubleIt(int &n) {
    n = n * 2;
    printf("Inside doubleIt: %d\n", n);
}

int main() {
     int num = 7;
     doubleIt(num);
     printf("In main after call: %d\n", num);

return 0;
}
//Output of call by reference
//Inside doubleIt: 14
//In main after call: 14
