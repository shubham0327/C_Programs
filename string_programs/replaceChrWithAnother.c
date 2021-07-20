/**************
16. Write a C program to replace all occurrences of a 
character with another in a string.
***************/

#include<stdio.h>
#define MAX 50
int main()
{
	char str[MAX]= "Hello, World welcome c-programming";
    char ch='e';
    char replacing_ch='a';
    int i=0;
    
    for(i = 0; str[i] != '\0'; i++){
        if(str[i] == ch)
        {
            str[i]=replacing_ch;
        }
    }

    printf("String after replacing '%c' Character = %s\n",ch,str);    
    return 0;
}