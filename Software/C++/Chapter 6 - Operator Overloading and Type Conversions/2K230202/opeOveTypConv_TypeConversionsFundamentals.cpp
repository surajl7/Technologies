// Operator Overloading and Type Conversions

/*
Type Conversions:
    Since the user-defined data types are designed by us to suit our requirments,
    the compiler does not support automatic typeconversions for such data types.
    We must, therefore design the conversion routines by ourselves, if such operations
    are required.

    Three types of situations might aries in the data conversion between uncompatible
    types:
        1. Conversion from basic type to class type.
        2. Convertion from class type to basic type.
        3. Conversion from one class type to another class type.
*/

/* 
1. Basic to class type 
    Basic (datatype) to classtype conversions
        e.g. int type to a <class_name> type
    The constructor used for the type convertion take a single argument whose type
    is to be converted.
    the left-hand operand of = operator is always a class object. Therefor, we can also
    accomplish this conversion using an overloaded = operator.


2. Class type to basic type
    Classtype to basic (datatype)
        e.g. <class_type> to float

    The general form of an overloaded casting operator function, usually referred to as
    a conversion function, is:

        operator typename()
        {
            ...
            ...         (function statements)
            ...
        }

    This function converts a class type data to typename. For example, the 
    operator double() converts a class object to type double, the operator int()
    converts a class type object to type int, and so on.

    The casting operator function should satisfy the following conditions:
        -   It must be a class member
        -   It must not specify a return type.
        -   It must not have any arguments.

    Since it is a member function, it is invoked by the object and therefor, the values
    used for conversion inside the functions belongs to the object that invoked the 
    function. This means that the function does not need an argument.


3. One Class to Another Class Type
    We have just seen data converstion techniques from a basic to class type and a class
    to basic type. But there are situations where we would like to convert one class
    type data to another class type.

    Ex. objX = objY;        // objects of different types

    Since the convertion takes place from class Y to class X, Y is known as the source
    class and X is known as the destination class.
    Such convertions beteween objects of different classes can be carried out by either
    a constructor or a conversion function. The compiler treats them the same way.
    The convertion form to use is depends upon where we want the type-converstion function
    to be located in the source class or int the destination class.

    Type Convertions
    Convertion required         Conversion takes place in 
                                Source class                Destination class
    ---------------------------------------------------------------------------
    Basic --> class             Not applicable              Constructor
    Class --> basic             Casting operator            Not applicable
    Class --> class             Casting operator            Constructor

    When a conversion using a constructor is performed in the destination class,
    we must be able to access the data members of the object sent (by the source class)
    as an argument. Since data memebers of the source class are private, we must use special
    access functions in the source class to facilitated its data flow to the 
    destination class.
*/


/*
SUMMARY:
    -   Operator overloading is one of the important features of C++ language.
        It is called compile time polymorphism.
    -   Using overloading features we can add two users defined data types such as 
        objects, with the same synatx, just as basic types.
    -   We can overload almost all the C++ operators except the following:
        -   class member access operators(.,.*)
        -   scope resolution operator(::)
        -   size operator(sizeof)
        -   conditional operator(?:)
    -   Operator overloading is done with the help of a special function, called operator 
        function, which describes the special task to an operator.
    -   There are certain restrictions and limitations in overloading operators.
        Operator function must either be member function (non-static) or frined function.
        The overloading operator must have at least one operand that is of user-defined type.
    -   The compiler does not support automatic type conversions for the users defined data
        types. We can use casting operator functions to achive this.
    -   The casting operator function should satisfy the following conditions:
        -   It must be a class member.
        -   It must not specify a return type.
        -   It must not have any arguments.
*/