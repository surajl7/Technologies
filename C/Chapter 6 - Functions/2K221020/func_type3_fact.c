
//Function Type3 : Factorial

#include<stdio.h>

void fact(int);

int main()
{
    int x;

    printf("\nEnter the number: ");
    scanf("%d",&x);

    fact(x); //Actual Argument

    return 0;
}

void fact(int num //Formal Argument
{
    int fct = 1;

    for(int i = 1; i<= num; i++){
        fct = fct * i;
    }

    printf("\nFactorial of %d is: %d\n",num,fct);
}
