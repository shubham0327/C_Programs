/*
Bubble sort array
*/

#include <stdio.h>

int main()
{
int arr[]={25,15,17,10,5};
int temp;
int ele =sizeof(arr)/sizeof(arr[0]);
  //Bubble sort
  for(int i=0;i<ele-1;i++)
    {
      for(int j=0;j<ele-1-i;j++)
        {
          if(arr[j]>arr[j+1])
          {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
          }
        }
    }
  /*Selection sort
    for(int i=0;i<ele;i++)
    {
      for(int j=i+1;j<ele;j++)
        {
          if(arr[i]>arr[j])
          {
            t=arr[i];
            arr[i]=arr[j];
            arr[j]=t;
          }
        }
    }*/
  for(int i=0;i<ele;i++)
  printf("%d ",arr[i]);
}
