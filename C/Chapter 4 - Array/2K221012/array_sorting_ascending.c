//Array:

/*

Array Operations - Sorting

Ex: Sorting numbers in array - ascending

*/

#include<stdio.h>
void main()
{
    int count,max;

    printf("\nEnter count of array: ");
    scanf("%d",&count);
    //printf("\n");

    int arr[count];

    printf("\nEnter array elements: \n");

    for(int i=0;i< count;i++){
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }

    printf("\nArray before sorting: ");
    for(int i=0;i < count;i++){
        printf("%d ",arr[i]);
    }

    //Array sorting - ascending
    //int max = arr[0];

    for(int i=0; i < count-1;i++){
        for(int j = 0; j <count-1 - i; j++){
            if(arr[j]>arr[j+1]){
                max = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=max;
            }
        }
    }

    printf("\n\nArray after sorting: ");
    for(int i=0;i < count;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
