/*********
9. Write a C program to count frequency of each element 
in an array.
*********/
#include<stdio.h>
int main(){
    int arr[]={2,5,2,1,66,86,1,5,86,42,1,2};
    int i,j,n=sizeof(arr)/sizeof(int),count=0;
    int freq[20]={[0 ... 19]=-1};
    for(i=0;i<n;i++){
        count=1;
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                freq[j]=0;
            }
        }
        if(freq[i]!=0)
            freq[i]=count;
    }
    printf("frequency of all elements :\n");
    for(i=0;i<n;i++){
        if(freq[i]!=0)
            printf("%d occurs %d times\n",arr[i],freq[i]);
    }
    printf("\n");
    return 0;
    
}