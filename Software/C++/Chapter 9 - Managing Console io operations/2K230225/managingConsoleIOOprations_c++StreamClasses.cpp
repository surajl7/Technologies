// Managing Console I/O Operations

/*
C++ Stream Classes:
    The C++ I/O system contains a hierarchy of classes that are used to define various 
    streams to deal with both the console and disk files. these classes are called stream classes.
    These classes are declared in the header file iostream. This file should be include in
    all the programs that communicate with the console unit.

                            --------
                            | iso  |
                            --------
                             |  |  |  
              ----------------  |  -----------------
              |                 | Pointer          |
             \ /               \ /                \ /
        -----------       -------------        -----------
        | istream |       | streambuf |        | ostream |
        -----------       -------------        -----------
              |   |                              |     |
              |   |                              |     |
              |   -----------      ---------------     |
              |             |      |                   |
              |           -------------                |
              |           | iostream  |                |
              |           -------------                |
              |                  |                     |
             \ /                \ /                   \ /
    ---------------------- ----------------------- ----------------------
    | istream_withassign | | iostream_withassign | | ostream_withassign |
    ---------------------- ----------------------- ----------------------

                fig: Stream classes for console I/O operations

    As seen in the fig, ios is the base class for istream (input stream) and ostream
    (output stream) Which are, in turn, base classes for iostream (input/output stream).
    The class ios is declared as the virtual base class so that only one copy of its
    members are inherited by the iostream.

    The class ios provides the basic support for formatted and unformatted I/O operations.
    The class istream provide the facilities for formatted and unformatted input while
    the class ostream (through inheritance) provides the facilities for formatted output.
    Three classes, namely, istream_withassign, ostream_withassign, and iostream_withassign add
    assignment operators to these classes.

*/

/*
Unformatted I/O Operations:
    Overloaded Operators >> and <<
    We have used the objects cin and cout (pre-defined in the iostream file) for the input
    and output of data of various types.
    This has been made possible by overloading the operators >> and << to recognize all
    the basic C++ types.

    Stream classes for console operations
    
    ios (General input/output stream class):
        -   Contains basic facilities that are used by all other input and output classes
        -   Also contains a pointer to a buffer object (streambuf object)
        -   Declares constants and functions that are necessary for handling formatted 
            input and output operations.
    
    istream (input stream)
        -   Inherits the properties of ios
        -   Declares input functions such as get(), getline(), read()
        -   Contains oveloaded extraction operator >>

    ostream (output stream)
        -   Inherits the properties of ios
        -   Declares output function put() and write()
        -   Contains overloaded insertion operator <<
    
    iostream (input/output stream)
        -   Inherits the properties of ios istream and ostream through multiple inheritance 
            and thus contains all the input and output functions.

    streambuf
        -   Provides an interface to physical devices through 
            buffers
        -   Acts as a base for filebuf class used ios files
*/

/*
put() and get() Functions:
    The classes istream and ostream defined two members function get() and put() respectively
    to handle the single character input/output operations. There are two types of get() fuunctions.
    We can use both get(char *) and get(void) prototypes to fetch a character including the
    blank space, tab and the newline character. The get(char *) version assigns the input
    character to its argumenta and the get(void) version returns the input charcter.

    Since these functions are members of the input/output streams classes, we must invoke
    them using an appropriate object.

    Example:
        char c;
        cin.get(c);     // get a character from keyboard
                        // and assign it to c
        while(c != '\n')
        {
            cout << c;  // display the charcter on screen
            cin.get(c); // get another character
        }

    This code reads and displays a line of text (terminated by a newline charcter).
    Remember, the operator >> can also be used to read a charcter but it will skip the
    white spaces and newline character. The above while loop will not work properly if the 
    statement 

        cin >> c;

    is used in place of

        cin.get(c);
*/

// Character I/O with get() and put()

#include<iostream>

int main()
{
    int count = 0;
    char c;

    std::cout << "INPUT TEXT\n";

    std::cin.get(c);

    while(c != '\n')
    {
        std::cout.put(c);
        count++;
        std::cin.get(c);
    }
    std::cout << "\nNumber of characters = " << count << "\n";

    return 0;
}

/*
NOTE:
    When we type a line of input, the text is sent to the program as soon as we press the
    RETURN key. The program then reads one character at a time using the statement
    cin.get(c); and display it using the statement cout.put(c);. The process is terminated
    when the newline character is encountered.
*/