//Loops:

/*
Ex. c] Write a program to print prime numbers in range.
*/

#include <stdio.h>
#include <stdlib.h>
 
void main()
{
    int num1, num2, i, j, flag, temp, count = 1;
 
    printf("\nEnter the value of start: ");
    scanf("%d",&num1);

    printf("Enter the value of end: ");
    scanf("%d",&num2);

    if (num2 < 2)
    {
        printf("There are no primes upto %d\n", num2);
        exit(0);
    }

    printf("\nPrime numbers are: \n");
    temp = num1;
    if ( num1 % 2 == 0)
    {
        num1++;
    }
    for (i = num1; i <= num2; i = i + 2)
    {
        flag = 0;
        for (j = 2; j <= i / 2; j++)
        {
            if ((i % j) == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("%d: %d\n",count,i);
            count++;
        }
    }
    printf("\nNumber of primes between %d & %d are: %d\n", temp, num2, count);
}