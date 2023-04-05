// Templates

/*
Class Templates Ex. 3
*/

#include<iostream>
using namespace std;

template <class T>
class A
{
    public:
        T a;
        T b;
    public:
        A(T x, T y)
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
    A <int> a1(3, 8);
    a1.add();
}

/*

template<class Type>
class class_name
{
    body
}

*/