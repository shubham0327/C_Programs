/**13. Write a C program to rotate bits of a given number.**/

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

int rotateRight(int num,unsigned int rotation){
    int lsb;
    rotation%=(BITS-1);
    while(rotation--){
        lsb=num&1;
        num=(num>>1) | (lsb<<(BITS-1));
    }
    return num;
}

int rotateLeft(int num,unsigned int rotation){
    int msb;
    rotation%=(BITS-1);
    while(rotation--){
        msb=(num>>(BITS-1))&1;
        num=(num<<1) | msb;
    }
    return num;
}

int main(){
    int num,rotation,leftRotate,rightRotate;
    printf("Enter the number\n");
	scanf("%d",&num);
    printf("Enter the number of rotation\n");
	scanf("%d",&rotation);

	deci_to_bin(num);
	leftRotate=rotateLeft(num,rotation);
    rightRotate=rotateRight(num,rotation);

	printf("\n%d left rotated %d times = %d\n",num,rotation,leftRotate);
	deci_to_bin(leftRotate);
	printf("\n%d right rotated %d times = %d\n",num,rotation,rightRotate);
	deci_to_bin(rightRotate);

    return 0;
}

