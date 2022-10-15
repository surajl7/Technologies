//Array

/*
Ex. Doing calcules operations on array (i.e. Addition, Subtraction, Multiplication, Division)

*/

#include<stdio.h>
void main()
{

    int count1,count2;

    printf("\nEnter length of 1st array: ");
    scanf("%d",&count1);

    printf("\nEnter size of 2nd array: ");
    scanf("%d",&count2);

    int arr1[count1];
    int arr2[count2];

    printf("\nEnter int elements for 1st array: \n");

    for(int i=0;i<count1;i++){
        printf("arr1[%d] = ",i);
        scanf("%d",&arr1[i]);
    }

    printf("\nEnter int elements for 2nd array: \n");

    for(int i=0; i<count2;i++){
        printf("arr2[%d] = ",i);
        scanf("%d",&arr2[i]);
    }

    printf("\n");

    printf("1st Array is: ");
    for(int i=0;i<count1;i++){
        printf("%d ",arr1[i]);
    }

    printf("\n");

    printf("2nd Array is: ");
    for(int i=0; i<count2;i++){
        printf("%d ",arr2[i]);
    }

    printf("\n");

    printf("\nOutput Array is: \n");
    int arr3[5];

    if(count1 == count2){
        printf("Sum of Array is: ");
        for(int i=0; i<count1; i++){
            arr3[i] = arr1[i] + arr2[i];
            printf("%d ",arr3[i]);
        }
        printf("\nSubtraction of Array is: ");
        for(int i=0; i<count1; i++){
            arr3[i] = arr1[i] - arr2[i];
            printf("%d ",arr3[i]);
        }
        printf("\nMultiplication of Array is: ");
        for(int i=0; i<count1; i++){
            arr3[i] = arr1[i] * arr2[i];
            printf("%d ",arr3[i]);
        }
        printf("\nDivision of Array is: ");
        for(int i=0; i<count1; i++){
            arr3[i] = arr1[i] / arr2[i];
            printf("%d ",arr3[i]);
        }
    }
    printf("\n");
}
