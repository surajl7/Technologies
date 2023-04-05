//Array:

/*

DataTypes:
1. Built in datatypes
    - int
    - float
    - char
    - ....

2. User defined datatypes
    - Array
    - Structure
    - enum
    - string

Array: Collection of same types(datatypes) of elements

Syntax:
<datatype> <array_name> [<size_of_array>];

Ex. Array creation

int a[5];
            [0][1][2][3][4]
int a[5] = {10, 2, 3, 5,16};

a[0] = 1st
a[1] = 2nd
a[2] = 3rd
...

*/

#include<stdio.h>
void main()
{
    int count,i;

    printf("Enter the size of array: ");
    scanf("%d",&count);

    int a[count];

    printf("\nEnter the array elements: \n\n");

    for(i=0;i<count;i++){
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }

    printf("\nArray is: ");

    for(i=0;i<=count;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
