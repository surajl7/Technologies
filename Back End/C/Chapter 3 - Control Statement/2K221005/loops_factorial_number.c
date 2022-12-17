//Loops

//Ex. Factorial of number

/*
? Note ---->

==> The factorial of a non-negative integer n, denoted by n!

==> factorial of a number is the product of all positive integers less than or equal to n.

Ex. n! = n * (n-1) * (n-2) * (n-3) * .... * 3 * 2 * 1
       = n * (n-1)!

==> The value of 0! is 1, according to the convention for an empty product.
*/

#include<stdio.h>
void main()
{
    int num, i=1, fct=1;

    printf("Enter the any positive number: ");
    scanf("%d",&num);

    while(i <= num){
        fct = fct * i;
        i++;
    }

    printf("\nFactorial --> %d! = %d\n",num,fct);
}


