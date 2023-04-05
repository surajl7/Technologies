// Constructors and Destructors 

/* 
Constructors:
    A constructor is a "special" member function whose task is to initialize the object
    of it's class.
    It is special because its name is the same as the class name.
    The constructor is invoked whenever an object of its associated class is created.
    It is called constructor because it constructs the value of data members of the class.

Types of constructor:
    1. default constructor
    2. parameterzied constructor
    3. copy constructor

A constructor is declared and defined as follows:
    // class with a constructor

    class integer
    {
        private:
            int m, n;
        public:
            integer(void);      // constructor declared
            ...
            ...
    };

    integer :: integer(void)    // constructor defined
    {
        m = 0;
        n = 0;
    }


1. default constructor:
    A constructor that accepts no parameters is called the default constructor.
    The default constructor for class A is A::A(). 
    If no such a constructor is defined, then the compiler supplies a default 
    constructor. Therefor a statement such as

    A a;

    invokes the default constructor of the compiler to create the object a.

    The constructor function have some special characteristics.
    These are:
        -   They should be decalared in the public section.
        -   They are invoked automatically when the object are created.
        -   They do not have return types, not even void and therefor, and they cannot
            return the values.
        -   They cannot be inherited, through a derived class can call the base class
            constructor.
        -   Like other C++ functions, they can have default arguments.
        -   Constructors cannot be virtual. (Meaning of virtual will be discussed later
            in chapter 9.)
        -   We cannot refer to their addresses.
        -   An object with a constructor (or destructor) cannot be used as a member of union.
        -   They make 'implicit calls' to the operators new and delete when memory allocation
            is required.

    Remeber when a constructor is declared for a class, initialization of the class object
    becomes mandatory.  

*/