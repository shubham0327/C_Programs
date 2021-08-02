/**5. Write a C program to clear nth bit of a number.**/

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
    int num,n,mask;
    printf("Enter the number\n");
	scanf("%d",&num);
	printf("Enter the nth bit to clear\n");
	scanf("%d",&n);

	deci_to_bin(num);
	mask = ~(1<<n);      //mask for clear
	num = num & mask;   //clear nth bit
	printf("\nnum=%d",num);
	deci_to_bin(num);

    return 0;
}
