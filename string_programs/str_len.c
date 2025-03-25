/**************
1. Write a C program to find length of a string.
***************/

#include<stdio.h>
#include<string.h>

int main()
{
char str[]= "Hello, World!!!";
int i=0, count=0;
//using library function
int len = strlen(str);
printf("string lenth is = %u\n", len);
	//using for loop
    for(i = 0; str[i] != '\0'; i++){
        count++;
    }
	printf("string length =%u\n",count);
	return 0;
}
