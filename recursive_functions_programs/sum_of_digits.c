/*********
7. Write a C program to find sum of digits of a given number using recursion.
*********/
#include <stdio.h>

int sum_of_digits(int num)
{
    if (num != 0)
    {
        return (num % 10 + sum_of_digits(num / 10));
    }
    else
    {
       return 0;
    }
}
int main(int argc, char *argv[])
{
	int num=12345,result;
	result = sum_of_digits(num);
    printf("Sum of digits in %d is %d\n", num, result);
    return 0;
	
}