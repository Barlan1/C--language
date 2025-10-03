#include<iostream>
using namespace std;
int main(){
	int a[]= {6,4,2,10,9,7,3,1};
	
	int n= sizeof(a)/sizeof(a[0]);
	
	for(int i=0; i<n-1; i++){
		int min_idx =i;
		for(int j=i+1; j<n; j++){
			 if( a[j] < a[min_idx] )
			     min_idx=j;
		}
	     	int temp = a[min_idx];
	      a[min_idx] = a[i];
		        a[i] = temp;
	}
	
	for( int ele=0;ele<n ; ele++ )
	 cout<<a[ele]<<" ";
	
	return 0;
}
