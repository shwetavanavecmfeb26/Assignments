//============================================================================
// Name        : 3.cpp
// Author      : shwet
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


class TollBooth{
    int totalVehicles;
	float totalRevenue;



public:

	TollBooth(){
		totalVehicles=0;
		totalRevenue=0;
	}
	void reset(){
		totalVehicles=0;
		cout<<"reset totalvehicle is: "<<totalVehicles<<endl;

		totalRevenue=0;
		cout<<"reset totalRevenue is: "<<totalRevenue<<endl;
	}

	void vehiclePayingToll(int vehicleType, double tollAmount){



		totalVehicles++;//1 //2
		totalRevenue+=tollAmount;//200//500
	}

	int getTotalVehicles() {
		return totalVehicles;
	}

	double getTotalRevenue(){
		return totalRevenue;
	}

};



int menuList(){

	cout<<"1.Add a standard car and collect toll"<<endl;
	cout<<"2.Add a standard truck and collect toll"<<endl;
	cout<<"3.Add a standard bus and collect toll"<<endl;
	cout<<"4. Display total cars passed"<<endl;
	cout<<"5.Display total revenue collected"<<endl;
	cout<<"6.Reset booth statistics"<<endl;
	cout<<"7.Exit"<<endl;

	cout<<"Enter Your choice: "<<endl;
	int choice;
	cin>>choice;
	return choice;
}

int main() {
	TollBooth  t;

	int choice = menuList();


	float tollAmount;

	while(choice!=7){
		switch(choice){
		case 1:

			cout<<"Enter toll amount for vehicle Type: "<<endl;
			cin>>tollAmount;
			t.vehiclePayingToll(1 , tollAmount);
			break;
		case 2:

			cout<<"Enter toll amount for vehicle Type: "<<endl;
			cin>>tollAmount;
			t.vehiclePayingToll(2 , tollAmount);
			break;
		case 3:
			cout<<"Enter toll amount for vehicle Type: "<<endl;
			cin>>tollAmount;
			t.vehiclePayingToll(3 , tollAmount);
			break;
		case 4:
			cout<<"Total car passed:" <<t.getTotalVehicles()<<endl;;
			break;
		case 5:
			cout<<"Total revenue collected: "<<t.getTotalRevenue()<<endl;
			break;
		case 6:
			t.reset();
			break;

		default:
			cout<<"Enter Valid value"<<endl;
			break;
		}
		cout<<endl;
		choice =menuList();

	}
    cout<<"Exit the Program"<<endl;


	return 0;
}
