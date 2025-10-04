#include<iostream>
#include<string>
#include<vector>

class Car{
	private:
		std::string brand;
		int year;
	public:
	    Car(const std::string& b, int y) { brand= b;year=y;}	
	    std::string getBrand(){
	    	return brand;
		}
		int getYear(){
			return year;
		}
};
int main(){
	Car myCar("Mahindra", 2023);
	
	   std::cout<< myCar.getYear();
	   std::cout<< myCar.getBrand();
}
