//============================================================================
// Name        : 6.cpp
// Author      : shwet
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Vector{
	int *arr;
	int size;
public:
	Vector(int size):size(size){
		arr=new int[size];
	}

	void acceptrecord(){
		for(int i=0;i<size;i++){
			cin>>arr[i];
		}
	}
	int operator[](int i){
		return arr[i];
	}
	int operator()(){
		int sum=0;
		for(int  i=0;i<size;i++){
			sum+=arr[i];
		}
		return sum;
	}
	friend ostream& operator<<(ostream &out, Vector &obj);


};


ostream& operator<<(ostream &out, Vector &obj){
	for(int i=0;i<obj.size;i++){
	cout<<obj.arr[i]<<endl;
	}
	return out;
}
int main() {
	int n;
	cin>>n;
    Vector v(n);
     v.acceptrecord();
     cout<<"==========================="<<endl;
     for(int i=0;i<n;i++){
    	 cout<<v[i]<<" ";
     }
     cout<<endl;
     cout<<"==========================="<<endl;
      cout<<v();


	return 0;
}
