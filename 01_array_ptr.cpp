#include<stdio.h>

int main()
{
	int array[]= 
	{12,23,13, 54,77,55,31,12 };
	
	int *ptr = array;
	
	ptr++;
	

    printf("%d\n", *array);
	printf("%d\n", *(array+6 )+2);
    printf("%d\n", array[6] +2 );



return 0;
}
