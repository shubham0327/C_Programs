/**************
4. Write a C program to compare two strings. 
***************/

#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20]= "welcome_to_myworld";
    char str2[20]= "welcome_to_myworld";
    int i=0,res=0,flag=0;
    // Check if strings have the same length
    if (strlen(str1) != strlen(str2)) {
        printf("Strings are not equal\n");
        return 0; // Exit the program
    }
	   for(i=0;str1[i]!='\0';i++)
    {
         flag =1;// assume strings are not equal
         if(str1[i]!=str2[i])
         {
            flag =0; 
            break;  //
         }
    }
    if(flag)
   {
       printf("str2 is equal\n");
   }
   else
   {
       printf("str2 is not equal\n");
   }

/* Logic 2
    for(i = 0; str1[i] != '\0' && str1[i] == str2[i] ; i++);

    res=(int)(str1[i]-str2[i]);
    if(res > 0)
    	printf("str1 is greater than str2\n");
    else if(res < 0)
    	printf("str1 is lesser than str2\n");
    else 
        printf("str1 is equal to str2\n");*/
    
    return 0;
}
