//Condition operators
    //Syntax
    //result = <condition> ? result1 : result2;

#include<stdio.h>
void main()
{
    int num1, num2, num3;

    printf("\nEnter 1st number: ");
    scanf("%d",&num1);

    printf("\nEnter 2nd number: ");
    scanf("%d",&num2);

    //to find a largets of number
    num3 = num1 > num2 ? num1:num2;

    printf("\nLargest number is: %d\n",num3);

}
