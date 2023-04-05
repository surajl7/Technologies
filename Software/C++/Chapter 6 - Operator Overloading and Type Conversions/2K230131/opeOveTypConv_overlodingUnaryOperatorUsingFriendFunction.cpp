// Operator overloading and Type convertion

// Ex. Overloading Unary Operator Using Friend Function.

#include<iostream>

class sample
{
    private:
        int x, y, z;
    public:
        void getdata(int, int, int);
        void display(sample);
        friend void operator -(sample &s);            // overloading unary minus operator with using frined function

};

void sample::getdata(int a, int b, int c)
{
    x = a;
    y = b;
    z = c;
}

void operator -(sample &s)
{
    s.x = -s.x;
    s.y = -s.y;
    s.z = -s.z;
}

void sample::display(sample s)
{
    std::cout << s.x << "  " << s.y << "  " << s.z << "\n";
}

int main()
{
    sample obj, obj1, obj2;

    obj.getdata(10,-20,30);
    
    std::cout << "obj: ";
    obj1.display(obj);

    -obj;                   // activites operators-() function

    std::cout << "obj: ";
    obj2.display(obj);

    return 0;
}
