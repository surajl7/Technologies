//Control structure
//1. Decision making

//control structure - if-else

//Ex. To find the number even or odd

#include<stdio.h>
void main()
{
    int num1;

    printf("\nEnter your number: ");
    scanf("%d",&num1);

    if(num1 %2 == 0)
    {
        printf("\n%d is Even\n",num1);
    }
    else
    {
        printf("\n%d is Odd\n",num1);
    }
}
