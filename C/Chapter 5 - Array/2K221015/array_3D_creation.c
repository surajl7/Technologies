//Array

/*
Ex. Three dimension array creation
*/

#include<stdio.h>
void main()
{
    int count,i,j,k;

    printf("Length of array is: ");
    scanf("%d",&count);

    int arr[count][count][count];

    printf("\nEnter elements of array: \n");

    for(i=0;i<count;i++){
        for(j=0;j<count;j++){
            for(k=0;k<count;k++){
                printf("arr[%d][%d][%d]: ",i,j,k);
                scanf("%d",&arr[i][j][k]);
            }
        }
    }

    printf("\n3D array is: \n");
    for(i=0;i<count;i++){
        for(j=0;j<count;j++){
            for(k=0;k<count;k++){
                printf("%d\t",arr[i][j][k]);
            }
            printf("\n");
        }
    }
}
