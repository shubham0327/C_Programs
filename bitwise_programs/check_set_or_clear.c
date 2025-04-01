//WAP Deci to binary and check how many bits are set and clear

#include <stdio.h>
#define BITS_SIZE sizeof(int)*8
int main() {
    int num, pos,c=0;
    printf("Enter the number\n");
    scanf("%d",&num);
    
    if(num <= 0)
    {
        printf("Number is Null\n");
        return -1;
    }
    for(pos=31;pos>=0;pos--)
    {
        printf("%d",(num>>pos &1));
        if(num>>pos&1) // checking how many bits are set
            {
                  c++;
            }        
        if(pos%4==0)
        printf("\t");
    }
    printf("\n");
     printf("Set bits are %d\n",c);
    printf("clear bits are %d\n",BITS_SIZE-c);


    return 0;
}
