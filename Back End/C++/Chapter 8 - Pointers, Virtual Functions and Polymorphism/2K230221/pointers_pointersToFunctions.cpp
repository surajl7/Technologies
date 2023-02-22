// Pointers

/*
Pointers to Functions:
    Even through pointers to functions (or function pointers) are introduced in C,
    they are widely used in C++ for dynamic binding, and event-based applications.
    The concept of pointer to functions acts as a base for pointers to members, which
    we have discussed.

    The pointer to function is knowns as callback function. We can use these function pointers
    to refer to a function. using function pointers, we can allow a C++ program to select
    a function dynamically at run time. we can also pass a function as a argument to another
    function. Hence, the function is passed as a pointer. The function pointers cannot
    be dereferenced. C++ also allows us to compare two function pointers.

    C++ provides two types of function pointers; function pointers that points to
    static members functions and function pointers that points to non-static member functions
    These two function pointers that points to the non-static member function requires hidden
    argument.

    Like other variables, we can declare a function pointer in C++.
    It takes the following form:

        data_type(*function_name)();
    
    As we know, the data_type is any valid data types used in C++. The function_name
    is the name of a function, Which must be preceded by an asterisk(*). The function_name
    is any valid name of the function.

        Example:
            int(*num_function(int x));
        
    Remember that declaring a pointer only creates a pointer. It does not create actual function.
    For this, we must define the task, which is to be performed by the function. The function
    must have the same return type and arguments.
*/

// Ex: declare and define function pointers in C++.

#include<iostream>

typedef void (*FunPtr)(int, int);

void Add(int i, int j)
{
    std::cout << i << " + " << j << " = " << i + j;
}

void Subtract(int i, int j)
{
    std::cout << i << " - " << j << " = " << i - j; 
}

int main()
{
    FunPtr ptr;

    ptr = &Add;

    ptr(1,2);

    std::cout << "\n";

    ptr = &Subtract;

    ptr(3,2);
}