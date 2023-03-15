// Templates

/*
Ex.: An application of template function
*/

#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

template <class T>
void roots(T a, T b, T c)
{
    T d = b * b - 4 * b * c;
    if(d == 0)              // Roots are equal
    {
        cout << "R1 = R2 = " << -b/(2*a) << endl;
    }
    else if (d > 0)         // Two real roots
    {
        cout << "Roots are real \n";
        float R = sqrt(d);
        float R1 = (-b+R)/(2*a);
        float R2 = (-b-R)/(2*a);
        cout << "R1 = " << R1 << " and ";
        cout << "R2 = " << R2 << endl;
    }
    else                        // Roots are complex
    {
        cout << "Roots are complex \n";
        float R1 = -b/(2*a);
        float R2 = sqrt(-d)/(2*a);
        cout << "Real part = " << R1 << endl;
        cout << "Imaginary part = " << R2;
        cout << endl;
    }
}

int main()
{
    cout << "Integer coefficients \n";
    roots(1, -5, 6);
    cout << "\nFloat coefficient \n";
    roots(1.5, 3.6, 5.0);

    return 0;
}