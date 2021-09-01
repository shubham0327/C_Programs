/*****
4. Write a C program to input and print array elements using pointer.
*****/
#include<stdio.h>

int main(){
    int i=0,n=0,arr[25];
    int *ptr=NULL;
    printf("Enter number of elements in array\n");
    scanf("%d",&n);
    printf("Enter array elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    ptr=arr;
    for(i=0;i<n;i++)
        printf("%d ",*(ptr+i));

    return 0;
}



