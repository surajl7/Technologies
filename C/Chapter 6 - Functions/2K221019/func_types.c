//Functions:

/*

Function:

Syntax: <return_type> <func_name> (<argument>);

FUNCTION TYPES 4:
    1. NO return_type NO argument
    Syntax: void <func_name> ();
    ex. void add();

    2. WITH return_type NO argument
    Syntax: <return_type> <func_name> ();
    ex. int add();

    3. NO return_type WITH argument
    Syntax: <func_name> (<argument>); //--> argument is (<data_type> <variable>)
    ex. void add(int a, int b);

    4. WITH return_type WITH argument
    Syntax: <return_type> <func_name> (<argument>);
    ex. int add(int a, int b);

*/

/*
    Ex. Write a function to add two numbers with not return type no argument
*/


#include<stdio.h>

void add();
int sub();
void mul(int a, int b);

void main(){

    add();

    int d;
    d = sub();
    printf("\nSubtraction is %d\n",d);


    int a, b;
    printf("\nEnter 2 values for multiplication: \n");
    scanf("%d%d",&a,&b);
    mul(a,b);

    int e;
    e = div(a,b);
    printf("\nDivision is %d\n",e);

}


//TYPE 1: Function with no return_type and no argument

void add(){
    int a, b, c;

    printf("\nEnter 2 values for Addition:\n");
    scanf("%d%d",&a,&b);

    c = a + b;

    printf("\nAddition of %d and %d is %d\n",a,b,c);
}


//TYPE 2: Function with return_type and no argument

int sub(){
    int a,b,c;

    printf("\nEnter 2 values for Subtraction:\n");
    scanf("%d%d",&a,&b);

    c = a - b;

    return c;
}


//TYPE 3: Function with NO return_type and WITH argument

void mul(int a, int b){

    int c = a * b;

    printf("\nMultiplication of %d and %d is %d\n",a,b,c);

}


//TYPE 4: Function WITH return_type and WITH argument

int div(int a, int b){

    int c = a / b;

    return c;
}


