//Loops

//Ex. Reverse of numbers

/*Formula: ---------------------------------------------------
d = num % 10;
rev = rev * 10 + d;
num = num / 10;

Where:
d = each digit of number
rev = Reverse of number
num = Number
onum = Original Number
-----------------------------------------------------------*/

/******************************************
?Note:
num = 123

STEP1: 123 % 10 = 3
              rev = 3
              123 / 10 = 12

STEP2: 12 % 10 = 12
              rev = 32
              12 /10 = 1

STEP3: 1 % 10 = 1
              rev = 321
              1 /10 = 0

******************************************/
#include<stdio.h>
void main()
{
    int num,rev,d;

    printf("\nEnter the number: ");
    scanf("%d",&num);

    while (num != 0)
    {
        d = num % 10;
        rev = rev * 10 + d;
        num = num / 10;
    }
    printf("\nReverse of number is: %d\n",rev);
}
