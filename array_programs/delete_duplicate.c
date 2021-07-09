/*********
12. Write a C program to delete all duplicate 
elements from an array.
*********/
#include<stdio.h>
int main(){
    int arr[]={2,5,2,1,66,86,1,5,86,42,1,2};
    int i,j,k,n=sizeof(arr)/sizeof(int),count=0;
    for(i = 0; i < n; i++){
        for(j = i+1; j < n; ){
            if(arr[j] == arr[i]){
                for(k = j; k < n; k++){
                    arr[k] = arr[k+1];
                }
                n--;
            }else{
                j++;
            }
        }
    }
        
    printf("new array = ");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\n");
    return 0;
    
}