//Array:

/*

Array Operations - Maximum

Ex: To find the maximum number in array

*/

#include<stdio.h>
void main()
{
    int count,max;

    printf("Enter the size of array: ");
    scanf("%d",&count);
    //printf("\n");

    int arr[count];

    printf("\nEnter array elements: \n");
    for(int i = 0; i <= count; i++){
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }

    printf("\nArray is: ");
    for(int i = 0; i <= count; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    for(int i = 0; i<=count;i++){
        for(int j = 0; j <= count - i;j++){
            if (arr[j]>arr[j+1]){
                max = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = max;
            }
        }
    }
        printf("\nMaximum number in array is: %d\n",max);
}
