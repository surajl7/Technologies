//Structure:

/*
Structure:
    we can store the data with different data_types.

Syntax:

    struct <structure_name>
    {
        //variable declaration
    };

    struct <structure_name> <obj_name>;

    ================OR================

    struct <structure_name>
    {
        //variable declaration
    }<object_name>;

*/

#include<stdio.h>

void main()
{
    struct students
    {
        int rollNum;
        char name[20];
        float prcnt;
    }s = {1,"abc",70};

    //struct students s = {1,"abc",70};

    printf("\nRoll No: %d",s.rollNum);
    printf("\nName: %s",s.name);
    printf("\nPercentage: %.2f%%",s.prcnt);

    printf("\n");
}
