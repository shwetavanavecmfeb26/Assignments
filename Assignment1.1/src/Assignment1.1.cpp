//============================================================================
// Name        : 3.cpp
// Author      : shwet
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <stdio.h>

int main()
{
   float cpp;
   float dsa;
   float dbms;
   float os;
   float cn;

   printf("Marks in CPP: ");
   scanf("%f",&cpp);
   printf("Marks in DSA: ");
   scanf("%f",&dsa);
   printf("Marks in DBMS: ");
   scanf("%f",&dbms);
   printf("Marks in OS: ");
   scanf("%f",&os);
   printf("Marks in CN: ");
   scanf("%f",&cn);

   //Printing all subject Marks
   printf("Marks in CPP: %.2f\n ", cpp);
   printf("Marks in Data Strucure & Algortim: %.2f\n ", dsa);
   printf("Marks in Database Management System: %.2f\n ", dbms);
   printf("Marks in OPerating System: %.2f\n ", os);
   printf("Marks in Computer Networking: %.2f\n ", cn);

   //Percentage
   float sum=cpp+dsa+dbms+os+cn;
   float per=(sum/500)*100;
   printf("Percentage of Student: %.2f%%\n ", per);

   //grade
   (per>=75)?printf("Grade A"):
      (per>=60)?printf("Grade B"):
         (per>=45)?printf("Grade C"):printf("Fail");



    return 0;
}
