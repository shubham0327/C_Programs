/*****
8. Write a C program to search an element in array using pointers
*****/
#include<stdio.h>

int main(){
    int i=0,n=0,flag=0,arr[]={10,20,30,40,50,60,70,80,90};
    int ele;
    int *ptr=NULL;
    printf("Enter number to search in array\n");
    scanf("%d",&ele);
    n=sizeof(arr)/sizeof(int);
    ptr=arr;
    for(i=0;i<n;i++)
        if(ele==*(ptr+i)){
            flag=1;
            break;
        }
        if(flag)
            printf("element found at %d position\n",i);
        else
            printf("Element is not found\n");

    return 0;
}




