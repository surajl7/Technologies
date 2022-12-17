/*Structure:*/

/*Ex. Employee Data*/

#include<stdio.h>

int count,choice;

struct employeeData{
    int id;
    char name[20];
    float sal;
    char dept[20];
};

int displaybyid(struct employeeData emp[count]);
int displaybyname(struct employeeData emp[count]);
int displaybysalary(struct employeeData emp[count]);
void display(struct employeeData emp[count],int);


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

    do{
    printf("\n\n\nSearch data by following options: \n \
              1. Search by Employee ID \n \
              2. Search by Employee Name \n \
              3. Search by Employee Salary \n \
              4. Search by Employee Department \n \
              5. Exit \n \
           "
           );


    printf("\nEnter you choice: ");
    scanf("%d",&choice);

    if(choice >= 1 && choice <= 5){
        switch (choice){
        case 1:
            //displaybyid(emp)
            display(emp,displaybyid(emp));
        break;

        case 2:
            display(emp,displaybyname(emp));
        break;

        case 3:
            display(emp,displaybysalary(emp));
        break;

        case 4:
            display(emp,displaybydept(emp));
        break;

        case 5:
            printf("\nThank you!! :)");
        break;
        }
    }
    else{
        printf("\nPlease Enter valid choice :( \n");
    }

    printf("\n======================================\n");

    }while(choice != 5);
}

/*
void displaybyid(struct employeeData emp[count]){

    int tmp = 0;
    char empId[20];
    printf("\nEnter name of Employee: ");
    scanf("%d",&empId);

    for(int i=0;i<count;i++){
        if (empId == emp[i].id){
            printf("%d | %s | %f | %s",emp[i].id,emp[i].name,emp[i].sal,emp[i].dept);
        }
        else{
            tmp = 1;
        }
    }

    if(tmp == 1){
        printf("\nInvalid Data :(\n");
    }
}
*/


int displaybyid(struct employeeData emp[count]){

    //printf("\ncount: %d\n",count);

    int empId,i,tmp;
    printf("\nEnter Id of Employee: ");
    scanf("%d",&empId);

    for(i=0;i<count;i++){
        if (empId == emp[i].id){
            //printf("\nID: %d and i: %d\n",emp[i].id,i);
            tmp = i;
            //printf("\ntmp: %d \n",tmp);
            break;
        }
        else{
            tmp = -1;
        }
    }
    return tmp;
}


int displaybyname(struct employeeData emp[count]){

    int i, value, tmp;

    char empName[20];
    printf("\nEnter name of Employee: ");
    scanf("%s",&empName);

    for(i=0;i<count;i++){
        value = stricmp(empName,emp[i].name);
        if (value == 0){
            tmp = i;
            break;
        }
        else{
            tmp = -1;
        }
    }
    return tmp;
}


int displaybysalary(struct employeeData emp[count]){

    int i, tmp;
    float empSal;
    printf("\nEnter Salary of Employee: ");
    scanf("%f",&empSal);

    for(i=0;i<count;i++){
        if (empSal == emp[i].sal){
            tmp = i;
            break;
        }
        else{
            tmp = -1;
        }
    }
    return tmp;
}


int displaybydept(struct employeeData emp[count]){

    int i, value, tmp;
    char empDept[20];
    printf("\nEnter department of Employee: ");
    scanf("%s",&empDept);

    for(i=0;i<count;i++){
        value = stricmp(empDept,emp[i].dept);
        if (value == 0){
            tmp = i;
            break;
        }
        else{
            tmp = -1;
        }
    }
    return tmp;
}


void display(struct employeeData emp[count],int temp){

    //printf("\ntemp = %d\n",temp);

    if(temp != -1){
        printf("\n%d | %s | %.2f | %s\n",emp[temp].id,emp[temp].name,emp[temp].sal,emp[temp].dept);
    }
    else{
        printf("\nInvalid Data :(\n");
    }

}





