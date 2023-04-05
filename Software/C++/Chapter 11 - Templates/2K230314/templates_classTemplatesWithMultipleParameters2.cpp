// Templates

/*
Class Templates with multiple Parameters
*/

#include<iostream>
using namespace std;

template <class T1, class T2>
class A
{
    public:
        T1 a;
        T2 b;
    public:
        A(T1 x, T2 y)
        {
            a = x;
            b = y;
        }
        void add()
        {
            cout << "add is: " << a + b;
        }
};

int main()
{
    A <int, double> a1(3,8.6);
    A <float, int> a2(3.5,2);
    a1.add();
    cout << "\n";
    a2.add();
}

/*

template<class Type1, class type2>
class class_name
{
    body
}

*/