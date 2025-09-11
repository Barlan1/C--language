#include<bits/stdc++.h>
using namespace std;
bool ifSameStrings(string &str1, string &str2){
	int i=0;
	int n1= str1.length(); int n2= str2.length();
	if(n1!=n2){
		return false;
	}
	while(i<n1){
		if(str1[i]!=str2[i]){
		    return false;
		} 
		i++;
	   }
	   return true;
}
int main()
{
	string s1="Hello mr DJ";
	string s2="Hello mr DJ";
	if(ifSameStrings(s1,s2)) {
		cout<<"yes";
	}
	else 
	cout<<"no";
}
