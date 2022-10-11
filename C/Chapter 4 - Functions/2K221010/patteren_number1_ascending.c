//Loops:

//Pattern Programs

/*

Ex. Number Pattern - Ascending

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

*/

#include<stdio.h>
void main()
{
    int count,i,j,num;

    printf("\nEnter the count: ");
    scanf("%d",&count);
    printf("\n");


    for(i=1;i<=count;i++)
        {
            for(j=1;j<=i;j++)
            {
                printf("%d ",j);
            }
            printf("\n");
        }

}
