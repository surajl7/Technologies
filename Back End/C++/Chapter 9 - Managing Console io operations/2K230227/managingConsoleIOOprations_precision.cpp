// Managing Console I/O Operations

/*
Setting Precision: precision()
    -   By default, the floating numbers are printed with six digits after the decimal point.
    
    We can specify the number of digits to be displayed after the decimal point while 
    printing the floating-point numbers.
    This can be done by using the precision() member function as follows:

        cout.precision(d);

    where d is the number of digits to the right of the decimal point.
    
    Ex:
        cout.precision(3);
        cout << sqrt(2) << "\n";
        cout << 3.14159 << "\n";
        cout << 2.50032 << "\n";

    will produce the following output:

        1.141 (truncated)
        3.142 (rounded to the nearest cent)
        2.5   (no trailling zeros)

    Not that, unlike the function width(), precision() retains the setting in effect until
    it is reset. that is why we have declared only one statement for the precision setting
    which is used by all the three outputs.

    We can set different values to different precision as follows:

        cout.precision(3);
        cout << sqrt(2) << "\n";
        cout.precision(5);          // Reset the precision
        cout << 3.14159 << "\n";

    We can also combine the field specification with the precision setting.
    EX:
        cout.precision(2);
        cout.width(5);
        cout << 1.2345;

    The first two statements instruct: "print two digits after the decimal point in
    a field of five character width". Thuse, the output will be:

        ---------------------
        |   | 1 |   | 2 | 3 |
        ---------------------

    Show how the functions width() and precision() are jointly used to control the
    output format.
*/

#include<iostream>
#include<cmath>

int main()
{
    std::cout << "\nPrecision set to 3 digit \n";
    std::cout.precision(3);

    std::cout.width(10);
    std::cout << "VALUE";
    std::cout.width(15);
    std::cout << "SQRT_OF_VALUE" << "\n";

    for(int n = 1; n <= 5; n++)
    {
        std::cout.width(8);
        std::cout << n;
        std::cout.width(13);
        std::cout << sqrt(n) << "\n";
    }

    std::cout << "\n Precision set to 5 digit \n\n";
    std::cout.precision(5);         // precision parameter changed
    std::cout << " sqrt(10) = " << sqrt(10) << "\n\n";

    std::cout.precision(0);         // precision set to default
    std::cout << " sqrt(10) = " << sqrt(10) << " (default setting)\n\n";

    return 0;
}

/*
NOTE:
    Observe the following from the output:
    1. The output is rounded to the nearest cent (i.e., 1.6666 will be 1.67 for two digit
       precision but 1.3333 will be 1.33).
    2. Trailing zeros are truncated.
    3. Precision setting stays in effect untile it is reset.
    4. Default precision is 6 digits.
*/