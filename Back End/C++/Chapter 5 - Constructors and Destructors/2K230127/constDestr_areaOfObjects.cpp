// Constructor and Destructor

// Ex. Finding the area of given objects

#include<iostream>
#include<math.h>
using namespace std;

class area
{
    private:
        float side1, side2;
        const float pi = 3.14;
    public:
        area(float s) {pi, side1 = s;}                         // square         area = side*side
        area(float s1, float s2) {side1 = s1; side2 = s2; pi;} // rectangle      area = legth*bredth
     // area(float);                                       // circule        area = pi*r*r
     // area(float, float);                                // triangle       area = 0.5*base*height
        
        friend area square(area);
        friend area rectange(area, area);
        friend area circule(area);
        friend area triange(area, area);

};

area square(area obj, float pi)
{
    cout << pi;
    // return(pow(obj.side1, 2));
    return 0;
}

area rectange(area obj1, area obj2)
{
    return(obj1.side1*obj2.side2);
}

area circule(float pi, area obj)
{
    // return(pi * pow(obj.side1, 2));
    // return(pi*obj.side1);
}

area triange(area obj1, area obj2)
{
    return(0.5*obj1.side1*obj2.side2);
}


int main()
{   
    area A(10);

    area B = square(A);

    cout << A.pi;
}