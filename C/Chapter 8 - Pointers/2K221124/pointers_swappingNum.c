/*Pointers*/

/*Swapping of numbers*/

#include<stdio.h>

void swap(int*, int*);
void swapwtv(int*, int*);
void swapbit(int*, int*);

void main(){
    int num1, num2, *ptr1, *ptr2;

    printf("\nEnter num1 value: ");
    scanf("%d",&num1);

    printf("Enter num2 value: ");
    scanf("%d",&num2);

    ptr1 = &num1;
    ptr2 = &num2;

    printf("\nNumbers before swapping: \n");
    printf("num1: %d | num2: %d\n",*ptr1, *ptr2);
    printf("&num1: %p | &num2: %p\n",ptr1,ptr2);

    swap(&num1, &num2);
    
    swap(ptr1,ptr2);

    swapwtv(ptr1,ptr2);

    swapbit(ptr1,ptr2);

    printf("\n");
}

void swap(int *a, int *b){
    int c;

    c = *a;
    *a = *b;
    *b = c;

    printf("\nNumbers after swapping: \n");
    printf("With Using 3rd variable: \n");
    printf("num1: %d | num2: %d\n",*a, *b);
    printf("&num1: %p | &num2: %p\n",a,b);
}

void swapwtv(int *x, int *y){
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;

    printf("\nNumbers after swapping: \n");
    printf("Without using 3rd variable: \n");
    printf("num1: %d | num2: %d\n",*x, *y);
    printf("&num1: %p | &num2: %p\n",x,y);
}

void swapbit(int *p, int *q){
    *p = *p ^ *q;
    *q = *p ^ *q;
    *p = *p ^ *q;

    printf("\nNumbers after swapping: \n");
    printf("using bitwise operator: \n");
    printf("num1: %d | num2: %d\n",*p, *q);
    printf("&num1: %p | &num2: %p\n",p,q);
}