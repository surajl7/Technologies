//Structure

//Structure in function 

#include<stdio.h>

struct student
{
    int roll;
    char name[20];
};

void show(struct student s1);

void show(struct student s1)
{
    printf("\nRoll no: %d | Name: %s",s1.roll,s1.name);
}

void main()
{
    struct student s = {1, "pqr"};
    //clrscr();
    show(s);
    //getch();
    printf("\n\n");
}