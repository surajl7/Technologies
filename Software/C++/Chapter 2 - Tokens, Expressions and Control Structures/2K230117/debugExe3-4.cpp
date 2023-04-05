// Identify the error in the following program

#include<iostream>
using namespace std;

#include<math.h>
#define pi 3.14
int squareArea(int &);
int circuleArea(int &);

int main()
{
    int a = 10;
    cout << squareArea(a) << " ";
    cout << circuleArea(a) << " ";
    cout << a << endl;

    int squareArea(int &x)
    {
        return a *== a;
    }

    int circuleArea(int &r)
    {
        return r = pi * pow(r,2);
    }

    return 0;
}