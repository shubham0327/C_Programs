/*********
2. Write a C program to print all even or odd numbers 
in given range using recursion.
*********/
#include<stdio.h>

void print_even_odd(int cur,int limit){
    if(cur > limit)
        return;
    
    printf("%d ",cur);
    print_even_odd(cur+2,limit);
}
int main(){
    int lowerLimit=1,upperLimit=10;
    if(lowerLimit%2==0)
    {
        printf("\nEven numbers are :\n");
        print_even_odd(lowerLimit,upperLimit);
        printf("\nOdd numbers are :\n");
        print_even_odd(lowerLimit+1,upperLimit);
    }
   if(lowerLimit%2!=0)
    {
        printf("\nEven numbers are :\n");
        print_even_odd(lowerLimit+1,upperLimit);
        printf("\nOdd numbers are :\n");
        print_even_odd(lowerLimit,upperLimit);
    }
    printf("\n");
    return 0;
    
}