/*********
8. Write a C program to find factorial of any number using recursion.
*********/
#include <stdio.h>

unsigned long long int fact(int num)
{
    if (num == 0 || num==1)
    {
        return 1;
    }
    else
    {
       return (num*fact(num-1));
    }
}
int main(int argc, char *argv[])
{
	int num=3;
	unsigned long long int res;
	res= fact(num);
    printf("Factorial of %d is %lld\n", num, res);
    return 0;
}