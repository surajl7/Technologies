//Control structure
//1. Decision making

//control structure - if-else

#include<stdio.h>
void main()
{
    int a,b;

    printf("\nEnter 1st number: ");
    scanf("%d",&a);

    printf("\nEnter 2nd number: ");
    scanf("%d",&b);


    //To find the largest of two numbers
    if (a>b)
    {
        printf("\n%d is greater than %d\n",a,b);
    }
    else
    {
        printf("\n%d is greater than %d\n",b,a);
    }


    //To find the samllest of two numbers
    if (a<b)
    {
        printf("\n%d is smaller than %d\n",a,b);
    }
    else
    {
        printf("\n%d is smaller than %d\n",b,a);
    }
}

