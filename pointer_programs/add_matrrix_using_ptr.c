/*****
10. Write a C program to add two matrix using pointers.
******/
#include<stdio.h>
#define ROWS 3
#define COLUMNS 3
int main(){
    int arr1[ROWS][COLUMNS]={1,2,3,4,5,6,7,8,9};
    int arr2[ROWS][COLUMNS]={10,20,30,40,50,60,70,80,90};
    int res[ROWS][COLUMNS];
    int *ptr1=NULL,*ptr2=NULL,*ptr3=NULL;
    int i,j;
    ptr1=&arr1[0][0];
    ptr2=&arr2[0][0];
    ptr3=&res[0][0];
    for(i=0;i<ROWS;i++)
        for(j=0;j<COLUMNS;j++)
            *(ptr3+(i*COLUMNS)+j)=*(ptr1+(i*COLUMNS)+j)+*(ptr2+(i*COLUMNS)+j);
    for(i=0;i<ROWS;i++)
        for(j=0;j<COLUMNS;j++)
            printf("%d ",res[i][j]);
    printf("\n");
    return 0;
}
