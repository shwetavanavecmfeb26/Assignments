//============================================================================
// Name        : 2.cpp
// Author      : shwet
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstring>

using namespace std;


class Bank{
	int AccountNumber;
	string accountHolderName;
	double balance=0;

public:
	void setAccountNumber(int accountNumber) {
		AccountNumber = accountNumber;
	}
	int getAccountNumber() const {
		return AccountNumber;
	}


	void setAccountHolderName(const string &accountHolderName) {
		this->accountHolderName = accountHolderName;
	}
	const string& getAccountHolderName() const {
		return accountHolderName;
	}

	void setBalance(double &balance) {
		this->balance = balance;
	}
	double getBalance() const {
		return balance;
	}

	void depositMoney(double &b){
		if(b!=0 && b>0){
		  balance += b;
		  setBalance(balance);
		}
		else{
			cout<<"Deposit Amount should not zero ";
		}
	}
	void withdrawMoney(double &c){
		if(balance>=c){
		    balance -= c;
		    setBalance(balance);
		}
		else{
			cout<<"Not Sufficient Balance"<<endl;
		}


	}



    void displayAccountDetails(){
    	cout<<"Account Number:  "<<getAccountNumber()<<endl;
    	cout<<"Account Holder Name:  "<<getAccountHolderName()<<endl;
    	cout<<"Balance :  "<<getBalance()<<endl;


    }

};

int menuList(){
	cout<<"1.Deposit money into an existing account"<<endl;
	cout<<"2.Withdraw money into an existing account"<<endl;
	cout<<"3.Display the Account Details"<<endl;
	cout<<"4.Exit the program"<<endl;
	cout<<"Enter the Choice: "<<endl;
	int choice;
	cin>>choice;
	return choice;
}



int main() {
	Bank a;
	a.setAccountNumber(202020);
	a.setAccountHolderName("Radhe");


	double depositm;
	double withdrawm;



	int choice=menuList();

	while(choice!=4){
		switch(choice){
		case 1:
			cout<<"Amount of deposit money"<<endl;
			cin>>depositm;
			a.depositMoney(depositm);
			break;
		case 2:
			cout<<"Amount of withdraw money"<<endl;
			cin>>withdrawm;
			a.withdrawMoney(withdrawm);

			break;
		case 3:
			a.displayAccountDetails();
			break;

		default:
			break;
		}
		cout<<endl;
		choice=menuList();
	}

	cout<<"Exit the program "<<endl;

	return 0;
}
