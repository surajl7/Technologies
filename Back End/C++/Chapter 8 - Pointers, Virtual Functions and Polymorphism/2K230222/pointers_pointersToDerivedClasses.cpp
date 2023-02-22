// Pointers

/*
Pointers to derived classes:
    We can use pointers not only to the base objects but also to the objects of derived classes.
    Pointers to objects of a base class are type-compatible with pointers to objects of a 
    derived class. Therefor, a single pointer variable can be made to point to objects 
    belonging to different classes. 

    Ex:
        if B is a base class and D is a derived class from B, then a pointer declared as
        a pointer to B can also be a pointer to D.
        Consider the following declaration:

            B *cptr;    // pointer to class B type variable 
            B b;        // base object
            D d;        // derived object
            cptr = &b;  // cptr points to object b

        we can make cptr to point to the object d as follows:

            cptr = &d;  // cptr points to object d
        
        This is prefectly valid with C++ because d is an object derived from the class B.

    However, there is a problem in using cptr to access the public members of the derived class D.
    using cptr, we can access only those members which are inherited from B and not the
    members that originally belong to D. 
    In case a member of D has the same name as one of the members of B, then any referance to that
    member by cptr will always access the base class member.

    Although C++ permits a base pointer to point to any object derived from that base,
    the pointer cannot be directly used to access all the members of the derived class.
    We may have to use another pointer declared as pointer to the derived type.
*/

// Ex. illustrate how pointers to a derived object are used.

#include<iostream>
using namespace std;

class BC
{
    public:
        int b;
        void show()
        {
            cout << "b = " << b << "\n";
        }
};

class DC : public BC
{
    public:
        int d;
        void show()
        {
            cout << "b = " << b << "\n"
                 << "d = " << d << "\n";
        }
};  

int main()
{
    BC *bptr;           // base pointer
    BC base;
    bptr = &base;       // base address

    bptr -> b = 100;    // access BC via base pointer
    cout << "bptr points to base object \n";
    bptr -> show();

    // derived class

    DC derived;
    bptr = &derived;    // address of derived object
    bptr -> b = 200;     // access DC via base pointer

    /* bptr -> d = 300; */ // won't work

    cout << "bptr now points to derived object \n";
    bptr -> show();     // bptr now points to derived object

    /* accessing d using a pointer of type derived class DC */

    DC *dptr;           // derived type pointer
    dptr = &derived;    
    dptr -> d = 300;

    cout << "dptr is derived type pointer\n";
    dptr -> show();

    cout << "using ((DC *)bptr) \n";
    ((DC *)bptr) -> d = 400;
    ((DC *)bptr) -> show();

    return 0;

}

/*
NOTE:
    We have used the statement

        bptr -> show();

    two times, First, when bptr points to the base object, and second bptr is made to
    point to the derived object. But, both times, it executed BC::show() function
    and displayed the content of the base object.

    However, the statements

        dptr -> show()
        ((DC *)bptr) -> show();         // cast bptr to DC type

    display the contents of the derived object. This shows that, although a base pointer
    can be made to point to any number of derived objects, it cannot directly access the members
    defined by a derived class.
*/

