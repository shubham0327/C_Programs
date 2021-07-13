/**************
7. Write a C program to count total number of words in a string.
***************/

#include<stdio.h>

int main()
{
	char str[]= "Hello world";
    int i=0, count=0;
    char prechr='\0';
    while(1)
    {
        if(str[i]==' ' || str[i]=='\n' || str[i]=='\t' || str[i]=='\0')
        {
            if(prechr!=' ' && prechr!='\n' && prechr!='\t' && prechr!='\0')
            {
                count++;
            }
        }
        prechr=str[i];
        if(str[i]=='\0')
            break;
        else
            i++;
    }
	printf("Number of Words = %d\n",count);
    return 0;
}