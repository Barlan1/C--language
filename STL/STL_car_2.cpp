//improved version over STL_car_1.cpp
#include<iostream>
#include<string>
#include<vector>

class Car{
	private:
		std::string brand;
		int year;
	public:
		Car(const std::string brand, int year) : brand(b), year(y) {}
	
	     std::string getBrand() const {return brand;}
	     
	     int getYear() const {return year};
  };
	   

