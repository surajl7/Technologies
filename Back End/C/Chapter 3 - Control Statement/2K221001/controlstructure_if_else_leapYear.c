//Control structure
//1. Decision making

//control structure - if-else

//Ex. To find if year is leap-year

#include<stdio.h>
void main()
{
    int yr;

    printf("\nEnter year: ");
    scanf("%d",&yr);

    if (yr %4 == 0)
    {
        printf("\n%d is a leap-year\n",yr);
    }
    else
    {
        printf("\n%d is a Regular Year\n",yr);
    }
}
