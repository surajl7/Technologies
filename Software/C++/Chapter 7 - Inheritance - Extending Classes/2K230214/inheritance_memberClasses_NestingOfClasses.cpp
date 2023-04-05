// Inheritance

/*
Member of Classes: Nesting of Classes
    Inheritance is the mechanism of deriving certain properties of one class into another.
    We have seen in detail how this is implemented using the concept of derived classes.
    C++ supports yet another way of inheritance properties of one class into another.
    This approach takes a view that an object can collection of many other objects. That is,
    
    a class can contain objects of other classes as its members as shown below:

    class alpha 
    {
        ...
    };
    class beta 
    {
        ...
    };
    class gamma 
    {
        alpha a;        // a is an object of alpha class 
        beta b;         // b is an object of beta class
        ...
    };

    All objects of gamma class will cotain the object a and b. This kind of relationship is
    called containerships or nesting. Creation of an object that contains another object
    is very diffrent than the creation of an independant object.
    An independant object is created by its constructor when it is declared with arguments.
    On the other hand, a nested object is created in two stages. first, the member objects are 
    created using their respetive constructors and then 'ordinary' members are created.
    This means, constructors of all the member objects should be called before its own constructor
    body is executed. This is accomplished using an initialization list in the constructor of
    the nested class.

    Example:

        class gamma
        {
            private:
                ...
                alpha a;        // a is object of alpha 
                beta b;         // b is object of beta
            public:
                gamma(arglist): a(arglist1), b(arglist2)
                {
                        // constructor body
                }
        };

    arglist is the list of arguments that is to be supplied when a gamma object is defined.
    These parameters are used for initializing the members of gamma.
    arglist1 is the argument list for the constructor of a and arglist2 is the argument list
    for the constructor of b. arglist1 and arglist2 may or may not used the arguments from
    arglist. 
    Remember, a(arglist1) and b(arglist2) are function calls and therefore the arguments de not
    contain the data types. They are simply variables or constants.

    Example:

        gamma(int x, int y, float z) : a(x), b(x,z)
        {
            Assignment section(for ordinary other members)
        }

    We can use as many members objets as are required in a class. For each member object
    we add a constructor call in the initializer list. The constructors of the member objects
    are called in the order in which they are declared in the nested class.
*/


/*
SUMMARY:
    -   The mechanism of deriving a new class from an old class is called inheritance.
        Inheritance provides the concept of reusability.
        The C++ classes can be reused using inheritance.
    -   The derived class inherits some or all of the properties of the base class.
    -   A derived class with only one base class is called single inheritance.
    -   A class can inherit properties from more than one class which is known as multiple
        inheritance.
    -   A class can be derived from another derived class which is known as multilevel
        inheritance.
    -   When the properties of one class are inherited by more than one class, it is called
        hierarchical inheritance.
    -   A private member of a class cannot be inherited either in public mode or in private
        mode.
    -   A protected member inherited in public mode becomes protected, whereas inherited 
        in private mode becomes private in the derived class.
    -   A Public member inherited in public mode becomes public, whereas inherited in private
        mode becomes private in the derived class.
    -   The friend functions and the member functions of a friend class can directly access
        the private and protected data.
    -   The member functions of a derived class can directly access only the protected and
        public data. However, they can access the private data through the member functions
        of the base class.
    -   Multipath inheritance may lead to duplication of inherited members from a 'grandparent'
        base class. This may be avoided by making the common base class a virtual base class.
    -   In multiple inheritance, the base classes are constructed in the order in which 
        they appear in the declaration of the derived class.
    -   In multilevel inheritance, the constructors are executed in the order of inheritance.
    -   A class can contain objects of other classes. This is known as containership or nesting.
*/
