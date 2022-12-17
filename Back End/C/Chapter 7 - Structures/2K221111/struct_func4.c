//Structure 

//Structure in function 

#include<stdio.h>

void main()
{
    struct salary
    {
        int s;
    };

    struct employee
    {
        char name[20];
        struct salary s1;
    };

    struct employee e1;
    // clrscr();

    printf("\nEnter the name: ");
    scanf("%s",&e1.name);

    printf("\nEnter the salary: ");
    scanf("%d",&e1.s1.s);

    printf("\nName: %s | Salary: %d",e1.name,e1.s1.s);

    printf("\n\n");
    // getch();
}