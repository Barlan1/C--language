#include<stdio.h>
int main(){
	//char arr[3][10] = {"Hello","Vikas","Barlan","Atru"};
		//    printf("%c\n", arr[1][0]);
	//for (int i=0; i<3;i++)
	  //  printf("%s\n", arr[i]);
	    char* arr[4]={"Hello","Vikas","Barlan","Atru"};
	    
	    int n= sizeof(arr)/sizeof(arr[0]);
	    printf("%s\n", *(3+arr)+2 );//ru of Atru
	        //      //*(arr+2) -> Barlan
	         //     //*(arr+1)+2 -> kas of vikas
	    
	    for(int i=0;i<n;i++)
	      printf("%s", arr[i]);

    return 0;

}
