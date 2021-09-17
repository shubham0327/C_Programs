/*****
15. Write a C program to compare two strings using pointers.
*****/
#include<stdio.h>

int main(){
    char *str1="hello";
    char *str2=" world";

    int res;
    char *ptr1=str1;
    char *ptr2=str2;

    while(*ptr1 && (*ptr1 == * ptr2)){
        ptr1++;
        ptr2++;
    }
    res=*ptr1-*ptr2;
    if(res>0) printf("str1 is greater than str2\n");
    else if(res<0) printf("str1 is less than str2\n");
    else printf("str1 is equal to str2\n");

    return 0;
}