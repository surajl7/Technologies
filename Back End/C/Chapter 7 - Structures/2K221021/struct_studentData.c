/*Structure:*/

/*Ex. Student data*/

#include<stdio.h>

struct studentData{
    int rollNum;
    char name[20];
    char address[20];
    float prct;
};

void main()
{
    int count;

    printf("\nEnter number of students: ");
    scanf("%d",&count);

    struct studentData std[count];

    for(int i=0;i<count;i++){
        printf("\nEnter student [%d] details:\n",i+1);
        printf("\nRoll no.: ");
        scanf("%d",&std[i].rollNum);

        printf("Name: ");
        scanf("%s",&std[i].name);

        printf("Address: ");
        scanf("%s",&std[i].address);

        printf("Percentage: ");
        scanf("%f",&std[i].prct);

        printf("\n");
    }

    for(int i=0; i<count;i++){
        printf("\nStudent details: %d | %s | %s | %.2f%%\n",std[i].rollNum, std[i].name, std[i].address, std[i].prct);
    }

    printf("\n===========================================\n");

    int num, tmp=0;
    printf("\nEnter student's roll no. to get the data: ");
    scanf("%d",&num);

    for(int i; i<count; i++){
        if(num == std[i].rollNum){
            printf("\nStudent details: %d | %s | %s | %.2f%%\n",std[i].rollNum, std[i].name, std[i].address, std[i].prct);
        }
        else{
            tmp = 1;
        }
    }

    if(tmp == 1);
        printf("\nInvalid data :( \n");
}
