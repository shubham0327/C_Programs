/***********
4. Write a C program to count characters, 
words and lines in a text file.
***********/
#include<stdio.h>

int main(){
    char ch, prechr=EOF;
    int chr=0, word=0, line=1;
    FILE *fp;
    fp=fopen("test.txt","r");
    if(fp==NULL){
        printf("File failed to open\n");
        return 0;
    }
    while(1){
        ch=fgetc(fp);
        if(ch==' ' || ch=='\n' || ch=='\t' || ch==EOF){
            if(prechr!=' ' && prechr!='\n' && prechr!='\t' && prechr!=EOF){
                word++;     //count word
            }
        }
        prechr=ch;
        if(ch=='\n')
            line++; //count line
        if(ch==EOF)
            break;
        else
            chr++;  //count character
    }
    printf("\ncharacters in the file=%d\n",chr);
    printf("Words in the file=%d\n",word);
    printf("Lines in the file=%d\n",line);
    fclose(fp);
    return 0;
}