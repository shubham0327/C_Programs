/*****
13. Write a C program to copy one string to another using pointers.
******/
#include<stdio.h>

int main(){
    char *str1="c programming";
    char *str2;
    char *ptr=str2;

    while(*str1!='\0'){
        *str2=*str1;
        str2++;
        str1++;
    }
    *str2='\0';
    printf("string copied= %s\n",ptr);
    
    return 0;
}
