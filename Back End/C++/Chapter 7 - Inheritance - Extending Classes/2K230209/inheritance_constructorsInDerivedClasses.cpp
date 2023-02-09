// Inheritance 

/*
Constructors in Derived Classes:
    As we know, the constructors play an important role in initializing object.
    We did not use them earlier in the derived classes for the sake of simplicity.
    One important thing to note here is that, as long as no base class constructor 
    takes any arguments, the derived class need not have a constructor function.
    However, if any base class contains a constructor with one or more arguments, then
    it is mandatory for the derived class to have a constructor and pass the arguments
    to the base class constructors. 
    Remember, while  applying inheritance we usually create object using the derived class.
    Thus, it makes sense for the derived class to pass arguments to the base class constructor.
    When both the derived and base classes contain constructors, the base constructor is
    executed first and then the constructor in the derived class is executed.

    In case of multiple inheritance, the base classes are constructed in the order in 
    which they apper in the declaration of the derived class.
    Similerly, in a multilevel inheritance, the constructors will be executed in the 
    order of inheritance.

    Since the derived class takes the responsbility of supplying initial values to its
    base classes, we supply the initial values that are required by all the classes together,
    when a derived class object is declared. How are they passed to the base class
    constructors so that they can do their job?
    C++ supports a special argument passing mechanisum for such situations.

    The constructor of the derived class recives the entire list of values as it's 
    arguments and passes them on to the base constructors in the order in which they 
    are declared in the derived class. The base constructors are called and executed before
    executing the statements in the body of the derived constructor.

    The general form of defined a derived constructor is:

        Derived-constructor     (Arglist1, Arglist2, ... , ArglistN, Arglist(D)
                                    |          |               |         |
            base1(arglist1), <-------          |               |         |
            base2(arglist2), <------------------               |         |
            ...                                                |         |
            ...                                                |         |
            ...                  arguments for base(N)         |         |
            baseN(arglistN), <----------------------------------         |
            {                                                            |
                Body of derived constructor <-----------------------------
            }


    The header line of derived-constructor fuunctiion contains tow parts seperated by
    a colon(:).
    The first part provided the declartion of the arguments that are passes to the derived
    constructor and the second part lists the function calls to the base constructors.

    Example:
        D(int a1, int a2, float b1, float b2, int d1) :
        A(a1, a2),          // call to constructor A
        B(b1, b2)           // call to constructor B 
        {
            d = d1;         // executes its own body
        }


    Table: Execution of base class constructors

    Method of inheritance               Order of execution

    class B: public A                   A(); base constructor
    {                                   B(); derived constructor
    };  

    class A: public B, public C         B(); base (first)
    {                                   C(); base (second)
    };                                  A(); derived

    class A: public B, public virtual C C(); virtual base
    {                                   B(); ordinary base
    };                                  A(); derived
*/


// Ex. constructor implimentation when the classes are inherited

#include<iostream>

class alpha
{
    private:
        int x;
    public:
        alpha(int i)
        {
            x = i;
            std::cout << "alpha initialized \n";
        }
        void show_x(void)
        {
            std::cout << "x =  " << x << "\n";
        }
};

class beta
{
    private:
        float y;
    public:
        beta(float j)
        {
            y = j;
            std::cout << "beta initialization \n";
        }
        void show_y(void)
        {
            std::cout << "y = " << y << "\n";
        }
};

class gamma : public beta, public alpha
{
    private:
        int m, n;
    public:
        gamma(int a, float b, int c, int d) : alpha(a) , beta(b)
        {
            m = c;
            n = d;
            std::cout << "gamma initialization \n";
        }
        void show_mn(void)
        {
            std::cout << "m = " << m << "\n"
                      << "n = " << n << "\n";
        }
};


int main()
{
    gamma g(5, 10.75, 20, 30);
    std::cout << "\n";

    g.show_x();
    g.show_y();
    g.show_mn();

    return 0;
}