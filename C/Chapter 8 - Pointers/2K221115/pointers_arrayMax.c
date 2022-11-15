/*Pointers*/

/*Pointers in array*/

/*Ex. Max of Numbers*/

#include<stdio.h>
void main()
{
    int count, i, *p,*p1;

    printf("\nEnter count of numbers: ");
    scanf("%d",&count);

    int num[count];     /*Array initialisation*/

    printf("\nEnter the array elements\n");
    for(i = 0; i < count; i++){
        printf("num[%d]: ",i);
        scanf("%d",&num[i]);
    }

    p = &num[0];        /*Storing the address of 1st element of array*/

     /*Displaying value and address using pointer*/
     printf("\n");
     for(i = 0; i < count; i++){
         printf("\nValue of num[%d] = %d",i,*p);
         printf("\nAddress of num[%d] = %d\n",i,p);
         p++;
     }

    p1=&num[0];         /*Storing the address of 1st element of array*/

    /*Finding Maximum of numbers*/
    int max = num[0];
    for(i = 0; i < count; i++){
        if(*p > max){
            max = *p1;
        }
        else{
            max = max;
        }
        p1++;
    }

    printf("\nMax = %d\n\n",max);
}