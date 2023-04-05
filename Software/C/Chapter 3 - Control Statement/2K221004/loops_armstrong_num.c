//Loops

//Ex. Armstrong number
//- Armstrong Number Code for N Digit Number in C 

/*

A number is thought of as an Armstrong number if the sum of its own digits raised to the power number 
of digits gives the number itself. 

For example, 0, 1, 153, 370, 371, 407 are three-digit Armstrong numbers and, 
1634, 8208, 9474 are four-digit Armstrong numbers and there are many more.


Algorithm:-------->

Step 1: Start

Step 2: Read an integer input number.

Step 3: Declare and Initialise the variables current_digit, sum = 0, digits = 0 and num = number.

Step 4: Calculate the number of digits in the input integer number and store it in the variable number_of_digits.

Step 5: Repeat Steps 5 to 7 Until num > 0

Step 6: current_digit = (num % 10)

Step 7: sum = sum + mnumber_of_digits

Step 8: num = num / 10

Step 9: Check if sum == number Then
Print “It is an Armstrong Number.”
Else
Print “It is not an Armstrong Number.”

Step 10: END

Formula:------->
d = num % 10;
sum = sum + pow(d,3);
num = num / 10;

Where:
d = each digit of number
sum = Sum of cube of each digit of a number
num = Number
onum = Original Number
-----------------------------------------------------------*/

#include<stdio.h>
#include<math.h>
void main()
{
    int num,onum, dnum, d, d1, count=0, sum;

    printf("Enter the number: ");
    scanf("%d",&num);

    onum = num;
    dnum = num;

    while(dnum != 0){
        d = dnum % 10;
        count++;
        dnum = dnum / 10;
    }
    printf("\nTotal digits in number: %d\n",count);
    //printf("\ncount: %d",count);
    //printf("\nonum: %d",onum);
    //printf("\ndnum: %d",dnum);
    //printf("\nnum: %d",num);
    //printf("\nd: %d",d);

    while (num != 0)
    {
        d1 = num % 10;
        sum = sum + pow(d1,count);
        num = num / 10;
    }
    //printf("\nd1: %d",d1);
    printf("\nMagic number is: %d\n",sum);

    if (onum == sum)
    {
        printf("Entered number is equal Magic number");
        printf("\n\n%d is Armstrong number!\n\n",onum);
    }
    else
    {
        printf("Entered number is not equal to Magic number");
        printf("\n\n%d is not a Armstrong number!\n\n",onum);
    }
}
