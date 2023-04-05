/*QUESTION6*/

/*Write a program to find GCD (greatest common divisor) of two numbers*/

#include<stdio.h>
#include<math.h>

void main()
{
    int num1, num2, gcd;

    printf("\nEnter the two numbers: \n");
    scanf("%d%d",&num1,&num2);

    for(int i=1; i <= num1 && i<=num2 ; ++i){
        if(num1 % i == 0 && num2 % i == 0){
            gcd = i;
        }
    }
    printf("\nGreatest common divisor (GCD) of \"%d\" and \"%d\" is: %d\n",num1,num2,gcd);

    printf("\n");
}