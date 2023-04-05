//Array:

/*

Array Operations - Minimum

Ex: To find the minimum number in array

*/

#include<stdio.h>
void main()
{
    int count, min;

    printf("\nEnter count of array: ");
    scanf("%d",&count);
    printf("\n");

    int arr[count];

    //Get the array element input form user
    printf("Enter array elements: \n");

    for(int i = 0; i < count; i++){
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }

    //print the array
    printf("\nArray is: ");

    for(int i = 0; i< count;i++){
        printf("%d ",arr[i]);
    }

    //to find the minimum number in array
    min = arr[0];
    for(int i = 0; i<=count;i++){
        if(min>arr[i]){
            min = arr[i];
        }
    }

    printf("\n\nMinimum number in array is: %d\n",min);
}
