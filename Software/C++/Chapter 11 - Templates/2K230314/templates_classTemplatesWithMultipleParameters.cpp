// Templates

/*
Class Templates with multiple Parameters:
    We can use more than one generic data type in a class template. They are declared as a
    comma-separated list within the template specification as shown below:

    template<class T1, class T2, ...>
    class className
    {
        ...
        ...     (body of the class)
        ...
    };
*/

// Ex: Two Generic Data Types In a class Definition

#include<iostream>

using namespace std;

template<class T1, class T2>
class Test
{   
    private:
        T1 a;
        T2 b;
    public:
        Test(T1 x, T2 y)
        {
            a = x;
            b = y;
        }  
        void show()
        {
            cout << a << " and " << b << "\n";
        }
};

int main()
{
    Test <float, int> test1 (1.23, 123);
    Test <int, char> test2 (100, 'W');

    test1.show();
    test2.show();

    return 0;
}