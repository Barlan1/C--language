//knapsack
#include<bits/stdc++.h>
using namespace std;
int knap(int W, vector<int>& wt, vector<int>& val , int n){
   if(W == 0 || n == 0){
   	   return 0;//return 0 if either of wight of val becomes null
   }
   if(wt[n-1] > W){
   	return knap(W, wt, val, n-1);// if weight of a item is more than capacity move to next element and decrement size;
   }
   
   int include= val[n-1]+ knap(W - wt[n-1], wt, val, n-1);//include the val and decrement the needed waight
   
   int exclude= knap( W, wt, val, n-1); // if excluded than move to next item and decrease size
   
   return max(include, exclude); // take max of either
}


int main(){
	int W=50;
	vector<int>wt= {10, 20, 30};
	
	vector<int>val= {60, 100, 120};
	
	int n= val.size();
	cout<<knap(W,wt,val,n);
	return 0;
}
