// Templates

/*
Overloading of template functions:
    A template function may be overloaded either by template functions or ordinary functions
    of its name. In such cases, the overloading resolution is accomplished as follows:
    1.  Call an ordinary function that has an exact match.
    2.  Call a template function that could be created with an exact match.
    3.  Try normal overloading resolution to ordinary functions and call the one that matches.

    An error is generated if no match is found. Note that no automatic conversion are applied
    to arguments on the template functions. 
*/

// Ex: Shown how a template function is overloaded with an explicite function.

#include<iostream>
#include<string>

using namespace std;

template<class T>
void display(T x)
{
    cout << "Template display: " << x << "\n";
}

void display(int x)     // overloads the generic display()
{
    cout << "Explicit display: " << x << "\n";
}

int main()
{
    display(100);
    display(12.34);
    display('C');

    return 0;
}