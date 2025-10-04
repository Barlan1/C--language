#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Car {
private:
    std::string brand;   // private member//use std:: for not (using namespace std) 
    int year;       // private member

public:
    // Constructor
    Car(std::string b, int y) {
        brand = b;
        year = y;
    }

    // Getter for brand
    std::string getBrand() {
        return brand;
    }
    
    int getYear(){
    	return year;
	}
	int setYear(int y){
		 year = y;
	}
	
	void showCar(string color){
		cout<< brand <<" - " <<year<< " - " <<color<<endl;
	}

};
int main(){
	Car myCar("Mahindra", 2024 );
	
	
	cout<<"Year: " <<myCar.getYear()<<endl;

    myCar.setYear(2025);
    	cout<<"Year: " <<myCar.getYear()<<endl;

	cout<<"Brand: " <<myCar.getBrand()<<endl;
	cout<<endl;
	
	myCar.showCar("black");
	// using pointers; myCar.getBrand  does not resolved address
	//to resolve the address
	
	//pointer to member function
	string (Car::*ptr) () = &myCar.getBrand;
	//syntax for pointer to member function
	cout<< (myCar.*ptr) () ;
	//call function via pointer
	return 0;
}
