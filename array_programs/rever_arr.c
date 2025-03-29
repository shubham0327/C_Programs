// Online C compiler to run C program online
#include <stdio.h>
void reversearray(int arr[], int size)
{
    int start = 0;
    int end = size -1;
    while(start <end)
    {
        arr[start] = arr[start] + arr[end];
        arr[end] = arr[start] - arr[end];
        arr[end] = arr[start] - arr[end];
        start++;
        end--;
    }
}
int main() {
    int arr[]={10, 20, 30, 40};
    int size = sizeof(arr)/sizeof(arr[0]);
    reversearray(arr,size);
    printf("reversed array:");
    for(int i = 0; i <size;i++)
    {
        printf(" %d", arr[i]);
    }

    return 0;
}
