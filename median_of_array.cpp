#include<iostream>
using namespace std;
int main(){
	int a[]= {6,4,2,10,9,7,1,3,22,12,14};
	
	int n= sizeof(a)/sizeof(a[0]);
	
	for(int i=0; i<n-1; i++){
		int min_idx =i;
		for(int j=i+1; j<n; j++){
			 if( a[j] < a[min_idx] )
			     min_idx=j;
		}
		swap(a[i], a[min_idx]);
	}
	
	for(int i=0; i<n; i++)
	  cout<<a[i]<<" ";
	  
	cout<<endl;  
	
	if(n % 2 == 0){	
    cout<<( a[n/2] + a[(n/2) -1] ) / 2; 
}
    else{
    	cout<< a[n/2];
	}

 return 0;
	
	
}
