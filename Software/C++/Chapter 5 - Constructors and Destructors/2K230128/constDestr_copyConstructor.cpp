// Constructor and destructor

/*
Copy constructor:
    A copy contructor takes a reference to an object of the same class as itself as an 
    argument.
    Let us consider a simple example of constructing and using a copy constructor as
    shown
*/

#include<iostream>
using namespace std;

class code
{
    private:
        int id;
    public:
        code()  {}              // constructor 1
        code(int a) {id = a;}   // constructor 2
        code(code & x)           // copy constructor
        {
            id = x.id;           // copy in the value
        }

        void display(void)
        {
            cout << id;
        }
};

int main()
{   
    // below show are diffrent ways of calling copy constructor

    code A(10);         // object A is created and initialized 
    code B(A);          // copy constructor called
    code C = A;         // copy constructor called again

    code D;             // D is created, not initialize
    D = A;              // copy constructor not called

    cout << "\n id of A: ";     A.display();
    cout << "\n id of B: ";     B.display();
    cout << "\n id of C: ";     C.display();
    cout << "\n id of D: ";     D.display();

    return 0;
}


/*
NOTE:
    A reference variable has been used as an argument to the copy constructor. We cannot
    pass the argument by value to a copy constructor.

    When no copy constructor is defined, the compiler supplies its own copy constructor.
*/


