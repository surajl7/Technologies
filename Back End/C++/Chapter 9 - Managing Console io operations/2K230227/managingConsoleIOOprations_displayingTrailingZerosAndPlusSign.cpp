// Managing Console I/O Operations

/*
Displaying Trailing Zeros and Plus Sign:
    The setf() can be used with the flag ios::showpoint as a single argument to achieve
    this form of output.
        
        cout.setf(ios::showpoint);      // display trailing zeros

    similarly, a plus sign can be printed before a positive number using the following 
    statement:

        cout.setf(ios::showpos);        // show + sign

    Ex:

        cout.setf(ios::showpoint);
        cout.setf(ios::showpos);
        cout.precision(3);
        cout.setf(ios::fixed, ios::floatfield);
        cout.setf(ios::internal, ios::adjustfield);
        cout.width(10);
        cout << 275.5 << "\n";

    Will produce the following output:
        -----------------------------------------
        | + |   |   | 2 | 7 | 5 | . | 5 | 0 | 0 |
        -----------------------------------------

    The flags such as showpoint and showpos do not have any bit fields and therefor are 
    used as single arguments in setf(). This is possible because the setf() has been declared as
    an overloaded function in the class ios. These flags are not mutually exclusive and 
    therefore can be set or cleared independently.

    flags that do not have bit field

    Flgs                        Meaning
    --------------------------------------------------------
    ios::showbase               Use base indicator on output
    ios::showpos                Print+before positive numbers
    ios::showpoint              Show trailing decimal point and zeroes
    ios::uppercase              Use uppercase letter for hex output
    ios::skipus                 Skip white space on input
    ios::unitbuf                Flush all streams after insertion
    ios::studio                 Flush stdout and stderr after insertion
*/

#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    cout.fill('*');
    cout.setf(ios::left, ios::adjustfield);
    cout.width(10);
    cout << "VALUE";

    cout.setf(ios::right, ios::adjustfield);
    cout.width(15);
    cout << "SQRT OF VALUE" << "\n";

    cout.fill('.');
    cout.precision(4);
    cout.setf(ios::showpoint);
    cout.setf(ios::showpos);
    cout.setf(ios::fixed, ios::floatfield);

    for(int n=1; n<= 10; n++)
    {
        cout.setf(ios::internal, ios::adjustfield);
        cout.width(5);
        cout << n;

        cout.setf(ios::right, ios::adjustfield);
        cout.width(20);
        cout << sqrt(n) << "\n";
    }

    // floatfield changed
    cout.setf(ios::scientific, ios::floatfield);
    cout << "\nSQRT(100) = " << sqrt(100) << "\n";

    return 0;
}

/*
NOTE:
    1. The flag set by setf() remain effective untile they are reset or unset.
    2. A format flag can be reset any number of times in a program.
    3. We can apply more than one format controls jointly on an output value.
    4. The setf() sets the specified flags and leaves others unchanged.
*/