#include<iostream>
using namespace std;
int main(){
	int a[]= {6,4,2,10,9,7,3,1};
	
	int n= sizeof(a)/sizeof(a[0]);
	
	for(int i=1; i<n; i++){
  
    int j=i-1;
    
    int key =a[i]; 
	
	while( j >= 0 && a[j] > key ){
		 
		a[j+1] = a[j];
		
		j--;
	}
	a[j+1] = key;
	      	
}
	
	
	
	for( int ele=0;ele<n ; ele++ )
	 cout<<a[ele]<<" ";
	
	return 0;
}
