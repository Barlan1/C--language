#include<stdio.h>
int main()
{
	int arr[5]= {11,21,13,42,25};
	int *ptr;
	   ptr= &arr[5];
	
	printf("%d\n", *(ptr) );
	int *p = &arr[5];
	printf("%d\n", *(p) );
	return 0;
}
