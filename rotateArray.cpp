//rotate array
#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[]={3,5,1,7,9,3};
	int n= sizeof(a)/sizeof(a[0]);
	
	int d=2;int i=0;
	int temp[n]={0};
	while( i< n-d){
	    temp[i]= a[i+d];
     cout<<temp[i]<<",";
     i++;
	}
	i=0;
	while(i<d){
		temp[n-d+i]=a[i];
		cout<<temp[i]<<",";
		i++;
	}
	return 0;
}
