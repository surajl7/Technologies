//Loops

//Ex. Prime number

/*
? Note ---->

==> A natural number (1, 2, 3, 4, 5, 6, etc.) is called a "PRIME NUMBER" (or a prime)
if it is greater than 1 and cannot be written as the product of two smaller
natural numbers.

==> The numbers greater than 1 that are not prime are called "COMPOSITE NUMBERS"

!==> 1 is not prime, as it is specifically excluded in the definition.
4 = 2 × 2 and 6 = 2 × 3 are both composite.
*/


#include<stdio.h>
void main()
{
    int num,i,flag=0;

    printf("\nEnter Positive number: ");
    scanf("%d",&num);

    // 0 and 1 are not prime numbers
    //Change flag to 1 for non-prime numbers
    if (num == 0 || num == 1)
    flag = 1;

    for (i = 2; i <= num / 2; i++){

    //if n is divisible by i, then n is not prime number
    //change flag to 1 for non-prime
    if (num % i == 0){
        flag = 1;
        break;
    }
    }

    //flag is 0 for prime number
    if (flag == 0)
        printf("\n%d is a prime number.\n",num);
    else
        printf("\n%d is Not a prime number.\n",num);
}
