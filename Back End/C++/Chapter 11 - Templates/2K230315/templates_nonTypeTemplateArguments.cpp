// Templates

/*
Non-Type Template Arguments:
    We have seen that a template can have multiple arguments. It is also possible to use 
    non-type arguments. That is, in addition to the type argument T, we can also use other
    arguments such as strings, function names, constant expressions and built-in types.
    Consider the following example:

        template<class T, int size>
        class array
        {
            T a[size];      // automatic array initialization
            // ...
            // ...
        };

    This template supplies the size of the array as an argument. This implies that the size 
    of the array is known to the compiler at the compiler time itself. The arguments must be 
    specified whenever a template class is created.

        Example:
            array<int, 10> a1;      // Array of 10 integers
            array<float, 5> a2;     // Array of 5 floats
            array<char, 20> a3;     // String of size 20

    The size is given as an argument to the template class.
*/

/*
SUMMARY:
    -   C++ supports a mechanism known as template to implement the concept of generic
        programming.
    -   Templates allows us to generate a family of classes or a family of fuctions to handle
        different data types.
    -   Template classes and functions eliminate code duplication for the different types and thus
        make the program development easier and more manageable.
    -   We can use multiple parameters in both the class templates and fuction templates.
    -   A specific class created from a class template is called a template class and the process
        of creating a template class is known as instantiation. Similary, a specific fucntion
        created from a function template is called a template fucntion.
    -   Like other functions, template functions can be overloaded.
    -   Member functions of a class template must be defined as function templates using the
        parameters of the class template.
    -   We may also use non-type parameters such basic or derived data types as arguments templates.  
*/