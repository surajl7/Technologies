// Constructor and Destructors

// Constructor Overloading

// Area of shapes:

#include<iostream>
#include<math.h>
using namespace std;

class area
{
    private:
        int side, length, breadth, base;
        double height;
        double radious, pi;
    public:
        area(int);
        area(int, int);
        area(int, double);
        area(double, float pi= 3.14);   // constructor with default argument
};


// Note:  constructor does not have datatype hence no returntype (not even void)

// Area of square --> side*side
area::area(int s)
{
    side = s;
    cout << pow(side,2);
}

//Area of rectange -->  length*breadth
area::area(int l, int b)
{
    length = l;
    breadth = b;
    cout << length*breadth;
}

//Area of triangle --> 0.5*base*height
area::area(int bs, double h)
{
    base = bs;
    height = h;
    cout << 0.5*base*height;
}

//Area of circule --> pi*r*r
area::area(double r, float pi)
{
    radious = r;
    // const float pi = 3.14;
    cout << pi*radious*radious;
}

int main()
{

    cout << "\nArea of square: ";
    area square(10);

    cout << "\nArea of rectangle: ";
    area rectagle(11, 22); 

    cout << "\nArea of traingle: ";
    area triangle(123, 23.4);

    cout << "\nArea of circule: ";
    area circule(2.0);
    
    cout << "\n\n";

    return 0;
}