// Class and Objects

/*
Static Data Members:
    A data member of a class can be qualified as static. The properties of a static
    member variable are similer to that of a C satic variable. A static member variable
    has certain special characteristics. These are:

    - It is initialized to zero when the first object of its class is created.
    - Only one copy of that member is created for the entire class and is shared by
    all the object of that class, no matter how many object are created.
    - It is visible only within the class, but its lifetime is the entire program.

    Static variable are normally used to maintain values common to the entire class. 
    for example, a static data member can be used as a counter that recored the occurrence
    of all the object.

*/

#include<iostream>
using namespace std;

class item
{
    private:
    // public:
        static int count;       // Static variable/function will always be private irrespective of it's accessmodifier.
        int number;
    public:
        void getdata(int a)
        {
            number = a;
            count ++;
        }
        void getcount(void)
        {
            cout << "\nCount: " << count;
        }

};

int item::count;        // Redeclartion of static variable to access the same of main method.

int main()
{
    item a, b, c;   // count is initialized to zero
    a.getcount();   // display count
    b.getcount(); 
    c.getcount();

    a.getdata(100);     // getting data into object a
    b.getdata(200);     // getting data into object b
    c.getdata(300);     // getting data into object c

    cout << "\n\nAfter reading data";

    a.getcount();    // display count
    b.getcount();
    c.getcount();

    cout << "\n\n";
    return 0;
}