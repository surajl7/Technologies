// Programming Exercise 3.1

// Write a function using reference variable as arguments to swap the values of a pair of integers.

#include<iostream>
using namespace std;

void swap(int &, int &);

void swap(int &num1, int &num2)
{
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
}

int main()
{
    int a, b;

    cout << "\nEnter 1st number: ";
    cin >> a;

    cout << "Enter 2nd number: ";
    cin >> b;

    cout << "\nBefore swapping number are...\n";
    cout << "a = " << a << "\t\t|\tb = " << b;
    cout << "\n";

    swap(a, b);
    cout << "\nAfter swapping number are...\n";
    cout << "a = " << a << "\t\t|\tb = " << b;
    cout << "\n\n";

    return 0;
}