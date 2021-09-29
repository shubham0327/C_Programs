/***********
1. Write a C program to create a file and 
write contents, save and close the file.
***********/
#include<stdio.h>

int main(){
    char str[]="Hello world";
    FILE *fp;
    fp=fopen("test.txt","w");
    if(fp==NULL){
        printf("File failed to open\n");
        return 0;
    }
    fputs(str,fp);

    fclose(fp);
    return 0;
}