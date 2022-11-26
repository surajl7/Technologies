/*QUESTION2*/

/*Write a program to find the largets element in array using pointer to array concept*/

#include<stdio.h>
void main()
{
    int count, *ptr;

    printf("\nEnter count of array: ");
    scanf("%d",&count);

    int arr[count];

    printf("\nEnter array elements: \n");
    for(int i=0; i<count; i++){
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }

    ptr = &arr[0];
    int max = arr[0];

    printf("\nLargest number in array: ");
    for(int i=0; i<count; i++){
        // if(max < arr[i]){
        //     max = max + arr[i];
        //     arr[i] = max - arr[i];
        //     max = max - arr[i];
        // }

        if(*ptr > max){
            max = *ptr;
        }
        ptr++;
    }
    printf("%d ",max);

    printf("\n\n");    
}