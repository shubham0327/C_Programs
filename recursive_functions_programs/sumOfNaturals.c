/*********
1. Write a C program to print all natural numbers 
between 1 to n using recursion.
*********/
#include<stdio.h>

int sum_of_naturals(int n){
    
    
    if(n==1){
        return 0;
    }
    else
    {
        return (n+sum_of_naturals(n-1));
    }
}
int main(){
    int n=5;
    int sum;
    sum=sum_of_naturals(n);
    printf("Sum of naturals between 1 to %d = %d\n",n,sum);
    return 0;
    
}