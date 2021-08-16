/**3. Write a C program to get nth bit of a number.**/
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

    int num,bitstatus,n;
    printf("Enter the number\n");
    scanf("%d",&num);
    printf("Enter the nth bit to check \n");
    scanf("%d",&n);

    deci_to_bin(num);
    bitstatus = (num>>n) & 1;   // check nth bit of num
    printf("%d th bit is set to %d\n",n,bitstatus);
    return 0;
}
