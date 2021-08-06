/*****
9. Write a C program to access two dimensional array using pointers.
******/
#include<stdio.h>
#define ROWS 3
#define COLUMNS 4
int main(){
    int arr[ROWS][COLUMNS]={1,2,3,4,5,6,7,8,9,10,11,12};
    int *ptr=NULL;
    int i,j;
    ptr=&arr[0][0];
    for(i=0;i<ROWS;i++)
        for(j=0;j<COLUMNS;j++)
            printf("%d ",*(ptr+(i*COLUMNS)+j));
    printf("\n"); 
    return 0;
}
