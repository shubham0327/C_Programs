/**9. Write a C program to count trailing zeros in a binary number.**/

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
    int num,i,count=0;
    printf("Enter the number\n");
	scanf("%d",&num);

	deci_to_bin(num);
	for(i=0;i<BITS;i++){
        if((num>>i)&1){        //check if bit is set
            break;
        }
        count++;            //count trailing zeros
	}
    printf("number of trailing zeros = %d\n",count);

    return 0;
}



