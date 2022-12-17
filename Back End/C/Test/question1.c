/*QUESTION1*/

/*Write a program to implement sorting of array elements using function*/

#include<stdio.h>

int count;
void arraySortA(int []);
void arraySortD(int []);

void main()
{

    printf("\nEnter count of array: ");
    scanf("%d",&count);

    int arr[count];

    printf("\nEnter array elements: \n");
    for(int i=0; i<count; i++){
        printf("arr[%d]: ",i);
        scanf("%d",&arr[i]);
    }

    printf("\nArray Elements: ");
    for(int i=0; i<count; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    arraySortA(arr);
    arraySortD(arr);

    printf("\n");

}

void arraySortA(int a[count]){
    int max;
    for(int i=0; i<count-1; i++){
        for(int j=0; j<count-1-i; j++){
            if(a[j] > a[j+1]){
                //arr[i] = arr[i] + arr[i+1];
                //arr[i+1] = arr[i] - arr[i+1];
                //arr[i] = arr[i] - arr[i+1];
                max = a[j];
                a[j] = a[j+1];
                a[j+1] = max;
            }
            //printf("a[%d] = %d\n",i,a[i]);
        }
    }

    printf("\nArray After sorting (asending): ");
    for(int i=0; i<count; i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}


void arraySortD(int a[count]){
    int min;
    for(int i=0; i<count-1; i++){
        for(int j=0; j<count-1-i; j++){
            if(a[j] < a[j+1]){
                min = a[j];
                a[j] = a[j+1];
                a[j+1] = min;
            }
        }
    }

    printf("\nArray After sorting (desending): ");
    for(int i=0; i<count; i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
