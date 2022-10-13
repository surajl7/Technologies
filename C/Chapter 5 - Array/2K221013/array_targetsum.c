//Array

/*

Ex. To find the target sum form array


Questions:
1. How to find length of array in C
*/

#include<stdio.h>
void main()
{
    int count=5,targetsum,i,tmp,ts=0;

    int arr[5] = {10,15,6,3,10};

    printf("\nEnter value for target sum: ");
    scanf("%d",&targetsum);

    printf("\nArray is: ");
    for(i=0;i<count;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    //sum of elements of array
    int sum = 0;
    for(i=0;i<count;i++){
        sum = sum + arr[i];
    }
    printf("\nSum of elements of array: %d\n\n",sum);


    //Searching element is array
    for(i=0;i<count;i++){
        if(targetsum == arr[i]){
           printf("arr[%d] = %d\n",i,arr[i]);
           tmp = 1;
        }
    }

    if(tmp==1){
        printf("\nTarget sum value is present as element in array\n\n");
    }
    else{
        printf("\nTarget sum value is NOT present as element in array\n\n");
    }


    //to find numbers less than targetsum
    for(i=0;i<count;i++){
        if(targetsum>arr[i]){
            printf("arr[%d] = %d\n",i,arr[i]);
            ts = ts + arr[i];
            if(ts>targetsum){
                int ts1 = ts-targetsum;
                ts = ts-ts1;
            }
        }
    }

    printf("\nSum of elements less than targetsum: %d\n",ts);
}
