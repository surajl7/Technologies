//Function:

/*
    Type 2:
    2. WITH return_type NO argument
    Syntax: <return_type> <func_name> ();
    ex. int add();

*/


#include<stdio.h>

int add();

void main()
{
    int c;

    c = add(); //Actual Argument

    printf("\nAddition is: %d\n",c);

}

int add(){ //Formal Argument
    int a = 10;
    int b = 20;
    int sum;

    sum = a + b;

    return sum;
}
