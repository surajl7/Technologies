//Control structure
//1. Decision making

//control structure - ladder --> if-else

//Ex. To find the largest of 3 numbers

#include<stdio.h>
void main()
{
    int num1, num2, num3;

    printf("\nEnter values for 1st numbers: ");
    scanf("%d",&num1);

    printf("\nEnter values for 2nd numbers: ");
    scanf("%d",&num2);

    printf("\nEnter values for 3rd numbers: ");
    scanf("%d",&num3);

    if (num1>num2 && num1>num3)
    {
        printf("\n%d is greater than %d and %d\n",num1,num2,num3);
    }
    else if (num2>num1 && num2>num3)
    {
        printf("\n%d is greater than %d and %d\n",num2,num1,num3);
    }
    else if (num3>num1 && num3>num2)
    {
        printf("\n%d is greater than %d and %d\n",num3,num1,num2);
    }
}

