//Functions:

/*
    4. WITH return_type WITH argument
    Syntax: <return_type> <func_name> (<argument>);
    ex. int add(int a, int b);
*/

#include<stdio.h>

int add(int,int);

void main()
{
    int x,y,z;

    printf("\nEnter the values: \n");
    scanf("%d%d",&x,&y);

    z = add(x,y); //Actual Argument

    printf("\nAddition is: %d\n",z);
}

int add(int a, int b){ //Formal Argument
    int sum;

    sum = a + b;

    return sum;
}
