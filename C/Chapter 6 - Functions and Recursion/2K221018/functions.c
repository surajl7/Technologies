//Functions:

/*

Functions -->
Types of functions:
1. System defined functions
- printf()
- scanf()
- string's 18 functions
- ...

2. User defined functions

--> 1. function declaration
    Syntax:
    <return_type> <func_name> (<argument>);

--> 2. function defination
    Syntax:
    <return_type> <func_name> (<atgument>)
    {
        //code
    }

--> 3. function call
    Syntax:
    <func_name> (<argument>);

*/

//Ex. Write a function for addition of two numbers

#include<stdio.h>

//Function Declaration
int add(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
int div(int num1, int num2);

//Function call
void main(){

    int num1, num2;

    printf("Enter num1 value: ");
    scanf("%d",&num1);

    printf("Enter num2 value: ");
    scanf("%d",&num2);

    add(num1,num2);
    //sub(num1,num2);
    mul(num1,num2);
    //div(num1,num2);
}

//Function Defination
int add(int num1, int num2){
    int sum = num1 + num2;
    printf("\nAddition of %d and %d is %d\n",num1,num2,sum);
}

int sub(int num1, int num2){
    int sub = num1 - num2;
    printf("\nSubtraction of %d and %d is %d\n",num1,num2,sub);
}

int mul(int num1, int num2){
    int mul = num1 * num2;
    printf("\nMultiplication of %d and %d is %d\n",num1,num2,mul);
}

int div(int num1, int num2){
    int div = num1 / num2;
    printf("\nDivision of %d and %d is %d\n",num1,num2,div);
}
