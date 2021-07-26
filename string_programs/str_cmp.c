/**************
4. Write a C program to compare two strings. 
***************/

#include<stdio.h>

int main()
{
	char str1[20]= "Hello ";
    char str2[20]= "Hello";
    int i=0,res=0;
 
    for(i = 0; str1[i] != '\0' && str1[i] == str2[i] ; i++);

    res=(int)(str1[i]-str2[i]);
    if(res > 0)
    	printf("str1 is greater than str2\n");
    else if(res < 0)
    	printf("str1 is lesser than str2\n");
    else 
        printf("str1 is equal to str2\n");
    
    return 0;
}