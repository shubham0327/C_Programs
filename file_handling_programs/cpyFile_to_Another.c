/***********
6. Write a C program to copy contents 
from one file to another file.
***********/
#include<stdio.h>

int main(){
    int ch=0;
    FILE *fp1,*fp2;
    fp1=fopen("test.txt","r");
    fp2=fopen("TS.txt","w");
    if(fp1 == NULL || fp2 == NULL){
        printf("\nUnable to open file\n");
        printf("Please check whether file exists and have read privilege\n");
        return 0;
    }
    while((ch=fgetc(fp1))!=EOF){
        fputc(ch,fp2);
    }
    
    fclose(fp1);
    fclose(fp2);
    return 0;
}