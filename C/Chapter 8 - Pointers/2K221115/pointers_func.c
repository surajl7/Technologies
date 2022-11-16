/*Pointers*/

/*Pointers to function*/

/*
Two calling methods
1. call by value --> Ex. add(a,b)
2. call by reffrence --> Ex. add(&a,&b)
*/

#include<stdio.h>

void add(int*, int*);

void main()
{
    int num1, num2;

    printf("\nEnter num1: ");
    scanf("%d",&num1);

    printf("\nEnter num2: ");
    scanf("%d",&num2);

    add(&num1,&num2);

    printf("\n");

}

void add(int *a, int *b){
    int c;
    c = *a + *b;
    printf("\nAddress of num1 = %d\n",&a);
    printf("\nAddress of num2 = %d\n",&b);
    printf("\n");
    printf("\nAddition = %d\n",c);
    printf("\nAddress of sum = %d\n\n",&c);
}