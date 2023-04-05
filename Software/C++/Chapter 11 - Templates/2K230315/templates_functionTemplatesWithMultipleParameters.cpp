// Template

/*
Function Templates with Multiple Parameters:
    Like templates classes, we can use more than one generic data type in the template statement,
    using a comma-separated list as shown below:

        template<class T1, class T2, ...>
        returnType functionName(arguments of types T1, T2, ...)
        {
            ...
            ...     (Body of function)
            ...
        }
*/

// illustrates the concept of using two generic types in template functions.

// Ex.: Function with two Generic Types

#include<iostream>
#include<string>

using namespace std;

template<class T1, class T2>
void display(T1 x, T2 y)
{
    cout << x << " " << y << "\n";
}

int main()
{
    display(1999, "EBG");
    display(12.34, 1234);
    return 0;
}

