/**12. Write a C program to count total zeros and ones in a binary number.**/

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
    int num,i,count_zeros=0,count_ones=0;
    printf("Enter the number\n");
	scanf("%d",&num);

	deci_to_bin(num);
	for(i=0;i<BITS;i++){
        if((num>>i)&1){        //check if bit is set
            count_ones++;   //count ones
        } else{
        count_zeros++;  //count zeros
        }
	}
    printf("number of zeros = %d\nnumber of ones = %d\n",count_zeros,count_ones);

    return 0;
}




