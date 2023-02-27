// Managing Console I/O Operations

/*
Formatting Flags, Bit-fields and setf():
    The setf() (setf stands for set flags) function can be used as follows:

        cout.setf(arg1, arg2)

    -   The arg1 is one of the formatting flags defined in the class ios.
    -   The formatting flags specifies the format actions for the output.
    -   Another ios constant, arg2, known as bit field specifies the group
        to which the formatting flags belongs.

    Flags and bit fileds for setf() function

    Format required                 Flag(arg1)          Bit-field(arg2)
    -----------------------------------------------------------------------
    Left-justified output           ios::left           ios::adjustfield
    Right-justified output          ios::right          ios::adjustfiled
    Padding after sign or base      ios::internal       ios::adjustfiled
    Indicator(like +##20)

    Scientific notation             ios::scientific     ios::floatfield
    Fixed point notation            ios::fixed          ios::floatfield

    Decimal base                    ios::dec            ios::basefield
    Octal base                      ios::oct            ios::basefield
    Hexadecimal base                ios::hex            ios::basefield


    Ex:
        cout.fill('*');
        cout.setf(ios::left, ios::adjustfield);
        cout.width(15);
        cout << "TABLE 1" << "\n";

    This will produce the follwing output:
        -------------------------------------------------------------
        | T | A | B | L | E |   | 1 | * | * | * | * | * | * | * | * |
        -------------------------------------------------------------

    The statements:

        cout.fill('*');
        cout.precision(3);
        cout.setf(ios::internal, ios::adjustfield);
        cout.setf(ios::scientific, ios::floatfield);
        cout.width(15);

        cout << -12.34567 << "\n";

    will produce the following output:
        -------------------------------------------------------------
        | - | * | * | * | * | * | 1 | . | 2 | 3 | 5 | e | + | 0 | 1 |
        -------------------------------------------------------------

NOTE:
    The sign is left-justified and the value is right left-justified. The space between
    them is padded with stars. The value is printed accurate to the three decimal places
    in the scientific notation.
*/

