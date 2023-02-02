// Operator overloading and Type conversions

// Fundamentals

/*
Operator overloding:
-   The mechanism of giving special meanings to an operator is known as operator overloding.
-   Operator overloding provides a flexible option for the creation of new definitions
    for most of the c++ operators.

-   We can overload (give additional meaning to) all the C++ operators except the 
    following.
        -   Class member access operators(.,.*)
        -   Scope resolution operator(::)
        -   Size operator (sizeof)
        -   Conditional operator(?:)

NOTE:
    Although the semantics of an operator can be extended, we cannot change it's
    syntax, the grammatical rules that govern its use such as the number of operands,
    precedence and associativity. 
    For example, the multiplication operator will enjoy higher precedence then 
    the addition operator. 
    Remember, when an operator is overloaded, it's original meaning is not lost.
    For instance, the operator +, which has been overloaded to add two vectors,
    can still be used to add two integers.
*/

/*
Definig Operator Overloading:
    To define an additional task to an operator, we must specify what it means in
    relation to that class to which the operator is applied.
    This is done with the help of special function, called "operator function", which 
    describes the task. 
    
    The general form of an operator function is:

    <return_type> <class_name> :: operator <operator_symbol> (<argument_list>)
    {
        Function body           // task defined
    }



Examples:
    considering vector as a class name -->

    vector operator +(vector);                // vector addition
    vector operator -();                      // unary minus
    friend vector operator +(vector, vector); // vector addition
    frined vector operator -(vector);         // unary minus
    vector operator -(vector &a);             // subtraction
    int operator ==(vector);                  // comarison
    friend int operator ==(vector, vector)    // comparison          

vector is a datatype of class and may represent both magnitude and direction
(as in physics and engineering) or a series of points called elements (as in mathematicas)


The process of overloading involves the following steps:
    1. Create a class that defines the data type that is to be usedin the overloding operaion.
    2. Declare the operator function operator op() in the public part of the class.
       it may be either a member function or a friend function.
    3. Defined the operator function to implements the required operations.

Overloaded operator functions can be invoked by expressions such as 

    op x or x op

for unary operators and 

    x op y

for binary operators. op x (or x op) would be interpreted as 

    operator op (x)

in case of friend functions. When both the forms are declared, standared argument 
matching  is applied to resolve any ambiguity.
*/