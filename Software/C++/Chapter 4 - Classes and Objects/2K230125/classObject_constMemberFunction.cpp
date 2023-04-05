// Class and Objects

/*
const Member Functions:
    If a member function does not alter any data in the class, then we may declare it as
    a const member function as follows:

        void mul(int, int) const;
        double get_balance() const;

    The qualifier const is appended to the function prototype (in both declaration and
    definition). The compiler will generate an error message if such functions try 
    to alter the data values.
*/