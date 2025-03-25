/**************
3. Write a C program to concatenate two strings.
***************/

#include<stdio.h>

int main()
{
    char src[20]= " world!!!";
    char dst[20]= "Hello,";
    int i=0,j=0;
    while(dst[j] != '\0')
        j++;
    for(i = 0; src[i] != '\0'; i++,j++){
        dst[j]=src[i];
    }
    dst[j] = '\0';
	printf("Concatenated string = %s\n",dst);
	return 0;
}
