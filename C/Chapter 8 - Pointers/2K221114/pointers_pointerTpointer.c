/*Pointers*/

/*
    Pointer to Pointer

    e.g. -->
        int a = 10;
        int *p;
        p = &a;
        a |10| --> 6500
        p |6500| --> 6502
        p1|6502| --> 6504

        value of a --> a, *p
        address of a --> &a, p

        value of p --> p, *p1;
        address of p  --> &p, p1

        [new address]
        value of a --> a, *p, **p1
        address of a --> &a, p, *p1
        address of p --> &p, p1
        address of p1 --> &p1

    ---------------------------------------------------------
    |   datatype   |   variable   |   value   |   address   |
    ---------------------------------------------------------
    |   int        |   a          |   10      |   6500      |
    |   int        |   p          |   6500    |   6502      |
    |   int        |   p1         |   6502    |   6504      |
    ---------------------------------------------------------

    Syntax:

        datatype  *pointer_variable1;
        pinter_variable1 = &variable;

        datatype **pointer_variable2;
        pinter_variable2 = &pointer_variable1;

    Ex. 
        int *p;
        p = &a;

        int **p1;
        p1 = &p;

*/

#include<stdio.h>
void main()
{
    int a = 10;
    int *p, **p1;

    p = &a;
    p1 = &p;

    printf("\nValue of \"a\" = %d\n",a);
    printf("\nValue of \"a\" using \"p\"= %d\n",*p);
    printf("\nValue of \"a\" using \"p1\" = %d\n",**p1);
    printf("\n");
    printf("\nAddress of \"a\" in DEC = %d\n",&a);
    printf("\nAddress of \"a\" in HEX = %x\n",&a);
    printf("\nAddress of \"a\" using \"p\" in DEC = %d\n",p);
    printf("\nAddress of \"a\" using \"p\" in HEX = %x\n",p);
    printf("\nAddress of \"a\" using \"p1\" in DEC = %d\n",*p1);
    printf("\nAddress of \"a\" using \"p1\" in HEX = %x\n",*p1);
    printf("\n");

    printf("\n");

    printf("\nValue of \"p\" = %d\n",p);
    printf("\nValue of \"p\" using \"p1\"= %d\n",*p1);
    printf("\n");
    printf("\nAddress of \"p\" in DEC = %d\n",&p);
    printf("\nAddress of \"p\" in HEX = %x\n",&p);
    printf("\nAddress of \"p\" using \"p1\" in DEC = %d\n",p1);
    printf("\nAddress of \"p\" using \"p1\" in HEX = %x\n",p1);
    printf("\n");

    printf("\n");

    printf("\nValue of \"p1\" = %d\n",p1);
    printf("\n");
    printf("\nAddress of \"p1\" in DEC = %d\n",&p1);
    printf("\nAddress of \"p1\" in HEX = %x\n",&p1);
    printf("\n");

}