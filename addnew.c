#include<stdio.h>
#include<stdlib.h>
#include<time.h>

extern void addnew()
{
    //printf("You are in registration");

    int n,i,a;

    struct book
    {
        char title[30];
        char author[30];
        char publication[50];
        int available;
        char bug[4];
        float price;
        char id[5];
    };
    
    struct book bk;
    FILE *fp;
    fp=fopen("bookrecord.txt","a");
    if(fp==NULL){

        printf("File is not created\n");
        goto end;
    }

    printf("Enter number of books you want to add : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){

        gets(bk.bug);
        printf("Enter book Title : ");
        gets(bk.title);
        fprintf(fp,"\n%s\t",bk.title);

        printf("Enter book Author : ");
        gets(bk.author);
        fprintf(fp,"\%s\t",bk.author);

        printf("Enter book Publication : ");
        gets(bk.publication);
        fprintf(fp,"\%s\t",bk.publication);

        printf("Enter book Price : ");
        scanf("%f",&bk.price);
        fprintf(fp,"\%.2f\t",bk.price);

        printf("Enter book availability : ");
        scanf("%d",&bk.available);
        fprintf(fp,"\%d\t",bk.available);

        srand(time(0));
        a=rand();
        itoa(a,bk.id,10);
        fprintf(fp,"%s",bk.id);


        printf("New %d books added successfully. \n", i+1);
    }


    if(fp==NULL){

        end:
        printf("you have exited the program due to file error\n");
    }
    fclose(fp);
}