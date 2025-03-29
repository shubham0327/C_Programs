//volatile uint32_t* const pHardwareRegister = (uint32_t*)0x00020000;
//WAP allocate memory dynamically and print the non repeating number
#include <stdio.h>
#include <stdlib.h>
void FindNonRepEle(int arr[],int size)
{
    int freqeuncy[10] = {0};
    for(int j = 0;j <size;j++)
    {
        freqeuncy[arr[j]]++;
    }
    
    printf("Non-Repeating elements is :\n");
    for(int k = 0; k<size;k++)
    {
        if(freqeuncy[arr[k]] == 1)
        {
            printf("%d \n", arr[k]);
        }
    }
    printf("\n");
}
int main() {
int size = 0;
int *arr;
printf("Enter size of an array\n");
scanf("%d",&size);

arr =(int*)malloc(size*sizeof(int));
if(arr ==NULL)
{
    printf("Memory allocation failed");
    return -1;
}
printf("array size is %d \n",size);
for(int i = 0;i<size;i++)
{
    scanf("%d",&arr[i]);
}
FindNonRepEle(arr,size);
return 0;
}
