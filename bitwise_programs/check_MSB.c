/**2. Write a C program to check Most Significant Bit (MSB)
 of a number is set or not.*/
 #include<stdio.h>
 #define BITS sizeof(int)*8

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
    int num,msb;
    int flag;

    printf("Enter the number\n");
	scanf("%d",&num);

    deci_to_bin(num);
	msb=1<<(BITS-1);
	flag=num&msb;       // check MSB of num

	if(flag)
        printf("MSB of %d is set(1)\n",num);
    else
        printf("MSB of %d is clear(0)\n",num);

    return 0;
 }
