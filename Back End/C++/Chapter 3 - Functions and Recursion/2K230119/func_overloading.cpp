// Functions

/*
Function Overloading:
    Using the consept of function overloading; We can design a family of functions
    with one function name but with different argument list.

Ex. 
    An overloaded add() function handaling diffrent types of data as shown below.

    //Declartion:
        int add(int a, int b);              // prototype 1
        int add(int a, int b, int c);       // prototype 2
        double add(double x, double y);     // prototype 3
        double add(int p, double q);        // prototype 4
        double add(int p, int q);           // prototype 5

    // Function calls
        cout << add(5,10);                  // uses prototype 1
        cout << add(15, 10.0);              // uses prototype 4
        cout << add(12.5, 7.5);             // uses prototype 3
        cout << add(5, 10, 15);             // uses prototype 2
        cout << add(0.75, 5);               // uses prototype 5

Note:
    Overloaded functions are extensively used for handaling class object. They will be
    illustrated later when the classes are discussed in the next chapter.
*/

#include<iostream>
#include<math.h>
using namespace std;

// Declartion (prototype)
int volume(int);
double volume(double, int);
long volume(long, int, int);

double const pi = 3.14519;

int main()
{
    cout << volume(10) << "\n";
    cout << volume(100L, 75, 15) << "\n";
    cout << volume(2.5, 8) << "\n";

    return 0;
}

// Function definitions

int volume(int s) //cube
{
    return(pow(s, 3));
}

double volume(double r, int h) // cylinder
{   
    return(pi* pow(r,2) * h);
}


long volume (long l, int b, int h)  // rectangular box
{
    return(l*b*h);
}
