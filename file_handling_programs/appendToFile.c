/***********
3. Write a C program to append 
content to a file.
***********/
#include<stdio.h>

int main(){
    char str[50]="Bye world";
    FILE *fp;
    fp=fopen("test.txt","a");
    if(fp==NULL){
        printf("File failed to open\n");
        return 0;
    }
    fputs("\n",fp);
    fputs(str,fp);
    
    fclose(fp);
    return 0;
}