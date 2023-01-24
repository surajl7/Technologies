// Class and Objects

/*
Function frinedly to two classes:
    Member functions of one class can be frined functions of another class.
    In such cases, they are defined using the scope resolution operator as shown below:

    class X
    {
        ...
        ...
        int fun1();     // member function of X
        ...
    };

    class Y
    {
        ...
        ...
        frined int X :: fun1();     // fun1() is x
        ...
        ...
    };


    The function fun1() is a member of class X and a frined of class Y.

    We can also declared all the member functions of one class as the friend function of
    another class. In such cases, the class a frined class. This can be specified as follows:

    class Z
    {
        ...
        frined class X;     // all member function of X are frinedly to Z
    };

*/

// Ex. demonstrates how frinedly functions work as a bridge between the classes.

#include<iostream>
using namespace std;

class ABC;      // Forword declaration
/*------------------------------------------------------*/

class XYZ
{
    private:
        int x;
    public:
        void setvalue(int i)
        {
            x = i;
        }
        friend void max(XYZ, ABC);
};

/*------------------------------------------------------*/

class ABC
{
    private:
        int a;
    public:
        void setvalue(int i)
        {
            a = i;
        }
        friend void max(XYZ, ABC);
};

/*------------------------------------------------------*/

void max(XYZ m, ABC n)      // definition of friend
{
    if(m.x >= n.a)
        cout << m.x;
    else
        cout << n.a;
}

/*------------------------------------------------------*/

int main()
{
    ABC abc;
    abc.setvalue(10);
    XYZ xyz;
    xyz.setvalue(20);
    max(xyz, abc);

    return 0;
}


/*
NOTE:
    The function max() has arguments from both XYZ and ABC. When the function max()
    is declared as frined in XYZ for the first time, the compiler will not acknowledge
    the presence of ABC unless it's name is declared in the beginnig as

    class ABC;

    This is known as 'forword' declartion.
*/