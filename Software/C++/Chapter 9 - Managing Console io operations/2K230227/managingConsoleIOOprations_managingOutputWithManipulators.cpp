// Managing Console I/O Operations

/*
Managing Output with Manipulators:
    The header file iomanip provides a set of functions called manipulators which can be
    used to manipulate the output formats.

    Manipulators and their meanings

    Manipulator             Meaning                            Equivalent
    -------------------------------------------------------------------------------
    setw(int w)             Set the filed width to w.           Width()
    setprecision(int d)     Set the floating point precision    precision()
                            to d.
    setfill(int c)          Set the fill character to c.        fill()
    setiosflags(long f)     Set the format flag f.              setf()
    resetiosflags(long f)   Clear the flags specified by f.     unsetf()
    endl                    Insert new line and flush stream.   "\n"

NOTE:
    There is a major difference in the way the manipulators are implemented as 
    compared to the ios member functions. The ios member function return the previous
    format state which can be used later, if necessary. But the manipulators does not
    return the previous formats state. In case, we need to save the old format
    states, we must use the ios member function rather than the manipulators.

    cout.precision(2);          // previous state
    int p = cout.precision(4);  // current state;

    When these statements are executed, p will hold the value of 2 (previous state) and
    the new format state will be 4. 
    We can restore the previous formats states as follows:

        cout.precision(p);      // p = 2
*/

#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    cout.setf(ios::showpoint);

    cout << setw(5) << "n"
         << setw(15) << "Inverse_of_n"
         << setw(15) << "Sum_of_terms\n\n";

    double term, sum = 0;

    for(int n = 1; n <= 10; n++)
    {
        term = 1.0 / float(n);
        sum = sum + term;

        cout << setw(5) << n
             << setw(14) << setprecision(4);
    }

    return 0;
}