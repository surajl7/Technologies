// Constructor and Distructors

/*
Constructors with Default Arguments
    It is possible to define constructors with default arguments.
    Ex. the constructor complex() can be declared as follows.
        complex(float real, float imag=0);

    The default value of the argument imag is zero. then, the statement
        complex C(5.0);

    It is important to distinguish between the default constructor A::A() and the default
    argument constructor A::A(int = 0) The default argument constructor can be called
    with either one argument or no arguments. when called with no arguments. it becomes
    a default constructor. when both these forms are used in a class, it causes
    ambiguity for a statement such as

    A a;
    
    The ambiguity is whenever to 'call' A::A() or A::A(int = 0).
*/