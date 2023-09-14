#include<stdio.h>

extern void issued(char *ptr){

    int l,i,j,id;
    char erp[12],str[10000],word[10],*tmp,ch,ch1;
    FILE *fp,*fp1,*fp2;
    strcpy(erp,ptr);
    puts(erp);
    l=strlen(erp);
    fp=fopen("bookrecord.txt","r");
    while ((ch=getc(fp))!=EOF)
    {
        printf("%c",ch);
    }
    fclose(fp);
    printf("\nEnter book ID : ");
    scanf("%d",&id);
    fp1=fopen("bookrecord.txt","r");
    do
    {
        itoa(id,word,10);
        i=0;
        do
        {
            ch1=fgetc(fp1);
            str[i]=ch1;
            i++;
        } while (str[i]!='\n');

        tmp=strstr(str,word);
        if (tmp!=NULL)
        {
            printf("Book ID is valid\n");
            fp2=fopen("bookissuedto.txt","a");
            fprintf(fp2,"\n%s\t",erp);
            fprintf(fp2,"%s\t",word);
            fclose(fp2);
            printf("Issued Successfully\n");
        }
        else
        {
            printf("Book ID is not valid\n");
        }
        printf("Enter book ID : \n");
        scanf("%d",&id);

    } while (id!=0);
fclose(fp);    
}