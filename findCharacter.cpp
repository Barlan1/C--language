#include<bits/stdc++.h>
using namespace std;
int searchCharacter(string &str, char ch)
{  
   
    for(int i=0;i<str.length();i++){
    	if(str[i]==ch){
    		return i;
		}
	}	
	return -1;
}

int main()
{
	string str="Vikas is Kook";
	char ch='k';
	cout<<searchCharacter(str, ch);
	return 0;
}
