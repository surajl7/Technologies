// Constructor and Destructor

// Ex. Finding the area of given objects

#include<iostream>
#include<math.h>
using namespace std;

class area
{
    private:
        float side;
    public:

        area(void) {};

    // square         
        // area = side*side
        area(float s) 
        {
            side = s;
        }     
    // rectangle     
        // area = legth*bredth                        
        // area(float s1, float s2) 
        // {
        //     side1 = s1; 
        //     side2 = s2; 
        // } 
    // circule       
        // area = pi*r*r
        // area(float);  
    // triangle      
        // area = 0.5*base*height                                         
        // area(float, float);                                    
        
        friend area square(area);
        friend area rectangle(area, area);
        friend area circule(area);
        friend area triangle(area, area);

        friend area display(area);
};

area square(area obj)
{
    return(pow(obj.side, 2));
}

area rectangle(area obj1, area obj2)
{
    return(obj1.side*obj2.side);
}

area circule(area obj)
{
    const float pi = 3.14;
    return(pi * pow(obj.side, 2));
}

area triangle(area obj1, area obj2)
{
    return(0.5*obj1.side*obj2.side);
}

area display(area obj)
{
    cout << obj.side;
    return 0;
}

int main()
{   
    //Area of square:
    area A(10);
    // area B;

    // B = square(A);  display(B);
    cout << "\nArea of square is "; display(square(A));

    // Area of rectangle
    area l1(11), b1(22);

    cout << "\nArea of rectangle is "; display(rectangle(l1, b1));

    // Area of circule
    area r1(20);

    cout << "\nArea of circule is "; display(circule(r1));

    // Area of triangle
    area bs1(13), h1(98);

    cout << "\nArea of triangle is "; display(triangle(bs1, h1));

    cout << "\n\n";
}