//Bitwise operator
// << --> left shift
// >> --> Right shift
// &  --> And
// |  --> Or
// ^  --> XOR
// !  --> Not

#include<stdio.h>
void main()
{
    int num1, num2;
    printf("Enter num1 value: ");
    scanf("%d",&num1);

    printf("Enter num2 value: ");
    scanf("%d",&num2);

    //Converting decimal to binary


    //left shift
    int a = num1 << num2;
    printf("\nleft shift operator [ num1 << num2 = %d]",a);

    //right shift
    int b = num1 >> num2;
    printf("\nright shift operator [ num1 >> num2 = %d]",b);

    //And
    int c = a & b;
    printf("\nAnd operator [ %d & %d = %d ]",a,b,c);

    //or
    int d = a | b;
    printf("\nOr operator [ %d | %d = %d ]",a,b,d);

	//xor
    int e = a ^ b;
    printf("\nNot operator[ %d ^ %d = %d ]",a,b,e);
    printf("\n");

}
