//============================================================================
// Name        : 5.cpp
// Author      : shwet
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Number{
	int val;
public:
	Number():val(0){

	}
	Number(int val):val(val){

	}

	Number operator=(Number &other){
		this->val=other.val;

	}
	//pre
	Number operator++(){
		++this->val;
		return *this;
	}
	//
	Number operator++(int){
		Number temp = *this;
		this->val++;

		return temp;
	}
	void display(){
		cout<<this->val<<endl;
	}
	friend bool operator>(Number &n1, Number &n2);
    friend class Inspector;
    friend ostream& operator<<(ostream &out, Number &obj);
};

ostream& operator<<(ostream &out, Number &obj){
	cout<<obj.val<<endl;
	return out;
}



bool operator>(Number &n1, Number &n2){
	bool result=false;
	if(n1.val > n2.val){
		result=true;
	}
	else{
		result=false;
	}

	return result;
}
class Inspector{
public:

	  void printNumber(){
		  Number obj(200);
		  cout<<"Read private data of class Number: "<<obj.val<<endl;
	  }

};
int main() {
//	int s=0;
//	cin>>s;
      Number n1(10);
      Number n2(20);
      if(n1>n2){
    	  cout<<"n1 is larger than n2"<<endl;
      }
      else{
    	  cout<<"n2 is larger than n1"<<endl;


      }
      cout<<"=============================="<<endl;

      Inspector i;
      i.printNumber();

      cout<<"================================="<<endl;

      ++n1;
      cout<<n1;
      //n1.display();
      cout<<"================================="<<endl;

      n1++;
      cout<<n1;
      cout<<"================================="<<endl;

      n1=n2;
      cout<<n1<<endl;




	return 0;
}
