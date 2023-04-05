// Pointers, Virtual Functions and Polymorphism


/*
Pointers:
    -   Pointers offer a unique approach to handle data in C and C++.
    -   Pointer is a derived datatype that refers to another data variable by storing 
        the variables memory address rather then data. A pointer variable defines where to
        get the value of a specific data variable insted of defining actual data.
    -   Like C, a pointer variable can also refer to (or point to) another pointer in C++.
        However, it often points to a data variable. Pointers provide an alternative 
        approach to access other data objects.


Declaring and Initializing Pointers:

        data-type *pointer-variable;

    Here, pointer-variable is the name of the pointer, and the data-type refers to one of
    the valid C++ data types, such as int, char, float and so on. 
    The data-type is followed by an asterisk(*) symbol, which distinguishes a pointer
    variable from other variable to the complier.

NOTE:
    We can locate asterisk(*) immediatly before the pointer variable, or between the data
    type and the pointer variale, or immediately after the data type.
    It does not cause any effect in the execution process.

    -   Pointer is able to point to only one data type at the specific time.
    -   Like other programming languages, a variable must be initialized before 
        using it in a C++ program.
    
    Example:

       int *ptr, a; // declaration
       ptr = &a;    // initialization

    -   The pointer variable, ptr, contains the address of the variable a Like C,
        we use the address of operator or referance oprator i.e. '&' to retrieve the address
        of a variable. The second statement assigns the address of the variable a to the pointer ptr.

        We can also declare a pointer variable to point to another pointer, similar to that os C.
        That is, a pointer variable contains address of another pointer.
*/

#include<iostream>
// #include<conio.h>

int main()
{
    int a, *ptr1, **ptr2;
    // clrscr();
    ptr1 = &a;
    ptr2 = &ptr1;

    std::cout << "The address of a: " << ptr1 << "\n";
    std::cout << "The address of ptr1: " << ptr2 << "\n";

    std::cout << "\n";

    std::cout << "After incrementing the address values: \n\n";

    ptr1 += 2;

    std::cout << "The address of a: " << ptr1 << "\n";

    ptr2 += 2;

    std::cout << "The address of ptr1: " << ptr2 << "\n";

    return 0;
}


/*

0x8fb6fff4 - 2411134964
0x8fb6fff2 - 2411134962

0x8fb6fff8 - 2411134968
0x8fb6fff6 - 2411134966


    We can use void pointer, known as generic pointers, which refers to variables of any
    data type. Before using void pointers, we must type cast the variables to the specific data
    types that they point to.

NOTE:
    The pointrs, which are not initialized in a program, are called Null Pointers.
    Pointers of any data type can be assigned with one value i.e. '0' called null address.
*/