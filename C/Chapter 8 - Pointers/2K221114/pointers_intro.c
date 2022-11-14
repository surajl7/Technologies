//Pointers

/*
    Pointers are used to store the address 

    e.g. -->
        int a = 10;
        p = &a;
        int *p;
        a |10| --> 6500
        p |6500| --> 6502

        value of a --> a, *p
        address of a --> &a, p

    ---------------------------------------------------------
    |   datatype   |   variable   |   value   |   address   |
    ---------------------------------------------------------
    |   int        |   a          |   10      |   6500      |
    |   int        |   p          |   6500    |   6502      |
    ---------------------------------------------------------

    Syntax:
        datatype *pointer_variable;
        pointer_variable = &variable;
    Ex. int      *p;
        p                = &a;

    Note:
        1. Adderss/Memory location of variable is in HexaDecimal form (%x)
        2. Adderss/Memory location of variable is in integer form (%d)
*/


#include<stdio.h>
void main()
{
    int a = 10, *p;
    p = &a;

    printf("\nValue of \"a\" = %d\n",a);
    printf("\nValue of \"a\" using \"p\" = %d\n",*p);
    printf("\nAddress of \"a\" in HEX = %x\n",&a);
    printf("\nAddress of \"a\" in DEC = %d\n",&a);
    printf("\nAddress of \"a\" using \"p\" in HEX = %x\n",p);
    printf("\nAddress of \"a\" using \"p\" in DEC = %d\n",p);
    printf("\n");
    printf("\nValue of \"p\" in DEC = %d\n",p);
    printf("\nValue of \"p\" in HEX = %x\n",p);
    printf("\nAddress of \"p\" in DEC = %d\n",&p);
    printf("\nAddress of \"p\" in HEX = %x\n",&p);
    printf("\n");
}


