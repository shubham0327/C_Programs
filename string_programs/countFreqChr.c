/**************
13. Write a C program to count frequency 
of each character in a string.
***************/

#include<stdio.h>
#define MAX_CHARS 255
int main()
{
	char str[]= "Hello, World welcome c-programming";
    int freq[MAX_CHARS]={0};
    int i=0, value;
    for(i = 0; str[i] != '\0'; i++){
        value=(int)str[i];
        freq[value]+=1;
    }
    for(i=0; i<MAX_CHARS; i++)
    {   
        if(freq[i]!=0)
            printf("Frequency of Character %c = %d\n",i,freq[i]);
    }
    
    return 0;
}