/**************
11. Write a C program to count occurrences of a 
character in given string.
***************/

#include<stdio.h>

int main()
{
	char str[]= "Hello, World!!!";
    char ch='o';
    int i=0, count=0;
    for(i = 0; str[i] != '\0'; i++){
        if(str[i] == ch)
            count++;
    }
    
    printf("character found in the string %d times\n",count);
    
    return 0;
}