#include<bits/stdc++.h>
using namespace std;
int partition(vector<int>&a, int left, int right){
	int pivot= a[right];
	int i= left;
	for(int j=left; j< right; j++){
		if(a[j] < pivot){
			swap(a[i],a[j]);
			i++;
		}
	}
	swap(a[i] ,a[right]);
	return i;
}
int quickselect(vector<int>&a, int left, int right, int k_smallest){
	if(left==right) return a[left];
	int pivotIndex= partition(a,left,right);
	if(pivotIndex==k_smallest)
	   return a[pivotIndex];
	else if(pivotIndex < k_smallest)
	       quickselect(a,  pivotIndex+1, right, k_smallest);
	else
	       quickselect(a, left, pivotIndex-1, k_smallest);  		    
}

int kth_smallest(vector<int>&a, int k){
	int n= a.size();
    return quickselect(a, 0, n-1, k-1);
 }

int main(){
	vector<int> a= {77,11,12,45,3,2,4,10,34,22,9};
	int k=3;
	cout<<kth_smallest(a,k);
    return 0;
}

