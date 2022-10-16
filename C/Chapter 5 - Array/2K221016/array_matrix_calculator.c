//Array

/*

Ex. Array matrix calculator

*/

#include<stdio.h>
void main()
{
    int arrlen1,arrlen2,i,j;

    printf("\nEnter length of 1st array: ");
    scanf("%d",&arrlen1);

    printf("\nEnter length of 2nd array: ");
    scanf("%d",&arrlen2);

    int arr1[arrlen1][arrlen1];
    int arr2[arrlen2][arrlen2];

    printf("\nEnter elements for 1st array matrix: \n");
    for(i=0;i<arrlen1;i++){
        for(j=0;j<arrlen1;j++){
            printf("arr1[%d][%d]: ",i,j);
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

    printf("\n1st 2D Array matrix is: \n");
    for(i=0;i<arrlen1;i++){
        for(j=0;j<arrlen1;j++){
            printf("%d\t",arr1[i][j]);
        }
        printf("\n");
    }

    printf("\n2nd 2D Array matrix is: \n");
    for(i=0;i<arrlen2;i++){
        for(j=0;j<arrlen2;j++){
            printf("%d\t",arr2[i][j]);
        }
        printf("\n");
    }

    if(arrlen1 == arrlen2){

        int arradd[arrlen1][arrlen1]; //Addition matrix
        int arrsub[arrlen1][arrlen1]; //Subtraction matrix
        int arrdiv[arrlen1][arrlen1]; //Division matrix
//        int arrmul[arrlen1][arrlen1]; //Multiplication matrix

        for(i=0;i<arrlen1;i++){
            for(j=0;j<arrlen1;j++){
                arradd[i][j] = arr1[i][j] + arr2[i][j]; //Matrix Addition
                arrsub[i][j] = arr1[i][j] - arr2[i][j]; //Matrix Subtraction
                arrdiv[i][j] = arr1[i][j] / arr2[i][j]; //Matrix Division
//                arrmul[i][j] = arr1[i][j] * arr2[i][j]; //Matrix Multiplication
            }
        }

        //Array matrix addition
        printf("\nArray matrix addition is: \n");
        for(i=0;i<arrlen1;i++){
            for(j=0;j<arrlen1;j++){
                printf("%d\t",arradd[i][j]); //Matrix Addition
            }
            printf("\n");
        }

        //Array matrix Subtraction
        printf("\nArray matrix subtraction is: \n");
        for(i=0;i<arrlen1;i++){
            for(j=0;j<arrlen1;j++){
                printf("%d\t",arrsub[i][j]); //matrix Subtraction
            }
            printf("\n");
        }

        //Array matrix Division
        printf("\nArray matrix Division is: \n");
        for(i=0;i<arrlen1;i++){
            for(j=0;j<arrlen1;j++){
                printf("%d\t",arrdiv[i][j]); //matrix Division
            }
            printf("\n");
        }

/*        //Array matrix Multiplication
        printf("\nArray matrix Multiplication is: \n");
        for(i=0;i<arrlen1;i++){
            for(j=0;j<arrlen1;j++){
                printf("%d\t",arrmul[i][j]); //matrix Multiplication
            }
            printf("\n");
        }
*/  }
}
