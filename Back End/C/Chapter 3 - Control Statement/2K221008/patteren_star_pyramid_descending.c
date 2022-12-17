//Loops:

//Pattern Programs

/*

Ex. Star pyramid Pattern - Descending

* * * * *
 * * * *
  * * *
   * *
    *

Here, <blankspace> is denoted as #

*/

#include<stdio.h>
void main()
{
    int count,i,j;

    printf("Enter the count: ");
    scanf("%d",&count);
    printf("\n");

    for(i=1;i<=count;i++){
        for(j=1;j<i;j++){
            printf(" ");
        }
        for(j=i;j<=count;j++){
            printf("* ");
        }
        printf("\n");
    }
}

