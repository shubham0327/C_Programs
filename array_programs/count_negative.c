/******
5. Write a C program to count total number of 
negative elements in an array.
***********/
#include<stdio.h>

int main(){
    int arr[]={23,66,-1,7,76,43,55,-99,32};
    
    int n=sizeof(arr)/sizeof(int),i;
    int count=0;
    for(i=0;i<n;i++){
        if(arr[i]<0)
            count++;
    }

    printf("total negative numbers = %d\n",count);
    return 0;
}