//FUNCTION TYPES:

/*
    1. NO return_type NO argument
    Syntax: void <func_name> ();
    ex. void add();
*/

#include<stdio.h>

void add();

void main()
{
    add(); //Actual Argument
}

void add(){ //Formal Argument
    int a = 10;
    int b = 20;

    int sum = a + b;

    printf("\nAddition is: %d\n",sum);
}
