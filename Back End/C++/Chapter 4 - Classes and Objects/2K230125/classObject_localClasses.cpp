// Class and objects

/*
Local Classes:
    Classes can be defined and used inside a function or a block. Such classes are 
    called local classes.

    Ex. 

        void test(int a)    // functions
        {
            ...
            ...
            class students  // local class
            {
                ...
                ...         // class definition
                ...
            };
            ...
            ...
            student s1(a);  // created student object
            ...             // use student object
        } 

NOTE:
    Local classes can use global variables (declared above the function) and static variables
    declared inside the fucntion but cannot use automatic local variables.
    The global variables should be used with scope operator (::).
    
    There are some restrictions in constructing local classes. They cannot have
    static data members and members functions must be defined inside the local classes.
    Enclosing function cannot access the private members of a local class. 
    However, we can achieve this by declaring the enclosing function as a frined.
*/