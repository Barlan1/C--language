#include <stdio.h>

int main() {
    
    char str[] = "GeeVikas";
    
    // Access first character
    // of string
    str[2] ='p';
	    printf("%c\n", str[1]);
	    printf("%s\n", str);
	str[4]='\0';    
		    printf("%c\n", str[5]);

    return 0;
}
