#include<stdio.h>
#include"returned.c"
extern void returned(char *ptr);
extern void returning()
{
    //printf("You are in returning");
    char bug[4],ch,word[12],str[10000],*tmp;
    int i,j;
    FILE *fp;
    printf("Enter ERP : ");
    gets(bug);
    gets(word);
    fp=fopen("studentrecord.txt","r");
    i=0;
    do
    {
        ch=fgetc(fp);
        str[i]=ch;
        i++;
    } while (str[i] != '\n');
    tmp=strstr(str,word);
    if (tmp!=NULL)
    {
        printf("You are eligible for returning book\n");
        returned(word);
    }
    else
    {
        printf("You are not eligible for returning book\n");
    }
fclose(fp);    
}