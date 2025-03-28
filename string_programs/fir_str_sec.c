/*
WAP to check second string is present in first string or not
*/

#include<stdio.h>
int main()
{
char s1[]="Embedded world";
char s2[]="worltd";
int i,j,flag=0;

for(i=0;s1[i];i++)
{
flag=1; //assume string exists
for(j=0;s2[j];j++)
{
if(s1[i+j]!=s2[j])
{
flag=0;// not found break the loop
break;
}
}
if(flag)// if found, come out from outer loop
break;
}

if(flag)
{
printf("String is present\n");
}
else
{
printf("String is not present");
}
return 0;
}



