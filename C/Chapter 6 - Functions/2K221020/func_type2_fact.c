
//Function Type2: Factorial

#include<stdio.h>

int fact();

void main()
{
    printf("\nFactorial is: %d\n",fact()); //Actual Argument
}

int fact() //Formal Argument
{
    int num,fct=1;

    printf("\nEnter the number: ");
    scanf("%d",&num);

    for(int i = 1; i<=num;i++)
    {
        fct = fct * i;
    }

    return fct;
}
