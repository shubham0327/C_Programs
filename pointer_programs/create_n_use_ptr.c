/*****
1. Write a C program to create, initialize and use pointers.
*****/
#include<stdio.h>

int main(){
    int i=10,*ptr;	//create
    int *q=NULL;    	//create and initialize
    ptr=&i;     	//initialize

    *ptr=*ptr+2;
    
    printf("pointer value *ptr=%d\npointer address ptr = %p\nnull pointer q = %p\n",*ptr,ptr,q);
    return 0;
}
