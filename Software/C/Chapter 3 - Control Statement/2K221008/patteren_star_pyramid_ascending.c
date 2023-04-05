//Loops:

//Pattern Programs

/*

Ex. Star pyramid Pattern - Ascending

####*
###* *
##* * *
#* * * *
* * * * *

Here, <blankspace> is denoted as #

Algorithm:--->



*/

#include<stdio.h>
void main()
{
    int count,i,j;

    printf("Enter the count: ");
    scanf("%d",&count);
    printf("\n");

    for(i=1;i<=count;i++){
        for(j=i;j<count;j++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
}
