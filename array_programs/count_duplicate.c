/*********
11. Write a C program to count total number of 
duplicate elements in an array.
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
    count=0;
    for(i=0;i<n;i++){
        if(freq[i]>1)
            count++;
    }
    printf("total number of duplicate elements= %d\n",count);
    return 0;
    
}

/*2nd aproach using one for loop */
void find_dplicate(int arr[],int len){
int freq[256]={0};
int i;
    for(i=0;i<len;i++){
        freq[arr[i]]++;
            if(freq[arr[i]]==2){
             printf("total number of duplicate elements= %d\n",count);
            }

}
