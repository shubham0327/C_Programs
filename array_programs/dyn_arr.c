//volatile uint32_t* const pHardwareRegister = (uint32_t*)0x00020000;
//WAP allocate memory dynamically and print the non repeating number
#include <stdio.h>
void FindNonRepEle(int arr[],size)
{
    int freqency[10] = {0};
    for(int j = 0;j <size;j++)
    {
        freqency[arr[i]]++
    }
    printf("Non-Repeating elements are:");
    for(int k = 0; k<size;k++)
    {
        if(frequency[arr[k]] == 1)
        {
            printf("%d", arr[k]);
        }
    }
    printf("\n");
}
int main() {
int size = 0;
int *arr;
printf("Enter size of an array");
scanf("%d",&size);

arr =(int*)malloc(size*sizeof(int));
if(arr ==NULL)
{
    printf("Memory allocation failed");
    return -1;
}
printf(" array size is %d",size);
for(int i = 0;i<size;i++)
{
    scanf("%d",&arr[i]);
}
FindNonRepEle(int arr[],size);
return 0;
}
