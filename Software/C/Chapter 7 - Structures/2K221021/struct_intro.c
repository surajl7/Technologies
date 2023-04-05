//Structure:

/*
Structure:
    we can store the data with different data_types.

Syntax:

    struct <structure_name>
    {
        //variable declaration
    };

    struct <structure_name> <obj_name1>;
    struct <structure_name> <obj_name2>;
    .........
    .....

    ================OR================

    struct <structure_name>
    {
        //variable declaration
    }<object_name1>,<object_name2>, .... ;

*/

#include<stdio.h>

void main()
{
    struct students
    {
        int rollNum;
        char name[20];
        float prcnt;
    }s = {1,"abc",70}, s1 = {2,"xyz",90};

    //struct students s = {1,"abc",70};

    printf("\nRoll No: %d",s.rollNum);
    printf("\nName: %s",s.name);
    printf("\nPercentage: %.2f%%",s.prcnt);

    printf("\n");

    printf("\nRoll No: %d",s1.rollNum);
    printf("\nName: %s",s1.name);
    printf("\nPercentage: %.2f%%",s1.prcnt);

    printf("\n");
}
