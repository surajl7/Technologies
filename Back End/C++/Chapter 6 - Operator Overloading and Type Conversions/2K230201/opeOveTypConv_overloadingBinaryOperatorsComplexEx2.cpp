// Operator overloading and Type conversion 

// Overloading Binary Operators

// Ex. Adding two complex numbers

#include<iostream>

class complex
{
    private:
        float x;
        float y;
    public:
        complex(void)  { };   // default constructor
        complex(float real, float imag)     // parametersed constructor 
        {
            x = real;
            y = imag;
        }

        complex operator + (complex);
        
        void display(void);
};

complex complex :: operator +(complex obj)
{
    return complex((x + obj.x),(y + obj.y));
}

void complex::display(void)
{
    std::cout << x << " + j" << y << "\n";
}

int main()
{
    complex C1, C2, C3;

    C1 = complex(2.2, 3.3);
    C2 = complex(3.3, 2.2);

    C3 = C1.operator+(C2);   // usual function call syntax
    // C3 = C1 + C2;

    std::cout << "\n";

    std::cout << "C1 = "; C1.display();
    std::cout << "C2 = "; C2.display();
    std::cout << "C3 = "; C3.display();

    std::cout << "\n";
}