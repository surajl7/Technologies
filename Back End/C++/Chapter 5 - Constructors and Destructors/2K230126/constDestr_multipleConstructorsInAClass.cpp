// Constructors and distructors 

/*
    case1:

        integer();      // no arguments

    constructor itself supplies the data values and no values are passed by the calling 
    program.

    case2:

        ineteger(int, int)  // two arguments

    The function call passes the appropriate values from main().

    C++ permits us to use both tese constructors in the same class. 

    Ex. 
        We could define a class as follows.

    class integer 
    {
        private:
            int m, n;
        public :
            integer() {m = 0; n = 0};   // constructor 1
            integer(int a, int b)       
            {m = a; n = b;}             // constructor 2
            integer(integer & i)
            {m = i.m; n = i.n;}         // constructor 3
    };

    This declares three constructors for an integer object.
    The first constructor receives no arguments, 
    the second receives two integer arguments
    and the third receives one integer object as an argument.


Constructor overloading:
    When more than one constructor function sis defined in a class, we say that the 
    constructor is overloaded.
*/

// Ex. overloaded constructors

#include<iostream>
using namespace std;

class complex
{
    private:
        float x, y;
    public:
        complex(){}                     // constructor no arg
        complex(float a) {x = y = a;}   // constructor-one arg
        complex(float real, float imag) // constructor-two arg
        {x = real; y = imag;}

        friend complex sum(complex, complex);
        friend complex show(complex);
};

complex sum(complex c1, complex c2)     // frined
{
    complex c3;
    c3.x = c1.x + c2.x;
    c3.y = c1.y + c2.y;

    return (c3);
}

complex show(complex c)        // friend
{
    cout << c.x << " + j" << c.y << "\n";
    return 0;
}

int main()
{
    complex A(2.7, 3.5);    // defined and initialize
    complex B(1.6);         // defined and initialize
    complex C;              // define

    C = sum(A, B);          // sum() is a friend
    cout << "A = "; show(A);
    cout << "B = "; show(B);
    cout << "C = "; show(C);

    // Another way to give initial values (second method)

    complex P,Q,R;          // define P, Q and R

    P = complex(2.5, 3.9);      // initialize P
    Q = complex(1.6, 2.5);      // initialize Q
    R = sum(P, Q);

    cout << "\n";
    cout << "P = "; show(P);
    cout << "Q = "; show(Q);
    cout << "R = "; show(R);

    return 0;
}