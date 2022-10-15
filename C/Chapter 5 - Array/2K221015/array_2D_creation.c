//Array

/*
Array types:
- one dimension - 1D
- Two dimension - 2D
- Three dimension - 3D

Ex. Two dimension array creation

*/

#include<stdio.h>
void main()
{
    int count,i,j;

    printf("\nEnter length of array: ");
    scanf("%d",&count);

    int arr[count][count];

    printf("\nEnter array elements: \n");

    for(i=0;i<count;i++){
        for(j=0;j<count;j++){
            printf("arr[%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    printf("\n2D Array is: \n\n");
    for(i=0;i<count;i++){
        for(j=0;j<count;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}

