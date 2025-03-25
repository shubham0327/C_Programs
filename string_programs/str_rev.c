/**************
8. Write a C program to find reverse of a string.
***************/

#include<stdio.h>

int main()
{
    char str[20]= "Hello, World!!!";
    char tmp;
    int i=0,len=0;
    
    if (str[] == NULL) {
    printf("String is not present\n");
    return 1;
    }
    for(len = 0; str[len] != '\0'; len++);

    for(i = 0; i<len/2 && str[i] != '\0' ; i++)
    {
        tmp=str[i];
        str[i]=str[len-1-i];
        str[len-1-i]=tmp;
    }

    printf("Reversed string = %s\n",str);
    
    return 0;
}
