/**************
5. Write a C program to find total number of alphabets, 
digits or special character in a string.
***************/

#include<stdio.h>

int main()
{
	char str[]= "He1llo, 4World!!!";
    int i=0, alp=0, digit=0, splCh=0;
    for(i = 0; str[i] != '\0'; i++){
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            alp++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            digit++;
        }
        else
        {
            splCh++;
        }
    }
	printf("Number of Alphabets = %d\n",alp);
	printf("Number of Digits = %d\n",digit);   
    printf("Number of Special Characters = %d\n",splCh);
	return 0;
}