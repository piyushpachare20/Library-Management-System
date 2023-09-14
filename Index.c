#include<stdio.h>
#include"registration.c"
#include"issue.c"
#include"returning.c"
#include"addnew.c"

extern void registration();
extern void issue();
extern void returning();
extern void addnew();

void main() 
{

    int select;
    do
    {
        printf("*************WELCOME TO THE LIBRARY**************\n");
        printf("Select your operation \n");
        printf("Press 1 for new registration of student\n");
        printf("Press 2 for issue books\n");
        printf("Press 3 for returning books\n");
        printf("Press 4 for add new books\n");
        printf("Press 0 for exit from program\n");
        scanf("%d", &select);
        switch(select)
        {

            case 1:
            registration();
            printf("\n\n\n");
            break;
            
            case 2:
            issue();
            printf("\n\n\n");
            break;

            case 3:
            returning();
            printf("\n\n\n");
            break;

            case 4:
            addnew();
            printf("\n\n\n");
            break;

            default:
            printf("Please enter a valid option\n");
            break;
        }
    } while (select!=0);
    {
        printf("You have exited from program");
    }
    
}