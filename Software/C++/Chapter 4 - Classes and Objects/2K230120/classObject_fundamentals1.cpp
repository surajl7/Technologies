// Class Object

// Ex. Class object example

/*
    A variable declared as public can be accessed by the object directly.

    The use of data in this manner defeats the very idea of data hiding and therefore should be 
    avoided.
*/

#include<iostream>
using namespace std;

class xyz
{
    private:
        int x;
        int y;

    public:
        int z;
};

int main()
{   
    xyz obj;

    obj.x = 0;          // error, x is private
    obj.y = 1;          // error, y is private
    obj.z = 10;         // Ok, z is public

    return 0;
}