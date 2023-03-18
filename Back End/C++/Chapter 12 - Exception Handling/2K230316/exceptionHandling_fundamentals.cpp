// Exception Handling

/*
Introduction:
    -   we often come across some peculiar problems other than logic or syntax errors.
        They are known as exceptions.
    -   Exceptions are run time anomalies or unusual conditions that a program may encounter 
        while executing.
    -   Anomalies might include conditions such as division by zero, access to an array
        outside of its bounds, or running out of memory or disk space.
    -   C++ exception handling provides a type-safe, integration approach, for coping with
        the unusual predictable problems that arise while executing a program.

Basics of Exception Handling:
    Exception are two kinds, 
        1.  synchronous exceptions
            e.g. "out-of-range index" and "over-flow"
        2.  asynchronous exceptions
            e.g. The errors that are caused by events beyond the control of the program
                 (such as keyboard interrupts) are called asynchronous exceptions.

    The purpose of the exception handling mechnisum is to provide means to detect and
    report an "exception circumstance" so that appropriate actions can be takem.
    The mechanism suggests a separate error handling code that performs the following 
    tasks:
        1.  Find the problem (Hit the exception).
        2.  Inform that an error has occurred (Throw the exception).
        3.  Receive the error information (Catch the exception).
        4.  Take corrective actions (Handle the exception).

    The error handling code basically consists of two segments, one to detect error and to
    throw exceptions, and the other to catch the exceptions and to take appropriate actions.
*/

/*
Exception Handling Mechanism:
    basically buily upon three keywords namely try, throw, and catch.

    try:
        used to preface a block of statements (surrounded by braces) which may generate exceptions.
    
    throw:
        When an exception is detected, it is thrown using a throw statement in the try block.

    catch:
        A catch block defined by the keyword catch 'catches' the exception 'thrown' by the 
        throw statement in the try block, and handles it appropriately.


Syntax:

    ...
    ...
    try
    {
        ...
        throw exception;            // Block of statements which
        ...                         // detects and throws an exception
        ...
    }
    catch(type arg)                 // Catches exception
    {
        ...                         
        ...                         // Block of statements that
        ...                         // handles the exception
        ...
    }
    ...
    ...
*/

#include<iostream>

using namespace std;

int main()
{
    int a,b;
    cout << "Enter Values of a and b \n";
    cin >> a;
    cin >> b;
    int x = a - b;

    try
    {
        if(x != 0)
        {
            cout << "Result(a/x) = " << a/x << "\n";
        }
        else                // There is an exception
        {
            throw(x);       // Throws int object
        }
    }
    catch(int i)            // Catches the exception
    {
        cout << "Exception caught: x = " << x << "\n";
    }

    cout << "END";

    return 0;
}

/*
                    ----------------
                    | Throw point  |
                    ----------------
                    | Function that|
        ------------| causes an    | <-----------
        |           | exception    |            |
        |           ----------------            |
        |                                       |
        |                                       |   Invoke
        |           ----------------            |   Function
        |           | try block    |            |
        |           ----------------            |
        |           | invokes a    |            |
        |           | function that|-------------
Throw   |           | contains an  |
exeption|           | exception    |
        |           ---------------- 
        |
        |
        |           ----------------
        |           | catch block  |
        |           ----------------
        |           | Catches and  |
        ----------->| handles the  |
                    | exception    |
                    ----------------



*/          

/*
NOTE:
    The try block is immediately followed by the catch block, irrespective of the location
    of the throw point.
*/
