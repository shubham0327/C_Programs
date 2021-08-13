/**14. Write a C program to convert decimal to binary number system
using bitwise operator.**/

#include<stdio.h>
#define BITS sizeof(int)*8

void deci_to_bin(int num){
    int i,k;
    printf("\nBinary of %d is= ",num);
    for(i=BITS-1;i>=0;i--){
        k=num>>i;
        printf("%d",(k&1));
        if(i%4==0){
            printf("\t");
        }
    }
    printf("\n");
}

int main(){
    int num;
    printf("Enter the number\n");
	scanf("%d",&num);

	deci_to_bin(num);

    return 0;
}





