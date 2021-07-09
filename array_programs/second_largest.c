/******
3. Write a C program to find second largest element in an array.
***********/
#include<stdio.h>

int main(){
    int arr[]={23,66,11,7,76,43,55,99,32};
    
    int n=sizeof(arr)/sizeof(int),i;
    int largest,second;
    largest=second= -__INT32_MAX__;
    for(i=0;i<n;i++)
        if(arr[i]>largest)
            largest=arr[i];
    for(i=0;i<n;i++){
        if(arr[i]!=largest)
            if(arr[i]>second)
                second=arr[i];
    }

    printf("Second largest = %d\n",second);
    return 0;
}