#include<iostream>
using namespace std;

string car(string brand, int year){
	return brand +"-"+ to_string(year);//use to_string to concate strig and int
	
 	cout<<endl;
}

string car2(string brand,string color){
	return brand+color;
}

int main(){
	 cout<<car("tesla", 2023);
	 cout<<endl;
	 
	 cout<<car2("Mahindra", "black");
	return 0;
}
