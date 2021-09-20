/*****
16. Write a C program to find reverse of a string using pointers.
*****/
#include<stdio.h>

int main(){
    char str[]="Hello World!!!";

    char *ptr1=str;
    char *ptr2=str;

    char tmp;
    int len=0,i=0;
    while(*ptr1!='\0'){
        ptr1++;
        len++;
    }
    while(*ptr2!='\0' && i<len/2){
        tmp= *(ptr2+i);
        *(ptr2+i)=*(ptr2+(len-1-i));
        *(ptr2+(len-1-i))=tmp;
        i++;
    }
    printf("Reversed string is = %s\n",str);
    return 0;
}