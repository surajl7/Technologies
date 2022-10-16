//Array

/*

Ex. Array matrix Transpose

*/
#include<stdio.h>
void main()
{
    int count,i,j;

    printf("\nEnter length of Array: ");
    scanf("%d",&count);

    int arr[count][count];

    printf("\nEnter array elements: \n");
    for(i=0;i<count;i++){
        for(j=0;j<count;j++){
            printf("arr[%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    printf("\n2D array is: \n");
    for(i=0;i<count;i++){
        for(j=0;j<count;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }

    //Array matrix transpose
    printf("\nArray matrix transpose is: \n");
    for(i=0;i<count;i++){
        for(j=0;j<count;j++){
            printf("%d\t",arr[j][i]);
        }
        printf("\n");
    }
}
