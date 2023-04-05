// Polymorphism

/*
Virtual functions:
    -   As mentioned earlier, polymorphism refers to the proparty by which objects belonging to
        different classes are able to respond to the same message, but in diffrent forms.
    -   An essential requirment of polymorphism is therefore the ability to refer to objects
        without any regard to their classes. This necessitates the use of a single pointer
        variable to refer to the objects of diffrent classes.
    -   Here, we use the pointer to base class to refer to all the derived objects of different
        classes. Here, we use the pointer to base class to refer to all the derived objects.
        But, we just discovered that a base pointer, even when it is made to contain the address of
        a derived class, always exexutes the function in the base class.
        The compiler simply ignores the contents of the pointer and chooses the member function
        that matches the type of the pointer.
    -   Polymorphism is achived using what is known as "virtual" function.

    -   When we use the same function name in the both the base and dderived classes, the 
        function in the base class is declared as virtual using the keyword virtual preceding
        its normal declaration. 
    -   When a function is made virtual, C++ determines which function to use at the run
        time based on the type of object pointed to by the base pointer, rather that the 
        type of the pointer. thuse. by makign the base class pointer to point to
        different objects. 
    -   We can execute diffrent versions of the virtual function.
    -   When we use the same function name in both the base and derived classes, the 
        function in base class is declared as virtual using the keyword virtual preceding
        its normal declaration. 
    -   When a function is made virtual, C++ determines when function to use at run time
        based on the type of object pointed to by the base pointer, rather than the type of
        the pointer. thuse, by making the base pointer to point to different objects. we can
        execute different versions of the virtual function.
*/

#include<iostream>

class Base
{
    public:
        void display()  {std::cout << "\n Display base ";}
        virtual void show() {std::cout << "\n show base";}
};

class Derived : public Base
{
    public:
        void display()  {std::cout << "\n Display derived";}
        void show()     {std::cout << "\n Show derived";}
};

int main()
{
    Base B;
    Derived D;
    Base *bptr;

    std::cout << "\n bptr points to Base \n";
    bptr = &B;
    bptr -> display();      // calls Base version
    bptr -> show();         // calls Base version

    std::cout << "\n\n bptr points to Derived\n";
    bptr = &D;
    bptr -> display();      // calls Base version
    bptr -> show();         // calls Derived version 

    return 0;
}

/*
NOTE:
    When bptr is made to point to the object D, the statement

        bptr -> display();

    calls only the function associate with the Base (i.e. Base :: display()), Whereas the
    statement

        bptr -> show();

    calls the Derived version of show(). This is because the function display() has not
    been made virtual in the Base class.
*/
