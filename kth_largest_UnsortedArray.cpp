#include<bits/stdc++.h>
using namespace std;

int partition(vector<int>&a, int left , int right){
        int pivot= a[right];
        int i=left;
        for(int j=left; j < right; j++ ){
            if(a[j] <= pivot){
                swap(a[i] , a[j]);
                i++;
            }
        }
        swap(a[i], a[right]);
        return i;
    }

    int quickselect(vector<int>&a, int left, int right, int kth_smallest){
        if(left==right) 
          return a[left];

        int randIndex= left + rand() % (right-left + 1);
         swap( a[randIndex], a[right]);
         
        int pivotIndex= partition(a, left, right);
        
         if(pivotIndex == kth_smallest)
           return a[pivotIndex];

         else if(pivotIndex < kth_smallest)
                return  quickselect(a, pivotIndex + 1, right, kth_smallest);

         else
            return quickselect(a, left,  pivotIndex -1 ,  kth_smallest);          

    }

    int findKthLargest(vector<int>& a, int k) {
        int n= a.size();
        int target= n-k;
        return quickselect(a, 0, n-1, target);
    }

int main(){
    vector<int> a= {12,3,4,7,19};
	int k=2;
	cout << findKthLargest(a,k);
	return 0;	
}































