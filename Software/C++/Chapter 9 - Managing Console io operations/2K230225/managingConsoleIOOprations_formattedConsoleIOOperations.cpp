// Managing Console I/O Oprations:

/*
Formatted Console I/O Operations:
    C++ Support a number of features that could be used for formatting the output.
    These features include:
    -   ios class functions and flags.
    -   Manipulators.
    -   User-defined output functions.

    width() --> To specify the required field size for displaying an output value
    
    precision() --> To specify the number of digits to be displayed after the decimal point
                    of a float value
    fill() --> To specify a character that is used to fill the unused portion of a field
    setf() --> To specify format flags that can control the form of output display (such
                as left-justification and right--justification)
    unsetf() --> To clear the flags specified

    Manipulators:

        Manipulators                       Equivalent ios functions
        ------------------------------------------------------------
        setw()                             width()
        setprecision()                     precision()
        setfill()                          fill()
        setiosflags()                      setf()
        resetiosflags()                    unsetf()


    Defining Field Width: width()
        We can use the width() function to define the width of a field necessary for
        the output of an item.
    Syntax:
        cout.width(w);

    Ex1:
        cout.width(5);
        cout << 543 << 12 << "\n";

        will produce the following output:
        -----------------------------
        |   |   | 5 | 4 | 3 | 1 | 2 |
        -----------------------------

    Ex2:
        cout.width(5);
        cout << 543;
        cout.width(5);
        cout << 12 << "\n";

        will produce the following output:
        -----------------------------------------
        |   |   | 5 | 4 | 3 |   |   |   | 1 | 2 |
        -----------------------------------------    

    NOTE:
        Remember that the field width should be specified for each item separatly.
        C++ never truncates the values and therefore, if the specified field width
        is smaller than the size of the value to be printed, C++ expands the field
        to fit the value.
*/

#include<iostream>

int main()
{
    int items[4] = {10, 8, 12, 15};
    int cost[4] = {75, 100, 60, 99};

    std::cout.width(5);
    std::cout << "ITEMS";
    std::cout.width(8);
    std::cout << "COST";

    std::cout.width(15);
    std::cout << "TOTAL VALUE" << "\n";

    int sum = 0;

    for(int i = 0; i < 4; i++)
    {
        std::cout.width(5);
        std::cout << items[i];

        std::cout.width(8);
        std::cout << cost[i];

        int value = items[i] * cost[i];
        std::cout.width(15);
        std::cout << value << "\n";
        sum = sum + value;
    }

    std::cout << "\n Grand Total = ";

    std::cout.width(2);
    std::cout << sum << "\n";

    return 0;
}

/*
NOTE:
    A field of width two has been used for printing the value of sum and the result is not
    truncated. A good gesture of C++!
*/