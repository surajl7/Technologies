//Array

/*

Ex. Array matrix multiplication

*/

#include<stdio.h>
void main()
{
    int arrlen1,arrlen2,i,j,k;

    printf("\nEnter length of 1st array: ");
    scanf("%d",&arrlen1);

    printf("\nEnter length of 2nd array: ");
    scanf("%d",&arrlen2);

    int arr1[arrlen1][arrlen1];
    int arr2[arrlen2][arrlen2];

    printf("\nEnter elements for 1st array matrix: \n");
    for(i=0;i<arrlen1;i++){
        for(j=0;j<arrlen1;j++){
            printf("arr[%d][%d]: ",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }

    printf("\nEnter elements for 2nd array matrix: \n");
    for(i=0;i<arrlen2;i++){
        for(j=0;j<arrlen2;j++){
            printf("arr2[%d][%d]: ",i,j);
            scanf("%d",&arr2[i][j]);
        }
    }

    printf("\n1st Array matrix is: \n");
    for(i=0;i<arrlen1;i++){
        for(j=0;j<arrlen1;j++){
            printf("%d\t",arr1[i][j]);
        }
        printf("\n");
    }

    printf("\n2nd Array matrix is: \n");
    for(i=0;i<arrlen2;i++){
        for(j=0;j<arrlen2;j++){
            printf("%d\t",arr2[i][j]);
        }
        printf("\n");
    }

    if(arrlen1 == arrlen2){

        //Array matrix multiplication:
        int arrmul[arrlen1][arrlen2];

        printf("\nArray matrix multiplication is: \n");
        for(i=0;i<arrlen1;i++){
            for(j=0;j<arrlen1;j++){
                arrmul[i][j] = 0;
                for(k=0;k<arrlen1;k++){
                    arrmul[i][j] = arrmul[i][j] + arr1[i][k] * arr2[k][j];
                }
            }
        }

        //Multiplication array
        //printf("\nMultiplication array is: \n");
        for(i=0;i<arrlen1;i++){
            for(j=0;j<arrlen1;j++){
                printf("%d\t",arrmul[i][j]);
            }
            printf("\n");
        }
    }
}
