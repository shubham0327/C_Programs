/**16. Write a C program to check whether a number is
even or odd using bitwise operator.**/

#include<stdio.h>

int main(){
    int num;
    printf("Enter the number\n");
	scanf("%d",&num);

	if(num&1)
        printf("Number is Odd\n");
    else
        printf("Number is Even\n");

    return 0;
}

