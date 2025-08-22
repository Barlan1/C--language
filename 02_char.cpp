#include<stdio.h>
 
 int main()
{
	char str[20]= "GeekaIndia";
	char *ptr = str;
	 
	  str[3]='X';
	while(*ptr !='\0'){
		printf("%c\n", *ptr);
		printf("%d\n", ptr);
		ptr++;
	}
	
	return 0;
}
