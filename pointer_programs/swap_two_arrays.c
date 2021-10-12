/*****
6. Write a C program to swap two arrays using pointers.
*****/
#include<stdio.h>

int main(){
    int i=0,n;
    int a[]={10,20,30,40,50,60};
    int b[]={53,31,990,33,55,23};
    n=sizeof(a)/sizeof(int);

    int *ptr1=NULL,*ptr2=NULL;
    ptr1=a;
    ptr2=b;
    for(i=0;i<n;i++){
        int temp=*(ptr1+i);
        *(ptr1+i)=*(ptr2+i);
        *(ptr2+i)=temp;
    }
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");
    for(i=0;i<n;i++)
        printf("%d ",b[i]);

    return 0;
}


