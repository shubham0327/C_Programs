/*********
7. Write a C program to insert an element in an array.
*********/
#include<stdio.h>
int main(){
    int arr[20]={2,55,32,11,66,86,1,5,8,42};
    int i,n=sizeof(arr)/sizeof(int);
    int pos=3;//position to be inserted
    int ele=23;
    for(i=n-1;i>pos && i;i--){
        arr[i]=arr[i-1];
    }
    arr[pos]=ele;
    printf("array after insertion=");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\n");
    return 0;
}