/**7. Write a C program to get highest set bit of a number.**/

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
    int num,i,flag=0,highest_bit;
    printf("Enter the number\n");
	scanf("%d",&num);

	deci_to_bin(num);
	for(i=BITS-1;i>=0;i--){
        if((num>>i)&1){        //check if bit is set
            highest_bit=i;
            flag=1;
            break;
        }
	}
	if(flag)
        printf("Highest set bit is at %d bit\n",i);
    else
        printf("\nThere is no set bit\n");

    return 0;
}


