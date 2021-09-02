/*****
7. Write a C program to reverse an array using pointers.
*****/
#include<stdio.h>

int main(){
    int i=0,n;
    int arr[]={10,20,30,40,50,60};
    n=sizeof(arr)/sizeof(int);

    int *ptr=NULL;
    ptr=arr;
    for(i=0;i<n/2;i++){
        int temp=*(ptr+i);
        *(ptr+i)=*(ptr+n-1-i);
        *(ptr+n-1-i)=temp;
    }
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);


    return 0;
}



