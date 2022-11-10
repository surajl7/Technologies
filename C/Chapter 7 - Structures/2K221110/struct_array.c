//Structure:

//Array within structure

#include<stdio.h>
void main()
{
    struct stdData{
        int rollNum;
        char name[20];
        int marks[3];
    };

    struct stdData sData;

    int i, total = 0;

    printf("\nEnter roll no & name \n");
    scanf("%d %s",&sData.rollNum, &sData.name);

    printf("\n");

    for(i=0;i<3;i++)
    {
        printf("Enter the marks for subject %d : ",i+1);
        scanf("%d",&sData.marks[i]);
        total = total + sData.marks[i];
    }

    printf("\nRoll no: %d | ",sData.rollNum);
    printf("Name: %s | ",sData.name);
    printf("Total Marks: %d ",total);

    printf("\n");
}
