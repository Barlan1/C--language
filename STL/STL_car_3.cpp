#include<iostream>

class Car{
	private:
		int year;
	public:
	    Car(int y): year(y) {}
		
		int getYear() const   {return year ;}	
		
//Getter functions that just return values should always be const.
//Setter functions or functions that modify the object should not be const.

		void setYear(int y) {year=y;}
};

int main(){
	


	 Car myCar(2023);//const Car myCar(2023); ? This object cannot be modified.
	std::cout<<myCar.getYear() <<std::endl;
	
	myCar.setYear(2121);//setYear tries to modify the object, which is not allowed on const objects.

	std::cout<<myCar.getYear();
}
