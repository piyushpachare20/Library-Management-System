#include<stdio.h>
#include"issued.c"

extern void issued(char *ptr);
extern void issue()
{
    //printf("You are in issue");
    char bug[4],ch,word[12],str[10000],*tmp;
    int i;
    FILE *fp;
    fp=fopen("studentrecord.txt","r");
    gets(bug);
    printf("Enter your ERP ID : ");
    gets(word);
    i=0;
    do{
        ch=fgetc(fp);
        str[i]=ch;
        i++;
    } while (str[i]!='\n');
    {
        tmp=strstr(str,word);
        if (tmp!=NULL)
        {
            printf("You are eligible to issue books : ");
            issued(word);
        }
        else
        printf("You are not eligible to issue books, register yourself to issue books\n");
        

    }

fclose(fp);
}