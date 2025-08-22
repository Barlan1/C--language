#include<stdio.h>
int main()
{
	int a[5]= {2,4,6,12,87};
	int (*p)[5];
	  p = &a;
	  
	 for(int i=0;i<5; i++){
	 	printf("%d\n", (*p)[i] );
	 } 
	
	
	return 0;
}
