/*********
1. Write a C program to print all natural numbers 
between 1 to n using recursion.
*********/
#include<stdio.h>

void print_naturals(int n){
    static int i=2;
    
    if(n==i){
        printf("\n");
        return;
    }
    else
    {
        printf("%d ",i);
        i++;
        print_naturals(n);
    }
}
int main(){
    int n=100;
    print_naturals(n);
    return 0;
    
}