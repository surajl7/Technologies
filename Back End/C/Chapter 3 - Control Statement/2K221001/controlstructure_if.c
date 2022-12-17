//Control structure
//1. Decision making

//control structure - if

#include<stdio.h>
void main()
{
    int a,b;
    printf("\nEnter 1st number: ");
    scanf("%d",&a);

    printf("\nEnter 2nd number: ");
    scanf("%d",&b);

    if(b>a)
    {
        printf("\n%d is greater than %d\n",b,a);
    }

    if (a>b)
    {
        printf("\n%d is greater the %d\n",a,b);
    }
}

