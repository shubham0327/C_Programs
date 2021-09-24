/***********
5. Write a C program to compare two files.
***********/
#include<stdio.h>

int main(){
    int ch1=0,ch2=0,flag=1;
    FILE *fp1,*fp2;
    fp1=fopen("test.txt","r");
    fp2=fopen("TS.txt","r");
    if(fp1 == NULL || fp2 == NULL){
        printf("\nUnable to open file\n");
        printf("Please check whether file exists and have read privilege\n");
        return 0;
    }
    do{
        ch1=fgetc(fp1);
        ch2=fgetc(fp2);
        if(ch1 != ch2){
            flag=0;
            break;
        }
    }while(ch1!=EOF && ch2 !=EOF);
    if(ch1 == EOF && ch2 == EOF && flag==1)
        printf("\nFiles are Equal\n");
    else
        printf("\nFiles are Not Equal\n");
    fclose(fp1);
    fclose(fp2);
    return 0;
}