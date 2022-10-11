//Loops:

//Pattern Programs

/*

Ex. Star Pattern - Descending

* * * * *
* * * *
* * *
* *
*

*/

#include<stdio.h>
void main()
{
    int count,i,j;

    printf("Enter the count: ");
    scanf("%d",&count);
    printf("\n");

    for(i=1; i <= count; i++){
        for (j=i;j<=count;j++){
            printf("* ");
        }
        printf("\n");
    }

}
