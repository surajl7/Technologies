// Pointer

/*
Pointer Expressions and Pointer Arithmetic

    As discussed, there are a substantial number of arithmetic operations that can be performed
    with pointers with pointers.
    C++ allows pointers to perform the following arithmetic operations:
        -   A pointer can be incremental(++) (or) decremental(--)
        -   Any integer can be added to or subtracted from a pointer 
        -   One pointer can be subtracted from another

    Example:
        int a[6];
        int *aptr;
        apter = &a[0];

    Obviously, the pointer variable, aptr, refers to the base address of the variable a.
    We can increment the pointer variable, shown as follows:
        aptr++ (or)  ++aptr
    This statement moves the pointer to the next memory address. Similarly, we can decrement
    the pointer variable, as follows:
            aptr-- (or) --aptr
    This statement moves the pointer to the previous memory address.
    Also, if two pointer variable point to the same array can be subtracted from each other.
        
    We cannot perform pointer arithmetic on variables which are not stored in contiguous 
    memory location.
*/

// illustrates the arithmetic oprations that we can perform with pointers.

#include<iostream>
// #include<conio>

int main()
{
    int num[] = {56, 75, 22, 18, 90};
    int *ptr;
    int i;

    // clrscr();

    std::cout << "The array value are: \n";
    for(i = 0; i<5; i++)
        std::cout << num[i] << "\n";
    
    /*Initializing the base address of str to ptr*/
    ptr = num;

    /*Printing the value in the array*/
    std::cout << "\nValue of ptr : " << *ptr;
    std::cout << "\n";

    ptr++;
    std::cout << "\nValue of ptr++ : " << *ptr;
    std::cout << "\n";

    ptr--;
    std::cout << "\nValue of ptr-- : " << *ptr;
    std::cout << "\n";

    ptr = ptr+2; 
    std::cout << "\nValue of ptr+2 : " << *ptr;
    std::cout << "\n";

    ptr = ptr - 1;
    std::cout << "\nValue of ptr-1 : " << *ptr;
    std::cout << "\n";

    ptr += 3;
    std::cout << "\nValue of ptr += 3: " << *ptr;
    std::cout << "\n";

    ptr -= 2;
    std::cout << "\nValue of ptr -= 2 : " << *ptr;
    std::cout << "\n";

    // getch();
}

