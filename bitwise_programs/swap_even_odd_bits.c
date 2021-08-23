/**18. Write a C program to swap even and odd bits.**/

#include<stdio.h>

void deci_to_bin(int num){
    int i,k;
    printf("\nBinary of %d is= ",num);
    for(i=31;i>=0;i--){
        k=num>>i;
        printf("%d",(k&1));
        if(i%4==0){
            printf("\t");
        }
    }
    printf("\n");
}

int main(){
    int num,res;
    printf("Enter the number\n");
	scanf("%d",&num);

    deci_to_bin(num);
    res=((num<<1)&0xaaaaaaaa) | ((num>>1)&0x55555555);
    printf("Number = %d\n",res);
    deci_to_bin(res);
    return 0;
}

