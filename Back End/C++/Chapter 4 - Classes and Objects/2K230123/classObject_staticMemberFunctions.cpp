// Class and Objects

/*
Static Member Functions:
    Like static member variable, we can also have static member functions. A member function
    A Member function that is declared static has the following properties:

    - A static function can have access to only other static members (functions or 
    variables) declared in the same class.
    - A static member function can be called using the class name. (instead of its
    objects) as follows.

    class-name::function-name;


Note:

    code = ++count;

    is executed whenever setcode() fucntion is invoked and the current value of count is
    assigned to code. Since each object has its own copy of code, the value contained in
    code represents a unique number of it's object

    The following function definition will not work:

    static void showcount()
    {
        cout << code;       // code is not static
    }

*/

#include<iostream>
using namespace std;

class test
{
    private:
        int code;
        static int count;       // static member variable
    public:
        void setcode(void)
        {
            code = ++count;
        }
        void showcode(void)
        {
            cout << "object number: " << code << "\n";
        }
        static void showcount(void)     // static member function
        {
            cout << "count: " << count << "\n";
        }
};

int test::count;

int main()
{
    test t1, t2;

    t1.setcode();
    t2.setcode();

    test::showcount();      // accessing static function

    test t3;
    t3.setcode();

    test::showcount();

    t1.showcode();
    t2.showcode();
    t3.showcode();

    return 0;
}