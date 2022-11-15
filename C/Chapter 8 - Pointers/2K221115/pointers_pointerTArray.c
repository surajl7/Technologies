/*Pointers*/

/*Pointer to Array*/

#include<stdio.h>
void main()
{
    int count, i,*p;

    printf("\nEnter count of array: ");
    scanf("%d",&count);

    int arr[count];

    p = &arr[0]; /*Storing the address of 1st element of array*/

    printf("\n");
    for(i = 0; i < count; i++){
        printf("arr[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    printf("\n");

    for(i = 0; i < count; i++){
        printf("\nValue of arr[%d] = %d",i,*p);
        printf("\nAddress of arr[%d]: %d\n",i,p);
        p++;
    }
    printf("\n");    

}