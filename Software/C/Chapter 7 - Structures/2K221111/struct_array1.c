//Structure 

//Array in structure


#include<stdio.h>
void main()
{
    int count = 5;
    int subj = 3;
    float totalMarks[count];

    struct students{
        int rollNum;
        char name[20];
        float marks[subj];
    };

    printf("\n");

    struct students std[count];

    for(int i=0; i<count; i++){
        printf("\nRoll No: ");
        scanf("%d",&std[i].rollNum);

        printf("Name: ");
        scanf("%s",&std[i].name);

        for(int j=0; j<subj; j++){
            printf("Marks - Subject %d: ",j+1);
            scanf("%f",&std[i].marks[j]);
            totalMarks[i] = totalMarks[i] + std[i].marks[j];
        }
    }    

    for(int i=0; i<count; i++){
        printf("\nRoll no: %d | Name: %s | Total Marks: %.2f",std[i].rollNum,std[i].name,totalMarks[i]);
    }
    
    printf("\n");
}