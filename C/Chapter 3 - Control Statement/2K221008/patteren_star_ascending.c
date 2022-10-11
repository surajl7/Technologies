//Loops:

//Pattern Programs

/*

Ex. Star Pattern - Ascending

*
* *
* * *
* * * *
* * * * *

*/

#include<stdio.h>
void main()
{
    int count,i,j;

    printf("Enter the count: ");
    scanf("%d",&count);
    printf("\n");

/*
    while(i <=count){
            j=1;
        while (j <= i){
            printf("* ");
            j++;
        }
        printf("\n");
        i++;
    }
*/
    for(i = 1; i <= count; i++){
        for (j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
}
