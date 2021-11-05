/*****
11. Write a C program to multiply two matrix using pointers.
******/
#include<stdio.h>
#define ROWS 3
#define COLUMNS 3

void matrixMultiply(int mat1[][COLUMNS], int mat2[][COLUMNS], int res[][COLUMNS])
{
    int i, j, k;
    int sum;
    for(i=0; i<ROWS; i++)
    {
        for(j=0; j<COLUMNS; j++)
        {
            sum=0;
            for(k=0; k<COLUMNS; k++)
            {
                sum+=(*(*(mat1+i)+k)) * (*(*(mat2+k)+j));//sum=mat1[i][k]*mat2[k][j]
            }
            *(*(res+i)+j)=sum;
        }
    }
}
int main(){
    int mat1[ROWS][COLUMNS]={1,2,3,
    			     4,5,6,
    			     7,8,9};
    int mat2[ROWS][COLUMNS]={2,3,4,
    			     5,6,7,
    			     8,9,0};//{1,0,0,0,1,0,0,0,1};//{1,1,1,1,1,1,1,1,1};//{0,0,0,0,0,0,0,0,0};
    int res[ROWS][COLUMNS];
    int i,j;

    matrixMultiply(mat1,mat2,res);
    printf("Multiplied matrix:\n");
    for(i=0;i<ROWS;i++){
        for(j=0;j<COLUMNS;j++)
            printf("%d ",res[i][j]);
        printf("\n");
    }
    printf("\n");
    return 0;
}
