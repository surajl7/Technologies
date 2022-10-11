//Loops:

//Pattern Programs

/*

Ex. Alphabet Pattern 1 - Ascending

A
A B
A B C
A B C D
A B C D E

*/

#include<stdio.h>
void main()
{
    int count,i,j;

    printf("Enter the count: ");
    scanf("%d",&count);
    printf("\n");

    for(i=1;i<=count;i++){
        for(j=1;j<=i;j++){
            printf("%c",j+64);
        }
        printf("\n");
    }
}
