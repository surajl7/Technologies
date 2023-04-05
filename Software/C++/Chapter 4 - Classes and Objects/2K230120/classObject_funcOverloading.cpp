// Functions

// Function overloading in class and objects

// Ex. finding the volume of an object

#include<iostream>
#include<math.h>
using namespace std;

class mathFunc
    {
        public:             // Accessmodifier --> attributes 
            int num1;   
            int num2;
            int num3;

        public:             // Accessmodifier --> functions
            int volume(int);
            double volume(double, int);
            long volume(long, int, int);
    };

int mathFunc::volume(int s)     // cube
{
    num1=s;
    return(pow(num1,3));
}

double mathFunc::volume(double r, int h)   // cylinder
{
    num1 = r;
    num2 = h;
    return(3.14519*num1*num2);
}

long mathFunc::volume(long l, int b, int h)   // rectangular box
{
    num1 = l;
    num2 = b;
    num3 = h;
    return(num1*num2*num3);
}

int main()
{
    int x, y, z;

    cout << "Enter 1st num: ";
    cin >> x;
    cout << "Enter 2nd num: ";
    cin  >> y;
    cout << "Enter 3rd num: ";
    cin >> z;

    mathFunc obj1;
    mathFunc obj2;
    mathFunc obj3;

    cout << "Volume of cube: "   << obj1.volume(x) << "\n";
    cout << "Volume of cylinder: " << obj2.volume(x, y) << "\n";
    cout << "Volume of rectangular box: " << obj3.volume(x, y, z) << "\n";

    return 0;
}