/**********
 * 1. Write a C program to find sum of all array elements.
 *  - using recursion.
 * **********/
#include<stdio.h>
int sum_of_elements(int arr[],int i,int n){
    int sum=0;
    int tmp;
    if(n!=i){
        tmp=arr[i];
        i++;
        sum=sum_of_elements(arr,i,n);
        return sum+tmp;
    }
    else return sum;
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    int total=sum_of_elements(arr,0,n);
    printf("sum of all elements=%d\n",total);
    return 0;
}