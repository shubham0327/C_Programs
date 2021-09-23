/*********
5. Write a C program to find reverse of any number using recursion.
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
int main()
{
	int num=12321;
	int rev;
	rev=reverse(num);
	printf("Reverse number = %d\n",rev);
	return 0;
	
}