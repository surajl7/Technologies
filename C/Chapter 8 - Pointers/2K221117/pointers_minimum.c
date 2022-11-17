//Pointers

/*Ex. Minimum element of array*/

#include<stdio.h>
void main()
{
    int count, i, min, *p;

    printf("\nEnter the count of array: ");
    scanf("%d", &count);

    int arr[count];

    printf("\nEnter array elements: \n");
    for(i=0; i<count; i++){
        printf("arr[%d]: ",i);
        scanf("%d",&arr[i]);
    }

    printf("\nArray Elements: ");
    for(i=0;i<count;i++){
        printf("%d ",arr[i]);
    }

    printf("\nArray minimum element: ");

    p = &arr[0];
    min = arr[0];

    for(i=0; i<count; i++){
        if(*p < min){
            min = *p;
        }
        else{
            min = min;
        }
        p++;
    }
    printf("%d ",min);
    printf("\n\n");
}