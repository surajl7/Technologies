/*Pointers*/

/*Ex. Finding number is even or odd*/

#include<stdio.h>
void main()
{
    int num, *p;

    printf("\nEnter the number: ");
    scanf("%d",&num);

    p = &num;

    if(*p % 2 == 0){
        printf("\n%d is Even Number\n",*p);
    }
    else{
        printf("\n%d is Odd Number\n",*p);
    }

    printf("\n");
}