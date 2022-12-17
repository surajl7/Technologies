//Loops:

//Pattern Programs

/*

Ex. Number Pattern 2 - Ascending

1
2 2
3 3 3
4 4 4 4
5 5 5 5 5

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
            printf("%d ",i);
        }
        printf("\n");
    }
}
