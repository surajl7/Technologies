
//Function Type1: Factorial

#include<stdio.h>

void fact();

void main()
{
    fact(); //Actual Argument
}

void fact(){ //Formal Argument
    int num,i,fct=1;

    printf("\nEnter the number: ");
    scanf("%d",&num);

    for(i=1;i<=num;i++){
        fct = fct * i;
    }

    printf("\nFactorial of %d is: %d\n",num,fct);
}
