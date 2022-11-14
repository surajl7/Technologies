/*Pointers*/

/*Ex. Pointers Adiition*/

#include<stdio.h>
void main()
{
    int a,b,c,*p,*p1;

    printf("\nEnter num1: ");
    scanf("%d",&a);

    printf("\nEnter num2: ");
    scanf("%d",&b);

    p = &a;
    p1 = &b;

    c = *p + *p1;

    printf("\nAddition = %d\n",c);
    printf("\n");
}