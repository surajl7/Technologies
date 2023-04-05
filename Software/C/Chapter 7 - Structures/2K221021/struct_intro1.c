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
*/

#include<stdio.h>

void main()
{
    struct students{
        int rollNum;
        char name[20];
        float prct;
    };

    struct students s = {1, "abc", 70};
    struct students s1 = {2, "xyz", 90};

    printf("\nRoll No.: %d",s.rollNum);
    printf("\nName: %s",s.name);
    printf("\nPercentage: %.2f%%",s.prct);

    printf("\n");

    printf("\nRoll No.: %d",s1.rollNum);
    printf("\nName: %s",s1.name);
    printf("\nPercentage: %.2f%%",s1.prct);

    printf("\n");
}
