/*********
6. Write a C program to check whether a number is palindrome or not using recursion.
*********/
#include <stdio.h>
#include <math.h>
int reverse(int num)
{
    int digit = 0;
    int n=num,res=1;
    while(n>1)
    {
        n=n/10;
        digit++;
    }
    while(digit>0){
        res*=10;
        digit--;
    }
    if(num == 0)
        return 0;
    
    return ((num%10 * res) + reverse(num/10));
}
int isPalindrome(int num)
{
    if(num == reverse(num))
        return 1;
    
    return 0;
}
int main()
{
	int num=121;
    if(isPalindrome(num) == 1)
        printf("%d is a palindrome number.\n", num);
    else
        printf("%d is Not a palindrome number.\n", num);
	
    return 0;
}