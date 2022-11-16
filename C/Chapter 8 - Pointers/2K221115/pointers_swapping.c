/*Pointers*/

/*Ex. Swapping*/

#include<stdio.h>

void swap(int*, int*);

void main()
{
    int num1, num2;
    int *p1, *p2;

    printf("\nEnter num1 value: ");
    scanf("%d",&num1);

    printf("\nEnter num2 value: ");
    scanf("%d",&num2);

    p1 = &num1;
    p2 = &num2;

    swap(p1,p2);
}

void swap(int *x,int *y){
    int z = 0;

    printf("\nElements before swapping: \n");
    printf("\nnum1 = %d | num2 = %d\n",*x,*y);

    printf("\n&x = %d | x = %d\n",x,*x);
    z = *x;
    printf("\n&z = %d | z = %d\n",&z,z);
    
    printf("\n&x = %d | x = %d\n",x,*x);
    x = y;
    printf("\n&y = %d | y = %d\n",y,*y);

    printf("\n&y = %d | y = %d\n",y,*y);
    y = &z;
    printf("\n&z = %d | z = %d\n",&z,z);


    printf("\nElements after swapping: \n");
    printf("\nnum1 = %d | num2 = %d\n",*x,*y);

    printf("\n");
}