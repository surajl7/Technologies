/*Structure:*/

/*Ex. Employee Data*/

#include<stdio.h>

int count;

struct employeeData{
    int id;
    char name[20];
    float sal;
    char dept[20];
};

void display(struct employeeData emp[count]);

void main()
{

    printf("\nEnter number of employees: ");
    scanf("%d",&count);

    struct employeeData emp[count];

    printf("\nEnter employee data: \n\n");
    for(int i=0; i<count; i++){
        printf("ID: ");
        scanf("%d",&emp[i].id);

        printf("Name: ");
        scanf("%s",&emp[i].name);

        printf("Salary: ");
        scanf("%f",&emp[i].sal);

        printf("Department: ");
        scanf("%s",&emp[i].dept);

        printf("\n");
    }

    printf("\n==================================\n");

    printf("\nSearch data by following options: \n \
              1. Search by Employee ID \
              2. Search by Employee Name \
              3. Search by Employee Salary \
              4. Search by Employee Department \
           "
           );
    printf("\nEnter you choice: ");
    scanf("%d",)
}


void display(struct employeeData emp[count]){

}






