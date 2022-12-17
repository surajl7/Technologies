//Structure

//Nesting of structure:

#include<stdio.h>
void main()
{
    struct salary{
        int sal;
    };

    struct employee{
        char name[20];
        struct salary s1;
    };

    struct employee emp;

    printf("\nEnter the name: ");
    scanf("%s",&emp.name);

    printf("\nEnter the salary: ");
    scanf("%d",&emp.s1.sal);

    printf("\nName: %s | Salary: %d \n\n",emp.name,emp.s1.sal);

}
