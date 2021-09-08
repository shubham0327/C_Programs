/*****
14. Write a C program to concatenate two strings using pointers.
******/
#include<stdio.h>
#define MAX 50

int main(){
    char str1[MAX]="c programming"; //destination
    char str2[MAX]="Hello world";   //source
    char *ptr=NULL,*q=NULL;

    q=str1;
    ptr=str2;
    while(*q){
        q++;
    }

    while(*ptr){
        *q=*ptr; //strcat=str1str2
        ptr++;
        q++;
    }
    *q='\0';
    printf("string concatenated = %s\n",str1);
    
    return 0;
}
