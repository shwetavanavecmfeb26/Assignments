//============================================================================
// Name        : 3.cpp
// Author      : shwet
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Matrix{
  int row;
  int column;
  int **data;
public:
  Matrix(int row, int column):row(row),column(column){
	  data=new int*[row];
	  for(int i=0;i<row;i++){
		  data[i]=new int[column];
	  }
  }

   Matrix& operator+(Matrix &other){
	   for(int i=0;i<other.row;i++){
	   		for(int j=0;j<other.column;j++){
	   			this->data[i][j]+=other.data[i][j];
	   		}

	   	}
	   return *this;
   }

   bool operator==(Matrix &other){
	   bool result=false;
   	   for(int i=0;i<other.row;i++){
   	   		for(int j=0;j<other.column;j++){

   	   			if(this->data[i][j]==other.data[i][j]){
   	   				result=true;
   	   			}
   	   			else{
   	   				result=false;
   	   				break;
   	   			}
   	   		}

   	   	}
   	   return result;
      }

    friend istream& operator>>(istream &in, Matrix &obj);
    friend ostream& operator<<(ostream &out, Matrix &obj);
    ~Matrix(){
    	for(int i=0;i<row;i++){
    	     delete data[i];
        }
    	delete[] data;
    	cout<<"Memory deleted successfully"<<endl;
    }
};

istream& operator>>(istream &in, Matrix &obj){
	cout<<"Enter Values: "<<endl;
	for(int i=0;i<obj.row;i++){
		for(int j=0;j<obj.column;j++){
			cin>>obj.data[i][j];
		}

	}
	return in;
}
ostream& operator<<(ostream &out, Matrix &obj){
	cout<<"Display Matrix: "<<endl;
	for(int i=0;i<obj.row;i++){
		for(int j=0;j<obj.column;j++){
			cout<<obj.data[i][j]<<" ";
		}
		cout<<endl;

	}
	return out;
}

int main() {
	int r;
	int c;
	cin>>r;
	cin>>c;
	Matrix m1(r,c);
	Matrix m2(r,c);

	cin>>m1;//operator>>(cin, m1)
    cout<<m1;
    cin>>m2;
    cout<<m2;



    if(m1==m2){
    	cout<<"Matrix are eqaul"<<endl;
    }
    else{
    	cout<<"Matrix are not eqaul"<<endl;
    }

    Matrix m3=m1+m2;//m1.operator+(m2);
        cout<<m3;


	cout<<"Progrsm endl;"<<endl;
	return 0;
}
