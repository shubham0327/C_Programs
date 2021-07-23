/**************
10. Write a C program to find first occurrence 
of a character in a given string.
***************/

#include<stdio.h>

int main()
{
	char str[]= "Hello, World!!!";
    char ch='o';
    int i=0, count=0;
    for(i = 0; str[i] != '\0'; i++){
        if(str[i] == ch)
            break;
    }
    if(ch == '\0' || str[i] != '\0')
    	printf("character found at %d position of string\n",i);
    else
        printf("character Not found in the string\n");
    
    return 0;
}