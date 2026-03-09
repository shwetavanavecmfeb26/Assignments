//============================================================================
// Name        : 4.cpp
// Author      : shwet
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


class DivideByZero:public exception{
	public:
	const char* what(){
		return "Denominator can not be zero";
	}
};

int divide(int &a, int &b){
	if(b==0){
		DivideByZero obj;
		throw obj ;
	}
	return a/b;

}

int main() {
	try{

		try{
			int a;
			int b;
			cin>>a>>b;
			cout<<divide(a,b);

		}catch(DivideByZero &obj){
			cout<<obj.what()<<endl;
		}
		throw "Inside inner catch" ;

	}catch(const char* c){
		cout<<c<<endl;
	}

	return 0;
}
