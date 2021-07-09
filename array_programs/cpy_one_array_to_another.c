/******
6. Write a C program to copy all elements from an array 
to another array.
***********/
#include<stdio.h>

int main(){
    int arr[]={23,66,-1,7,76,43,55,-99,32};
    int b[30];    
    int n=sizeof(arr)/sizeof(int),i;
    for(i=0;i<n;i++){
        b[i]=arr[i];
    }
    printf("Copied array =");
    for(i=0;i<n;i++)
        printf("%d ",b[i]);
    printf("\n");
    return 0;
}