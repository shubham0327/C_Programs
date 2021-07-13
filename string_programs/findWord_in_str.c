/**************
17. Write a C program to find first occurrence of 
a word in a given string.
***************/

#include<stdio.h>
#define MAX 50
int main()
{
	char str[MAX]= "Hello, World welcome c-programming";
    char word[]="or";
    int i=0, j=0, found=0;
    
    for(i = 0; str[i] != '\0'; i++){
        if(str[i] == word[0])
        {
            found=1;
            for(j=0; word[j]!='\0'; j++)
            {
                if(str[i+j]!=word[j]){
                    found=0;
                    break;
                }
            }
        }
        if(found == 1)
            break;
    }
    if(found==1)
        printf("\n'%s' is found at index %d\n",word,i);    
    else
        printf("\n'%s' is Not found\n",word);    
    return 0;
}