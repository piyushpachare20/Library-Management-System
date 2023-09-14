#include<stdio.h>
extern void returned(char *ptr){

    int l,i,j,id;
    char erp[10],str[10000],word[10],*tmp,ch,ch1;
    FILE *fp,*fp1;
    strcpy(erp,ptr);
    l=strlen(erp);
    fp=fopen("bookissuedto.txt","r");
    while ((ch=getc(fp))!=EOF)
    {
        printf("%c",ch);
    }
    fclose(fp);
    printf("\nEnter book ID : ");
    scanf("%d",&id);
    fp1=fopen("bookissuedto.txt","r");
    do
    {
        itoa(id,word,10);
        j=0;
        do
        {
            ch1=fgetc(fp1);
            str[j]=ch1;
            j++;
        } while (str[j]!='\n');
        
        tmp=strstr(str,word);
        if (tmp!=NULL)
        {
            printf("Book is retured\n");
        }
        else
        {
            printf("Book is not issued on this ERP\n");
        }
        printf("Do you want to return other book, enter book ID or press 0 to exist\n");
        scanf("%d",&id);

    } while (id!=0);
    
fclose(fp1);
}