// Managing Console I/O Operations

/*
    The function defined a manipulator called show that turns on the flags showpoint and 
    showpos declared in the class ios and sets the field width to 10.

Example:
    illustrates the creation and use of the user-defined manipulators. The program
    creates two manipulators called currency and from which are used in the main
    program.
*/

#include<iostream>
#include<iomanip>

using namespace std;

// user-defined manipulators

ostream & currency(ostream & output)
{
    output << "Rs";
    return output;
}

ostream & form(ostream & output)
{
    output.setf(ios::showpos);
    output.setf(ios::showpoint);    
    output.fill('*');
    output.precision(2);
    output << setiosflags(ios::fixed)
           << setw(10);
    
    return output;
}

int main()
{
    cout << currency << form << 7864.5;

    return 0;
}

/*
NOTE:
    form represents a complex set format function and manipulators.

SUMMARY:
    -   In C++, the I/O system is designed to work with different I/O devices.
        this I/O system supplies an interface called 'stream' to the programmer, which is 
        independent of the actual device being used.
    -   A stream is a sequence of byte and serves as a source or destination for an I/O data.
    -   The source stream that provide data to the program is called the input stream and the
        destination stream that recives output from the program is called the output stream.
    -   The C++ I/O system contains a hierarchy of stream classes used for input and output
        operations. These classes are declared in the header file 'iostream'.
    -   cin represents the input stream connected to the standerd input device and cout 
        represents the output stream connected to the standerd output device.
    -   The istream and ostream classes defined two member functions get() and put() to
        handle the single character I/O operations.
    -   The >> operator is overloaded in the istream class as an extraction operator 
        and the << operator is overloaded in the ostream class as an insertion operator.
    -   We can read and write a line of text more efficiently using the line oriented 
        I/O functions getline() and write() respectively.
    -   The ios class contains the member functions such as width(), precision(),
        fill(), setf(), unsetf() to format the output.
    -   The header file 'iomanip' provides a set of manipulator functions to manipulate 
        output formats. They provide the same features as that of ios class functions.
    -   We can also design our own manipulators for certain special purposes. 
*/