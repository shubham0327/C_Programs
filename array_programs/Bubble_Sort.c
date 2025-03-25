/*
Bubble sort array
*/

#include <stdio.h>

int main()
{
int arr[]={25,15,17,10,5};
int t;
int ele =sizeof(arr)/sizeof(arr[0]);
  
  for(int i=0;i<ele-1;i++)
    {
      for(int j=0;j<ele-1-i;j++)
        {
          if(arr[j]>arr[j+1])
          {
            t=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=t;
          }
        }
    }
  for(int i=0;i<ele;i++)
  printf("%d ",arr[i]);
}
