/**17. set 2 bits of number given pos1, pos2
and make the bits in those positions as zero**/

#include<stdio.h>

int main(){
    int num,pos1,pos2,res,mask1,mask2;
    printf("Enter the number\n");
	scanf("%d",&num);
    printf("Enter the position1 and position2\n");
    scanf("%d %d",&pos1,&pos2);

    res=num | (1<<pos1) | (1<<pos2);
    printf("After setting the bits number= %d\n",res);

    mask1 = ~(1<<pos1);
    mask2 = ~(1<<pos2);
	res= num & mask1 & mask2 ;
	printf("After Clearing the bits, number= %d\n",res);

    return 0;
}
