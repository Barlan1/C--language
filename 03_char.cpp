#include<stdio.h>
int main()
{
	char array[]= "Hallo";
	
	//print character at 0th position with %c; 
	printf("%c\n", array[0]);
	
	//print ASCII value at 1st position with %d;
	printf("%d\n", array[1]);
	
	char *ptr = &array[0];
	return 0;
}

