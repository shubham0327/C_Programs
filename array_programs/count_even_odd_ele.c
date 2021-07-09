/******
4. Write a C program to count total number of even 
and odd elements in an array.
***********/
#include<stdio.h>

int main(){
    int arr[]={23,66,11,7,76,43,55,99,32};
    
    int n=sizeof(arr)/sizeof(int),i;
    int c_even=0,c_odd=0;
    for(i=0;i<n;i++){
        if(arr[i]%2==0)
            c_even++;
        else
            c_odd++;
    }

    printf("total even numbers = %d\ntotal odd numbers=%d\n",c_even,c_odd);
    return 0;
}