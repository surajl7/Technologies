/*Pointers*/

/*Pointer to structure*/

#include<stdio.h>
void main()
{
    struct students{
        int roll;
        char name[20];
    };

    struct students s,*p;
    p = &s;

    printf("\nEnter the roll no & name: \n");
    scanf("%d %s",&p -> roll, &p -> name);

    printf("\nRoll no.: %d | Name: %s \n",p->roll,p->name);
    printf("\n");

}