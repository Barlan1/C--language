#include<stdio.h>
int main()
{
	int arr[5]= {11,12,23,34,45};
	int (*ptr)= &arr[0];// pointed at 0th location of arr
	
	for(int i =0; i< 5;i++ ){ 
	   printf("%d ,", *(ptr+i) ); //don't do (*ptr)[i];
	}
	//another way
	printf("\n");
	int arr1[5]= {2,4,6,12,87};
	int (*p1)[5];
	  p1 = &arr1; //not pointed at 0th location p=&a[0]
	  
	 for(int i=0;i<5; i++){
	 	printf(",%d ", (*p1)[i] );
	 } 
	
	
	return 0;
}
