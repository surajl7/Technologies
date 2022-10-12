//Array:

/*

Array Operations - Sorting

Ex: Sorting numbers in array - descending

*/


#include<stdio.h>
void main()
{
    int count,min,i,j;

    printf("\nEnter count of array: ");
    scanf("%d",&count);

    int arr[count];

    printf("\nEnter elements in array: \n");

    for(i=0;i<count;i++){
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }

    printf("\nArray before sorting: ");

    for(i=0;i<count;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    //Array sorting - descending
    //min = arr[0];

    for(i=0;i<count-1;i++){
        for(j=0;j<count-1-i;j++){
            if(arr[j]<arr[j+1]){
                min = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = min;
            }
        }
    }

    printf("\nArray after sorting: ");

    for(i=0;i<count;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
