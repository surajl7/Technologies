// Pointers

/*
Manipulation of Pointers:
    As discussed earlier, we can manipulate a pointer with the indirection operator.
    i.e. '*'. Which is also known as dereferance operator. with this oprator, we can 
    directly access the data variable content.
    
    It takes the following general form:

        *pointer-variable
    
    As we know, dereferencing a pointer allows us to get the content of the memory location
    that the pointer points to.
    After assigning address of the variable to a pointer, we may want to change the content 
    of the variable.
    Using the dereference operator, we can change the contents of the memory location.
*/

#include<iostream>

int main()
{
    int a=10, *ptr;

    ptr = &a;

    std::cout << "The value of a is: " << a;

    std::cout << "\n\n";

    *ptr = (*ptr)/2;

    std::cout << "The value of a is: " << (*ptr);

    std::cout << "\n\n";
}

/*
Caution:
    Before dereferencing a pointer, it is essential to assign a value to the pointer. if
    we attempt to dereference an uninitialized pointer, it will cause runtime error by
    referreing to any other location in memory.
*/