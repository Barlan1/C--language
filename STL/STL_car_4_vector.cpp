#include<iostream>
#include<string>
#include<vector>

class Car{
	private:
		std::string brand;
		int year;
	public:
	     Car(const std::string &b, int y ) :brand(b), year(y){}
		 
         std::string getBrand() const { return brand;};
         
		 int getYear() const { return year;};	
		 
		 void setYear(int y) {year=y;};
		
		 void showCar()	const {
		 	std::cout<< brand << " - " << year<< std::endl;
		 }	 	
		 
		 void setBrand(const std::string &b){
		 	brand=b;
		 }
		  
};

int main(){

   std::vector<Car> garage;
   
   garage.push_back(Car("Tata Ciara", 1999));
   garage.push_back(Car("Mahindra DI", 1981));
   garage.push_back(Car("Tata Sump", 1997));   
   
   std::cout<<"garage before:\n";
   
   for(Car c: garage){
   	c.showCar() ;
   }
   
   for(Car &c : garage){
   	 if(c.getBrand() == "Tata Ciara")
   	  {		 c.setYear(1334);}
   }
    std::cout<<"garage after:\n";
   
   for(const Car& c: garage){
   	c.showCar() ;
   }
   
   

}
