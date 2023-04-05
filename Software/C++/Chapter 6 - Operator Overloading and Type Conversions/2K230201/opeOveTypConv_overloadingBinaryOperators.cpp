// Operator overloading and Type conversions

/*
Overloading Binary Operators:
*/

// Ex. To add two complex numbers using a frined function.
/*
A Statement like

    C = sum(A, B)       // functional notation.

was used. The functional notation can be replaced by a natural looking expression

    C = A + B           // arithmetic notation

by overloading the + operator using an operator+() function. 
*/

#include<iostream>

class complex
{
    private:
        float x;            // real part
        float y;            // imaginary part

    public:
        complex() { }                       // constructor 1
        complex(float real, float imag)     // constructor 2
        {
            x = real;
            y = imag;
        }

        complex operator+(complex);
        void display(void);
};

complex complex :: operator +(complex obj)
{
    complex temp;           // temporary
    temp.x = x + obj.x;     // these are
    temp.y = y + obj.y;     // float additions
    return (temp);
}

void complex::display(void)
{
    std::cout << x << " + j" << y << "\n";
}

int main()
{
    complex C1, C2, C3;      // invokes constructor 1

    C1 = complex(2.5, 3.5);  // invokes constructor 2
    C2 = complex(1.6, 2.7);  

    C3 = C1 + C2;            // invokes operator+() function
    // C3 = C1.operator+(C2);   // usual function call syntax

    std::cout << "C1 = "; C1.display();
    std::cout << "C2 = "; C2.display();
    std::cout << "C3 = "; C3.display();

    return 0;
}