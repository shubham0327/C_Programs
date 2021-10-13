/*********
 8. Write a C program to return multiple value 
 from function using pointers.
 *e.g comparing two numbers
 *********/
#include<stdio.h>
void compare(int a,int b, int *bigger, int *smaller){
    if(a>b){
        *bigger=a;
        *smaller=b;
    }else{
        *bigger=b;
        *smaller=a;
    }
}
int main(){
    int a=5,b=10,great,small;
    compare(a,b,&great,&small);
    printf("Bigger number= %d\nSmaller number =%d\n",great,small);
    return 0;   
}