// Functions

/*
Commonly used math library functions

Functions       Purposes

ceil(x)         Rounds x to the smallest integer not less than x 
                ceil(8.1) = 9.0 and ceil(-8.8) = -8

cos(x)          Trigonometric cosine of x (x in radians)

exp(x)          Exponential function e^x

fabs(x)         Absolute value of x.
                If x > 0 then abs(x) is x
                If x = 0 then abs(x) is 0.0
                If x < 0 then abs(x) is -x

floor(x)        Rounds x to the largest integer not greater than x
                floor(8.2) = 8.0    and     floor(-8.8) = -9.0

log(x)          Natural logarithm of x(base e)

log10(x)        Logarithm of x(base 10)

pow(x,y)        x raised to power y (x^y)

sin(x)          Trigonometric sine of x (x in radians)

sqrt(x)         Square root of x

tan(x)          Trigonometric tangent of x  (x in radians)

NOTE:
    The argument variables x and y are of type double and all functions return the data
    type double.

    To use the math library function, we must include the header file math.h in conventional
    C++ and cmath in ANSI C++.

    // 1 degree --> 0.0175 rad

*/

#include<iostream>
#include<math.h>
using namespace std;

void dispOpt();
void selectOpt(int, double, double);
double roundUp(double);
double roundDown(double);
double cosine(double);
double exponential(double);
double absolute(double);
double naturalLog(double);
double logBaseT(double);
double powerNum(double, double);
double sine(double);
double squareRoot(double);
double tangent(double);
void printlen(char, int);

double const pi = 3.14159265359;
double const degTradAngle = pi/180;

int main()
{
    int opt;
    double n1, n2;

    do
    {
        dispOpt();

        cout << "Enter your option: ";
        cin >> opt;

        // cout << typeid(opt).name();

        if(opt > 0 && opt < 13){
            if(opt == 12){
                cout << "\nExiting...\n";
                cout << "Thank you :)\n\n";
            }
            else if(opt == 8 || opt == 9 || opt == 10){
                cout << "Enter the angle in degree format: ";
                cin >> n1;
            }
            else if(opt != 11 and opt != 12){
                cout << "Enter the number: ";
                cin >> n1;
            }
            else{
                cout << "Enter 1st number: ";
                cin >> n1;
                cout << "Enter 2nd  number: ";
                cin >> n2;
            }
        }
        else{
            cout << "\nInvalid input :(\n\n";
            printlen('*', 35);
        }


        selectOpt(opt, n1, n2);

    }while(opt != 12);

    return 0;
}

void dispOpt()
{
    cout << "\nChoose between following options: \n";
    cout << "\n1. Round up";
    cout << "\n2. Round down";
    cout << "\n3. Exponential of number";
    cout << "\n4. Absolute value of number";
    cout << "\n5. Natural logarithm of num";
    cout << "\n6. Logarithm of num (log base 10)";
    cout << "\n7. Square root of number";
    cout << "\n8. Trigonometric sine";
    cout << "\n9. Trigonometric cosine";
    cout << "\n10. Trigonometric tangent";
    cout << "\n11. num1 raised to power num2";
    cout << "\n12. Exit\n\n";
}


void selectOpt(int opt, double num1, double num2)
{
    int count = 35;
    char ch = '=';

    switch(opt)
    {
        case 1:
            cout << "\nRound up value is: " << roundUp(num1) << "\n";
            printlen(ch, count);
            break;
        case 2:
            cout << "\nRound down value is: " << roundDown(num1) << "\n";
            printlen(ch, count);
            break;
        case 3:
            cout << "\nExponential of " << num1 << " is: " << exponential(num1) << "\n";
            printlen(ch, count);
            break;
        case 4:
            cout << "\nAbsolute value of " << num1 << " is: " << absolute(num1) << "\n";
            printlen(ch, count);
            break;
        case 5:
            cout << "\nNatural Log of " << num1 << " is: " << naturalLog(num1) << "\n";
            printlen(ch, count);
            break;
        case 6:
            cout << "\nLog base 10 of " << num1 << " is: " << logBaseT(num1) << "\n";
            printlen(ch, count);
            break;
        case 7:
            cout << "\nSquare root of " << num1 << " is: " << squareRoot(num1) << "\n";
            printlen(ch, count);
            break;
        case 8:
            cout << "\nTrignometric sign of " << num1 << " is: " << sine(num1) << "\n";
            printlen(ch, count);
            break;
        case 9:
            cout << "\nTrignometric cosine of " << num1 << " is: " << cosine(num1) << "\n";
            printlen(ch, count);
            break;
        case 10:
            cout << "\nTrignometric tangent of " << num1 << " is: " << tangent(num1) << "\n";
            printlen(ch, count);
            break;
        case 11:
            cout << "\n" << num1 << " power " << num2 << " is: " << powerNum(num1, num2) << "\n";
            printlen(ch, count);
            break;
        case 12:
            break;
        // default:
            // cout << "\nInvalid input :(\n";
            // cout << "\nPlease choose the option from list.\n";

    }

}


double roundUp(double num)
{
    return (ceil(num));
}

double roundDown(double num)
{
    return (floor(num));
}

double cosine(double angle)
{
    return (cos(angle*degTradAngle));
}

double exponential(double num)
{
    return (exp(num));
}

double absolute(double num)
{
    return (fabs(num));
}

double naturalLog(double num)
{
    return (log(num));
}

double logBaseT(double num)
{
    return (log10(num));
}

double powerNum(double num1, double num2)
{
    return (pow(num1, num2));
}

double sine(double angle)
{   
    return (sin(angle*degTradAngle));
}

double squareRoot(double num)
{
    return (sqrt(num));
}

double tangent(double angle)
{
    return (tan(angle*degTradAngle));
}

void printlen(char ch, int count)
{
    for(int i = 0; i < count ; i++)
    {
        cout << ch;
    }
    cout << "\n";
}