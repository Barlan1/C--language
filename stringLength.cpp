#include<bits/stdc++.h>
using namespace std;
int length(string str)
{	
	int count=0,i=0;
	while(str[i]!='\n'){
		i++;
		if(str[i]==' ' ){
			continue;
        }
		count++;
	}
	return count;
}
int main()
{
	string str="vikas Meena Yogita meena\n";
	cout<<length(str);
	return 0;
}
