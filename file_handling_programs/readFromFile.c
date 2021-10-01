/***********
2. Write a C program to read file contents 
and display on console.
***********/
#include<stdio.h>

int main(){
    char ch;
    FILE *fp;
    fp=fopen("test.txt","r");
    if(fp==NULL){
        printf("File failed to open\n");
        return 0;
    }
    while((ch=fgetc(fp))!=EOF)
        printf("%c",ch);
    
    fclose(fp);
    return 0;
}