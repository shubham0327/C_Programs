/**************
2. Write a C program to copy one string 
to another string.
***************/

#include<stdio.h>

int main()
{
	char src[]= "Hello, World!!!";
    char dst[50];
    int i=0;
    for(i = 0; src[i] != '\0'; i++){
        dst[i]=src[i];
    }
    dst[i] = '\0';
	printf("Copied string = %s\n",dst);
	return 0;
}