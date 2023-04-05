// Functions / class objects

// Fundamentals

#include<iostream>
using namespace std;

class numFunc
{
    int num1;
    int num2;

    public:
        void getData(int, int);
        void putData();
};

void numFunc::getData(int a, int b)
{
    num1 = a;
    num2 = b;

    cout << "\nGet Data Function: \n";
    cout << "a = " << num1 << "\n";
    cout << "b = " << num2 << "\n";
}

void numFunc::putData()
{
    cout << "\nPut Data Function: \n";
    cout << "\na = " << num1 << "\n";
    cout << "b = " << num2 << "\n";
}

int main()
{
    int x, y;

    cout << "\nEnter value of 1st num: ";
    cin >> x;

    cout << "\nEnter value of 2nd num: ";
    cin >> y;

    numFunc obj1;

    obj1.getData(x, y);
    obj1.putData();

    return 0;
}