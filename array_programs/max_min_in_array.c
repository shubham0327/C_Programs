/******
2. Write a C program to find maximum and 
minimum element in an array. - using recursion.
***********/
#include<stdio.h>
void max_min_array(int arr[],int i,int n,int res[],int res_size){
    if(n!=i){
        int tmp=arr[i];
        if(tmp>res[0]) res[0]=tmp;
        if(tmp<res[1]) res[1]=tmp;
        i++;
        max_min_array(arr,i,n,res,res_size);
        return;
    }
    else return;
}
int main(){
    int arr[]={23,66,11,7,76,43,55,99,32};
    int res[]={-(__INT32_MAX__),__INT32_MAX__};
    int n=sizeof(arr)/sizeof(int);
    int res_size=sizeof(res)/sizeof(int);
    max_min_array(arr,0,n,res,res_size);
    printf("max = %d\nmin = %d\n",res[0],res[1]);
    return 0;
}