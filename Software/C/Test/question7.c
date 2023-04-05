/*QUESTION7*/

/*Write a program for pointer to strucrure for implementation of student details.*/
/*(roll, name, phone_no, per)*/

#include<stdio.h>

struct students{
    int roll;
    char name[20];
    int phone_no;
    float per;
};

void main()
{
    int count;

    printf("\nEnter count of students: ");
    scanf("%d",&count);

    struct students std[count],*p;

    p = std;

    printf("\nEnter student details: \n");
    for(int i=0; i<count; i++){
        printf("Roll no: ");
        scanf("%d",&p -> roll);

        printf("Name: ");
        scanf("%s",&p -> name);

        printf("Phone no: ");
        scanf("%d",&p -> phone_no);

        printf("Percentage: ");
        scanf("%f",&p -> per);

        p++;
        printf("\n");
    }

    p = std;
    printf("\nAll Students Details: \n");
    for(int i=0; i<count; i++){
        printf("%d | %s | %d | %.2f %% \n",p->roll, p->name, p->phone_no, p->per);
        p++;
    }

    printf("\n");
}