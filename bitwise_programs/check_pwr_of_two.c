/**
19.  Write a C program to check if the given number is power of 2.
**/

#include<stdio.h>

int main(){
    int num;
    printf("Enter the number\n");
	scanf("%d",&num);
	if(num &&(!(num & (num-1))))
		printf("number is pwr of 2\n");
	else
		printf("number is not a pwr of 2\n");

    return 0;
}


