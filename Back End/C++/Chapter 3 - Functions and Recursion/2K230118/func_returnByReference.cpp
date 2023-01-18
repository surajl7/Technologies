// Functions

// Return by reference

#include<iostream>
using namespace std;

int &max(int &, int &);

int main(int argc, char* aragv[])
{
    int a, b;

    cout << "\nEnter 1st number: ";
    cin >> a;

    cout << "Enter 2nd number: ";
    cin >> b;

    cout << "\nMax number between " << a << " and " << b << " is: " << max(a, b) << "\n\n";
    return 0;
}

int &max(int &num1, int &num2)
{
    if (num1 > num2)
        return num1;
    else
        return num2;
}