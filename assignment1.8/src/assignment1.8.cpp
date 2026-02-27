//============================================================================
// Name        : 8.cpp
// Author      : shwet
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


int absolute(int n){
	return (n>0) ? n : n*(-1);
}

int clamp(int val,int lo,int hi){
	if(val<lo)
		return lo;
	else if(val>hi)
		return hi;

	return val;

}

int main() {
	int val=0;
	int lo=0;
	int hi=0;

	cout<<"Value of val: "<<endl;
	cin>>val;
	cout<<"Value of lo: "<<endl;
    cin>>lo;
    cout<<"Value of hi: "<<endl;
    cin>>hi;

    int ab = absolute(val);
    int cl= clamp(val,lo,hi);

    cout<<"Absolute value : "<<ab<<endl;
    cout<<"clamp value : "<<cl<<endl;

	return 0;
}
