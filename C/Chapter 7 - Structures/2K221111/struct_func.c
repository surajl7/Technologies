//Structure

//Structure with function 

void show(int r, char *ch);

#include<stdio.h>
void main()
{
    struct student
    {
        int roll;
        char name[20];
    };

    struct student s = {1, "abc"};
    show(s.roll, s.name);
}

void show(int r, char *ch)
{
    printf("Roll no: %d\n",r);
    printf("Name: %s\n",ch);
}