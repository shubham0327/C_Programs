/****
17. Write a C program to sort array using pointers.
****/
#include<stdio.h>
int main(){
    int arr[]={23,66,7,1,0,12,70};
    int *ptr=arr;
    int i,j,n,tmp;
    n=sizeof(arr)/sizeof(int);
    for(i=1;i<n;i++){
        for(j=0;j<n-i;j++){
            if(*(ptr+j)>*(ptr+j+1)){
                tmp=*(ptr+j);
                *(ptr+j)=*(ptr+j+1);
                *(ptr+j+1)=tmp;
            }
        }
    }
    printf("Sorted arrray =");
    for (i = 0; i < n; i++)
        printf("%d ",arr[i]);
    printf("\n");
    return 0;
}