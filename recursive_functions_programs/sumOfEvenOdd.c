/*********
4. Write a C program to find sum of all even or odd numbers 
in given range using recursion.
*********/
#include<stdio.h>

int sum_of_even_odd(int cur,int limit){
    if(cur > limit)
        return 0;
    
    //printf("%d ",cur);
    return (cur+sum_of_even_odd(cur+2,limit));
}
int main(){
    int lowerLimit=1,upperLimit=10,sum=0;
    if(lowerLimit%2==0)
    {
        sum=sum_of_even_odd(lowerLimit,upperLimit);
        printf("\nSum of Even numbers : %d\n",sum);
        sum=sum_of_even_odd(lowerLimit+1,upperLimit);
        printf("\nsum of Odd numbers : %d\n",sum);
    }
   if(lowerLimit%2!=0)
    {
        sum=sum_of_even_odd(lowerLimit+1,upperLimit);
        printf("\nSum of Even numbers : %d\n",sum);
        sum=sum_of_even_odd(lowerLimit,upperLimit);
        printf("\nsum of Odd numbers : %d\n",sum);
    }
    printf("\n");
    return 0;
    
}