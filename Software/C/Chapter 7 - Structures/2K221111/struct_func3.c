//Structure

//Structure in function 

#include<stdio.h>

void show(int r, char *ch);

void show(int r, char *ch)
{
    printf("\nRoll No: %d | Name: %s\n",r,ch);
}

void main()
{
    struct student
    {
        int roll;
        char name[20];
    };

    struct student s = {1, "abc"};
    // clrscr();
    show(s.roll, s.name);
    // getch();
    printf("\n");
}