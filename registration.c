#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

extern void registration()
{
    //printf("You are in registration");

    int n,i,a;

    struct student
    {
        char name[50];
        char number[10];
        char email[30];
        char dept[20];
        char bug[4];
        int sem;
        char erp[15];
    };
    
    struct student st;
    FILE *fp;
    fp=fopen("studentrecord.txt","a");
    if(fp==NULL){

        printf("something went wrong\n");
        goto end;
    }

    printf("Enter number of students : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){

        gets(st.bug);
        printf("Enter name of student : ");
        gets(st.name);
        fprintf(fp,"\n%s\t",st.name);

        printf("Enter mobile number of student : ");
        gets(st.number);
        fprintf(fp,"%s\t",st.number);

        printf("Enter Department of student : ");
        gets(st.dept);
        fprintf(fp,"%s\t",st.dept);

        printf("Enter Email ID of student : ");
        gets(st.email);
        fprintf(fp,"%s\t",st.email);

        printf("Enter Semester of student : ");
        scanf("%d",&st.sem);
        fprintf(fp,"%d\t",st.sem);

        srand(time(0));
        a=rand();
        itoa(a,st.erp,10);
        strcat(st.dept,st.erp);
        fprintf(fp,"%s",st.dept);


        printf("student %d detail saved Successfully. \n", i+1);
    }


    if(fp==NULL){

        end:
        printf("you have exited the program due to file error\n");
    }
    fclose(fp);
}