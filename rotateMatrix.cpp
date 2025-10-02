#include<bits/stdc++.h>
using namespace std;


void rotate(vector<vector<int>>&mat){
	int n= mat.size();
	
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			swap(mat[j][i],  mat[i][j]);
		}
	}
	
 	for(int i=0; i<n;i++){
		int left=0; int right =n-1;
		while(left< right){
			swap(mat[i][left], mat[i][right]);
			   left++; right--;
		}
	}
}

int main(){

vector<vector<int>> mat={
   {1,2,3,4},
   {5,6,7,8},
   {9,10,11,12},
   {13,14,15,16}
};

int n= mat.size();

rotate(mat);

for(int i=0; i<n; i++){
	for(int j=0; j < n; j++){
		cout << mat[i][j]<<" ";
	}
	cout<<endl;
  }
  return 0;
}
