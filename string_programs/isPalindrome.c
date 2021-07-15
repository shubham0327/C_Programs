/**************
9. Write a C program to check whether 
a string is palindrome or not.
***************/

#include<stdio.h>

int main()
{
	char str1[20]= "madam";
    char str2[20];
    char tmp;
    int i=0, len=0, res=0;
    for(len = 0; str1[len] != '\0'; len++)   //find length of str1
        str2[len]=str1[len];    // copy str1 to str2
    str2[len]='\0'; 

    for(i = 0; i<len/2 && str2[i] != '\0' ; i++)
    {
        tmp=str2[i];
        str2[i]=str2[len-1-i];
        str2[len-1-i]=tmp;
    }   //find reverse of str2
    for(i = 0; str1[i] != '\0' && str1[i] == str2[i] ; i++);//compare str1 and str2

    res=(int)(str1[i]-str2[i]);
    if(res == 0)   
        printf("String = %s is Palindrome\n",str1);
    else
        printf("String = %s is Not a Palindrome\n",str1);
        
    return 0;
}