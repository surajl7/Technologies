// Pointer

/*
Using pointers with Arrays and Strings:
    Pointer is one of the efficient tools to access elements of an array.
    Pointers are useful to allocate arrays dynamically, i.e. we can decide the array
    size at runtime.
    To achive this, we use the functions, namely malloc() and calloc().
    Accessing an array with pointers is simpler than accessing the array index.

    In general, there are some differences between pointers and arrays;
    arrays refer to a block of memory space, whereas pointers do not refer to any section of
    memory. The memory addresses of arrays cannot be changed, whereas the content of the 
    pointer variables, such as the memory addresses that it refer to, can be changed.

    Even though there are subtle diffrences between pointers and arrays, they have a strong
    relationship between them.

NOTE:
    There is no error checking of array bounds in C++. Suppose we declare an array
    of size 25. the compiler issues no warnings if we attempt to access 26th location.
    It is the programmer's task to check the array limits.

    We can declare the pointer to arrays as follows:

        int *nptr;
        nptr = number[0];

        or

        nptr = number;

    Here, nptr points to the first element of the integer array, number[0]. also, consider
    the following example:

        float *fptr;
        fprt = price[0];

        or

        fptr=price;

    Here, fptr points to the first element of the array of the float, price[0]. let us
    consider an example of using pointers to access an array of numbers and sum up the 
    even numbers of the array. initially, we accept the count as an input to know the number
    of inputs from the users. We use pointer variable, ptr to access each element of the array.
    The inputs are checked to indentify the even numbers. Then the even numbers are added,
    and stored in the variable, sum. If there is no  even numbers in the array, the output will be 0.
*/

// illustrates how to access the array contents using pointers

#include<iostream>

int main()
{
    int numbers[50], *ptr;
    int n;

    std::cout << "\nEnter the count: ";
    std::cin >> n;

    std::cout << "\nEnter the numbers one by one\n";

    for(int i = 0; i < n; i++)
        std::cin >> numbers[i];
    
    /* Assigning the base address of numbers to ptr and initializing the sum to 0 */

    // ptr = numbers;       /*Method 1*/
    ptr = &numbers[0];      /*Method 2*/

    int sum = 0;

    /* Check out for even inputs and sum up them */
    for(int i = 0; i < n; i++)
    {
        if (*ptr %2 == 0)
        {
            sum = sum + *ptr;
        }
        ptr++;
    }

    std::cout << "\nSum of even numbers: " << sum;
    std::cout << "\n\n";

}