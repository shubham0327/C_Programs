/*****
2. Write a C program to add two numbers using pointers.
*****/
#include<stdio.h>

int main(){
    int arr[]={10,20};
    int *ptr=arr;  //create and initialize

    *ptr=*ptr+*(ptr+1);
    printf("addition= %d\n",*ptr);
    return 0;
}

