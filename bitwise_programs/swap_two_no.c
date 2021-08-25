/**15. Write a C program to swap two numbers using bitwise operator.**/

#include<stdio.h>

int main(){
    int a,b;
    printf("Enter the two numbers\n");
	scanf("%d %d",&a,&b);

    printf("Before swapping\na=%d\tb=%d\n",a,b);

    b=a^b;
    a=a^b;
    b=a^b;

    printf("After swapping\na=%d\tb=%d\n",a,b);

    return 0;
}






