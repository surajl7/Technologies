
//Function Type4: Factorial

#include<stdio.h>

int fact(int);

int main()
{
    int x;

    printf("\nEnter the number: ");
    scanf("%d",&x);

    printf("\nFactorial of %d is: %d\n",x,fact(x)); //Actual Argument

    return 0;
}

int fact(int num){ //Formal Argument
    int fct = 1;

    for(int i = 1; i<=num; i++){
        fct = fct * i;
    }

    return fct;
}
