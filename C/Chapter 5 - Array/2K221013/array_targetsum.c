//Array

/*

Ex. To find the target sum form array


Questions:
1. How to find length of array in C
--> To find the array's length (how many elements there are),
divide the total array size by the size of one datatype that you are using.

datatype arr_size = sizeof(name_of_array)/sizeof(name_of_array[index]);


*/

#include<stdio.h>
void main()
{
    int targetsum,i,tmp,ts=0;

    int arr[] = {10,15,6,3,1};

    printf("\nEnter value for target sum: ");
    scanf("%d",&targetsum);

    //Length of array
    int arr_len = sizeof(arr)/sizeof(arr[0]);

    printf("\nArray is: ");
    for(i=0;i<arr_len;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    printf("\nThe length of int array is: %d\n",arr_len);

    //sum of elements of array
    int sum = 0;
    for(i=0;i<arr_len;i++){
        sum = sum + arr[i];
    }
    printf("\nSum of elements of array: %d\n\n",sum);


    //Searching element is array
    for(i=0;i<arr_len;i++){
        if(targetsum == arr[i]){
           printf("arr[%d] = %d\n",i,arr[i]);
           tmp = 1;
        }
    }

    if(tmp==1){
        printf("\nTarget sum value is present as element in array\n\n");
    }
    else{
        printf("Target sum value is NOT present as element in array\n\n");

        //to find numbers less than targetsum
        for(i=0;i<arr_len;i++){
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



}
