// Constructors and disctructors

/*
Parameterized constructors:
    The constructors that can take arguments are called parameterized constructors.

Ex.

    class integer
    {
        private:
            int m, n;
        public:
            integer(int x, int y);      // parameterized constructor
            ...
            ...
    };
    integer::integer(int x, int y)
    {
        m = x;
        n = y;
    }

    When a constructor has been parameterized, the object declaration statement such as

    integer int1;

    may not work, we must pass the initial values as aruments to the constructor function
    when an object is declared.
    This can be done in two ways:
        1. By calling the constructor explicitly.
            Ex.
                integer int1 = integer(0, 100);     // explicit call

        2. By calling the constructor implicitly.
            Ex. 
                integer int1(0, 100);               // implicit call
            This method, sometimes called the shorthand method, is used very often as 
            it is shorter, looks better and is easy to implement.
*/

#include<iostream>
using namespace std;

class integer
{
    private:
        int m, n;
    public:
        integer(int, int);      // constructor declared

        void display(void)
        {
            cout << " m = " << m << "\n";
            cout << " n = " << n << "\n";
        }
};

integer::integer(int x, int y)      // constructor defined
{
    m = x;
    n = y;
}

int main()
{
    integer int1(0, 100);            // constructor called implicitly

    integer int2 = integer(25, 75);  // constructor called explicitly

    cout << "\nOBJECT1" << "\n";
    int1.display();

    cout << "\nOBJECT2" << "\n";
    int2.display();

    return 0;
}


/*
NOTE:

The constructor functions can also be defined as inline functions.
Ex.
    class integer
    {
        private:
            int m, n;
        public:
            integer(int x, int y)       // Inline constructor
            {
                m = x;
                y = n;
            }
        ...
        ...
    };

The parameters of a constructor can be of any type except that of the class to which 
it belongs. 
Ex.
    class A
    {
        private:
            ...
            ...
        public:
            A(A);

    };
is illegal.

However, a constructor can accept a reference to its own class as a parameter.
Thus, the statement

    class A
    {
        private:
            ...
            ...
        public:
            A(A &);
    };

is valid. In such a cases, the constructor is called as copy constructor.

*/