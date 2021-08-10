/*****
5. Write a C program to copy one array to another using pointers.
*****/
#include<stdio.h>

int main(){
    int i=0,n,arr[]={10,20,30,40,50,60};
    n=sizeof(arr)/sizeof(int);
    int b[30];
    int *ptr1=NULL,*ptr2=NULL;
    ptr1=arr;
    ptr2=b;
    for(i=0;i<n;i++)
        *(ptr2+i)=*(ptr1+i);
    for(i=0;i<n;i++)
        printf("%d ",b[i]);

    return 0;
}

