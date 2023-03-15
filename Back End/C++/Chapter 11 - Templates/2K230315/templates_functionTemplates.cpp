// Templates

/*
Function Templates:
    Like class templates, we can also define function templates that could be used to create a 
    family of functions with different argument types. The general format of a function template is:

        template<class T>
        returnType functionName (arguments of type T)
        {
            // ...
            // Body of function
            // with type T
            // wharever appropriate
            // ...
        }
*/

#include<iostream>
using namespace std;

template <class T>

int add(T a, T b)
{
    T c;
    c = a + b;
    return c;
}

int main()
{
    cout << "add is: " << add(2,5) << endl;
    cout << "add is: " << add(7.8,8.6);
}

/*

template<class type>
return_type fun_name(arguments of type)
{
    body
}

*/