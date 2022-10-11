//Control structure
//1. Decision making

//control structure - if-else

//Ex. To find if number is positive or negative

#include<stdio.h>
void main()
{
    int num;

    printf("\nEnter your number: ");
    scanf("%d",&num);

    if(num>0)
    {
        printf("\n%d is a positive number\n",num);
    }
    else
    {
        printf("\n%d is a negative number\n",num);
    }
}
