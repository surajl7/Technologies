/*QUESTION3*/

/*Write a program which having structure employee accept the details of five employee and display 
the details who having salary greater than 50000*/

#include<stdio.h>

struct employee {
    int empId;
    char name[20];
    float sal;
};

void main()
{
    int count;

    printf("\nEnter count of employees: ");
    scanf("%d",&count);

    struct employee emp[count];

    printf("\nEnter employee details: \n");
    for(int i=0; i<count; i++){
        printf("Employee ID: ");
        scanf("%d",&emp[i].empId);
        printf("Name: ");
        scanf("%s",&emp[i].name);
        printf("Salary: ");
        scanf("%f",&emp[i].sal);
        printf("\n");
    }

    printf("\nAll employee details: \n");
    for(int i=0; i<count; i++){
        printf("%d | %s | %.2f\n",emp[i].empId,emp[i].name,emp[i].sal);
    }
    printf("\n");

    printf("\nDetails of Employee who having salary greater than 5000\n");
    for(int i=0; i<count; i++){
        if(emp[i].sal >= 5000){
            printf("%d | %s | %.2f\n",emp[i].empId,emp[i].name,emp[i].sal);
        }
    }

    printf("\n\n");
}