/*
Question 1:
You are given an array, which is [3, 5, 7, 3, 5, 7, 3, 545, 34, 234, 234, 3].
You have to sort it such a that the seventh element is greatest of all,
second element is greater than last element and
second last element is not greater than sum of 8 and sixth element.
*/

/*
Solution --> 

*/

#include<stdio.h>

int swapnum(int*, int*);

int swapnum(int* num1, int* num2){
    *num1 = *num1 + *num2;
    *num2 = *num1 - *num2;
    *num1 = *num1 - *num2;
    
    return 0;
}

int main()
{
    int i, max, *p1, *p2;

    int arr[] = {3, 5, 7, 3, 5, 7, 3, 545, 34, 234, 234, 3};

    /*The size of array*/
    int arr_len = sizeof(arr) / sizeof(arr[0]);    
    printf("\nLength of an array is: %d\n", arr_len);

    /*Display array*/
    printf("\narray is arr[]: \n");
    for (int i = 0; i < arr_len; i++){
        printf("arr[%d] = %d\t", i, arr[i]);
    }
    printf("\n");

    /*Finding the largest element of array*/
    max = arr[0];
    for (int i = 0; i < arr_len; i++){
        if (max < arr[i]){
            max = arr[i];
        }
    }

    /*Finding array element in array*/
    int max_loc;
    for (int i = 0; i < arr_len; i++){
        if (max == arr[i]){
            printf("\nMax element in array is: arr[%d] = %d\n", i, max);
            max_loc = i;
        }
    }

    printf("max location is --> arr[%d]\n", max_loc);

    /*Q1.1: seventh element is greatest of all*/
    printf("\nseventh element is greatest of all: --> \n");
    /*swapping numbers*/
    p1 = &arr[max_loc];
    p2 = &arr[6];

    if (*p1 > *p2){
        swapnum(p1, p2);
    }

    /*Display array*/
    printf("\nnew sorted array array is arr: \n");
    for (int i = 0; i < arr_len; i++){
        printf("arr[%d] = %d\t", i, arr[i]);
    }
    printf("\n\n");

    /*Q1.2: second element is greater than last element*/
    printf("\nsecond element is greater than last element: --> \n");

    p1 = &arr[1];
    p2 = &arr[arr_len-1];

    if(p1 < p1){
        swapnum(p1, p2);
    }

    /*Display array*/
    printf("\nnew sorted array array is arr: \n");
    for (int i = 0; i < arr_len; i++){
        printf("arr[%d] = %d\t", i, arr[i]);
    }
    printf("\n\n");

    /*Q1.3: second last element is not greater than sum of 8 and sixth element.*/
    printf("\nsecond last element is not greater than sum of 8 and sixth element: --> \n");

    p1 = &arr[0];
    p2 = &arr[arr_len - 2];
    if(arr[arr_len - 2] > (arr[7] + arr[5])){
        swapnum(p1, p2);
    }

    /*Display array*/
    printf("\nnew sorted array array is arr: --> \n");
    for (int i = 0; i < arr_len; i++){
        printf("arr[%d] = %d\t", i, arr[i]);
    }
    printf("\n\n");

    return 0;
}
