//============================================================================
// Name        : 4.cpp
// Author      : shwet
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;



void findMinMax(int a, int b,int c, int &minval, int &maxval){
    minval=(a<b)?a:
    		  (b<c)?b:c;
	cout<<"minimun value out of three: "<<minval<<endl;
	maxval=(a>b)?a:
               (b>c)?b:c;
	cout<<"Maximum value out of three: "<<maxval<<endl;

}
int main() {
	int a,b,c;
	int lo;
	int hi;


	cout<<"Enter three integers: "<<endl;
	cin>>a>>b>>c;

	cout<<"Previous min val: "<<endl;
	cin>>lo;
	cout<<"Previous max val: "<<endl;
	cin>>hi;

	findMinMax(a,b,c,lo,hi);
	cout<<"Updated value of minimun value : "<<lo<<endl;
	cout<<"Updated value of Maximum value : "<<hi<<endl;





	return 0;
}
