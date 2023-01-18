//Functions 

//Inline functions

/*

Inline functions:
    Save some memory space, which becomes appreciable when a function is likely to be 
    called many times.

    To eliminate the cost of cells to small functions, C++ proposes a new feature called 
    inline function.
    An inline function is a functions that is expanded in line when it is invoked.
    That is compiler replaces the function call with the corresponding functions code
    (something similar to macros expansion). The inline functions are defined as follows:

    inline function-header
    {
        function body
    }

Some of the situations where inline expresion may not work are:
    1. For functions returning values, if a loop, a switch, or a goto exists.
    2. For functions not returning values, if a return statement exists.
    3. If functions contain static variables.
    4. If inline function are recursive.

*/

#include<iostream>
using namespace std;

inline float mul(float, float);
inline double div(double, double);

// int main(int argc, char* argv)
int main()
{
    double a, b;

    cout << "\nEnter 1st number: ";
    cin >> a;

    cout << "Enter 2nd number: ";
    cin >> b;

    cout << "\nMultiplication of " << a << " and " << b << " is: " << mul(a,b) << "\n";

    cout << "\nDivision of " << a << " and " << b << " is: " << div(a,b) << "\n";

    cout << "\n";
    return 0;
}


float mul(float num1, float num2)
{
    return (num1*num2);
}

double div(double num1, double num2)
{
    return (num1/num2);
}