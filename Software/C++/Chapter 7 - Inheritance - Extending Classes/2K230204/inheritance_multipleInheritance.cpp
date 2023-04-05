// Inheritance

/*
Multiple Inheritance:
    A class can inherit the attributes of two or more classes as shown, This is known 
    as multiple inheritance.
    Multiple inheritance allows us to combine the features of several existing classes
    as a starting point for defining new classes.
    It is like a chiled inheritance the pysical feature of one parent and the 
    intelligence of another.

            -----------       -----------                   -----------
            |   B-1   |       |   B-2   |       .....       |   B-n   |       
            -----------       -----------                   -----------
                 |                 |                              |
                 |                 |                              |
                 |                 |                              |
                 |                 ---------   --------------------
                 ------------------------|  |  |                  
                                        ---------
                                        |   D   |
                                        ---------

    fig. Multiple Inheritance 


    The syntax of a derived class with multiple base classes is as follows:

        class D : visibility B-1, visibility B-2 ...
        {
            ...
            ...     (Body of D)
            ...
        };

    Where, visibility may be either public or private. The base classes are seperated by commas.
*/

#include<iostream>

// BASE CLASS 1 ----------------------------------------------------------------

class M
{
    protected:
        int m;
    public:
        void get_m(int);
};

// BASE CLASS 2 ----------------------------------------------------------------

class N
{
    protected:
        int n;
    public:
        void get_n(int);
};


// DERIVED CLASS ---------------------------------------------------------------

class P : public M, public N
{
    public:
        void display(void);
};


// Function Definations ---------------------------------------------------------

void M :: get_m(int x)
{
    m = x;
}

void N :: get_n(int y)
{
    n = y;
}

void P :: display(void)
{
    std::cout << "m = " << m << "\n";
    std::cout << "n = " << n << "\n";
    std::cout << "m*n = " << m*n << "\n";
}


// MAIN METHOD ------------------------------------------------------------------

int main()
{
    P p;

    p.get_m(10);
    p.get_n(20);
    p.display();

    return 0;
}

