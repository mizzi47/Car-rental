#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;

class Car {
	public:
		string name;
		int price1;
		int price2;
		int price3;
		int price4;
		int getPrice1() {
			return price1;
		}
		int getPrice2() {
			return price2;
		}
		int getPrice3() {
			return price3;
		}
		int getPrice4() {
			return price4;
		}
};

int rentalDisplay() {	//display for rental process
	Car carObj[4];
	carObj[0].name = "Axia";
	carObj[0].price1 = 12;
	carObj[0].price2 = 80;
	carObj[0].price3 = 120;
	carObj[0].price4 = 600;

	carObj[1].name = "Bezza";
	carObj[1].price1 = 12;
	carObj[1].price2 = 80;
	carObj[1].price3 = 120;
	carObj[1].price4 = 600;

	carObj[2].name = "Myvi";
	carObj[2].price1 = 15;
	carObj[2].price2 = 90;
	carObj[2].price3 = 130;
	carObj[2].price4 = 630;

	carObj[3].name = "Axia";
	carObj[3].price1 = 20;
	carObj[3].price2 = 100;
	carObj[3].price3 = 140;
	carObj[3].price4 = 700;
	
	//loop array cars
	for(int i=0; i < 4; i++) {
		cout<<i+1;
		cout<<") Car Name: "+carObj[i].name<<endl;
	}

	//rental type condition
	while(true) {
		string rent_type;
		int selectedCar;
		cout << "Rent a single car or multiple? (S/M)";
		cin>>rent_type;

		if (rent_type =="S" || rent_type =="s") {
			while(true) {
				cout<<"Select which car (by number): ";
				cin>>selectedCar;
				int indexOfSelectedCar = selectedCar-1;
				if(indexOfSelectedCar<4) {
					cout<<"1 hour  : RM";
					cout<<carObj[indexOfSelectedCar].price1<<endl;
					cout<<"Half day: RM";
					cout<<carObj[indexOfSelectedCar].price2<<endl;
					cout<<"Full day: RM";
					cout<<carObj[indexOfSelectedCar].price3<<endl;
					cout<<"One week: RM";
					cout<<carObj[indexOfSelectedCar].price4<<endl<<endl;
				} else {
					cout<<"Wrong Input!"<<endl;
				}
			}
		} else if (rent_type =="M" || rent_type =="m") {
			cout<<"Select which car (by number): ";
			cin>>selectedCar;
		} else {
			cout<<"Wrong Input!"<<endl;
		}
	}
}

void carDisplay() {	//display for available cars
	int index = 0;

	cout<<"Axia----------------------------"<<endl;
	cout<<"Bezza----------------------------"<<endl;
	cout<<"Myvi----------------------------"<<endl;
	cout<<"Alza----------------------------"<<endl;
	cout<<endl;

}

int aboutUs() { //to contacts and get location
	cout<<"----------------------------------"<<endl;
	cout<<"Company Name: "<<endl;
	cout<<"Location: "<<endl;
	cout<<"Email: "<<endl;
	cout<<"Contact: "<<endl;
	cout<<"----------------------------------"<<endl;
	return 0;
}

void mainmenu() {
	//this is main menu dashboard
	cout<<"----------------------------------"<<endl;
	cout<<"***WELCOME TO CAR RENTAL SYSTEM***"<<endl;
	cout<<"----------------------------------"<<endl;
	cout<<"----------------------------------"<<endl;
	cout<<"Please select option below: ------"<<endl;
	cout<<"1. Rent car ----------------------"<<endl;
	cout<<"2. View available cars -----------"<<endl;
	cout<<"3. About us ----------------------"<<endl;
	cout<<"----------------------------------"<<endl<<endl;

	while(true) {
		string option;
		cout<<"Your option (by number): ";
		cin>>option;
		if(option == "1") {
			rentalDisplay();
		} else if(option == "2") {
			carDisplay();
		} else if(option == "3") {
			aboutUs();
		}
	}
}


int main() {
	mainmenu();
}


