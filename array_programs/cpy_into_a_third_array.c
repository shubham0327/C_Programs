/*********
13. Write a C program to merge two arrays to third array.
*********/
#include<stdio.h>
int main(){
    int a[]={2,5,66,32,11,7,56,98};
    int b[]={1,6,73,54,9};
    int c[50]={0};
    int i,j,k,m,n,count=0;
    m=sizeof(a)/sizeof(int);
    n=sizeof(b)/sizeof(int);
    for(i = 0; i < m; i++){
        c[i]=a[i];
    }
    for(i = m; i < (m+n); i++){
        c[i]=b[i-m];
    }
        
    printf("new array = ");
    for(i = 0; i < (m+n); i++)
        printf("%d ",c[i]);
    printf("\n");
    return 0;
    
}