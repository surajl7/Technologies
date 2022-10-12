//Array:

/*

Array Operations - Searching

Ex: Searching number in array

*/

#include<stdio.h>
void main()
{
    int count,i,num,tmp=0;

    printf("\nEnter count of array: ");
    scanf("%d",&count);
    //printf("\n");

    int arr[count];

    printf("\nEnter array elements: \n");

    for(i = 0; i < count; i++){
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }

    printf("\nArray is: ");

    for(i = 0; i < count; i++){
        printf("%d ",arr[i]);
    }

    printf("\n\nEnter number to search in array: ");
    scanf("%d",&num);

    for(i = 0; i < count; i++){
        if(num == arr[i]){
            tmp=1;
            break;
        }
        else{
            tmp=0;
        }
    }
    if(tmp==1){
            printf("\nElement %d is present in array at location arr[%d]\n",num,i);
        }
        else{
            printf("\nElement %d is not present in array\n",num);
        }
}
