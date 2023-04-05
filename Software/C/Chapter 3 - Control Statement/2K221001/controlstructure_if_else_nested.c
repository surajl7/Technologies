//Control structure
//1. Decision making

//control structure - Nested --> if-else

//Ex. To find the largest of 3 numbers

#include<stdio.h>
void main()
{
    int num1, num2, num3;

    printf("Enter num1 value: ");
    scanf("%d",&num1);

    printf("Enter num2 value: ");
    scanf("%d",&num2);

    printf("Enter num3 value: ");
    scanf("%d",&num3);

    printf("\n");

    if (num1>num2)
    {
        if (num2>num3)
        {
            printf("%d is greater than %d and %d",num1,num2,num3);
        }
        else
        {
            printf("%d is greater than %d and %d",num3,num2,num1);
        }
    }
    else
    {
        if (num2>num3)
        {
            printf("%d is greater than %d and %d",num2,num1,num3);
        }
        else
        {
            printf("%d is greater than %d and %d",num3,num2,num1);
        }
    }
    printf("\n");
}
