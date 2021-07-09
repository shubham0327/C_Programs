/*********
8. Write a C program to delete an element from an array at specified position.
*********/
#include<stdio.h>
int main(){
    int arr[]={2,55,32,11,66,86,1,5,8,42};
    int i,n=sizeof(arr)/sizeof(int);
    int pos=3;//position to be deleted
    for(i=pos;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=0;
    printf("array after insertion=");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\n");
    return 0;
}