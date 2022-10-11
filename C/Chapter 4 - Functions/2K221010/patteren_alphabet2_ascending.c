//Loops:

//Pattern Programs

/*

Ex. Alphabet Pattern 2 - Ascending

A
B B
C C C
D D D D
E E E E E

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
            printf("%c ",i+64);
        }
        printf("\n");
    }
}
