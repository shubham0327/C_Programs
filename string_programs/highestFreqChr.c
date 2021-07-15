/**************
12. Write a C program to find highest frequency 
character in a string.
***************/

#include<stdio.h>
#define MAX_CHARS 255
int main()
{
	char str[]= "Hello, World welcome c-programming";
    int freq[MAX_CHARS]={0};
    int i=0, max=0, value;
    for(i = 0; str[i] != '\0'; i++){
        value=(int)str[i];
        freq[value]+=1;
    }
    for(i=0; i<MAX_CHARS; i++)
    {
        if(freq[i] > freq[max])
            max=i;
    }
    printf("Maximum occuring character is %c = %d times\n",max,freq[max]);
    
    return 0;
}