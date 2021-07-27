/**************
1. Write a C program to find length of a string.
***************/

#include<stdio.h>

int main()
{
	char str[]= "Hello, World!!!";
    int i=0, count=0;
    for(i = 0; str[i] != '\0'; i++){
        count++;
    }
	printf("string length =%u\n",count);
	return 0;
}