//Function

//Array as Argument

//Ex. Addition of n numbers

#include<stdio.h>

int add(int[],int); //Arguments --> (<array_datatype>[], <arraySize_datatype>)

void main()
{
    int count,z;                //Global variables -- Variables outside the function

    printf("\nEnter count of numbers to be added: ");
    scanf("%d",&count);

    int arr[count];

    printf("\nEnter numbers: \n");
    for(int i=0;i<count;i++){
        //printf("arr[%d]: ",i);
        scanf("%d",&arr[i]);
    }

    z = add(arr,count);
    printf("\nSum of numbers is: %d\n",z);
}

int add(int rra[], int tnuoc){
    int sum;                    //Local variables -- variables within a function

    for(int i = 0; i<tnuoc; i++){
        sum = sum + rra[i];
    }

    return sum;
}


