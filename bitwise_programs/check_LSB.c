/**1. Write a C program to check Least Significant Bit (LSB)
 of a number is set or not.*/
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
    int num;
    int flag;
    printf("Enter the number\n");
	scanf("%d",&num);
    deci_to_bin(num);
	flag=num&1;     //check LSB of num
	if(flag)
        printf("LSB of %d is set(1)\n",num);
    else
        printf("LSB of %d is clear(0)\n",num);
    return 0;
 }
