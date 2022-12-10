#include<stdio.h>  
/*
 * limitation : triangle shape change may change after n = 9
  1
 121
12321
*/
int main() {  

    int n=3;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<n-i;j++)
            printf(" ");
        int k=0;
        for(k=0;k<i;){
            k++;
            printf("%d",k);
        }
        k--;
        for(int j=k;j>0;j--)
            printf("%d",j);
        printf("\n");
    }
    return 0;
}
