// Functions:

// Call by Reference

//Ex. Swapping of two numbers

#include<iostream>
using namespace std;

void swap(int &, int &);

int main(int argc, char* argv[])
{
    int a, b;

    cout << "\nEnter 1st number: ";
    cin >> a;

    cout << "Enter 2nd number: ";
    cin >> b;

    cout << "\nNumbers before swapping: \n";
    cout << "a = " << a << "\t\t|\t" << "b = " << b << "\n";


    swap(a, b);
    
    cout << "\nNumbers After Swapping: \n";
    cout << "a = " << a << "\t\t|\t" << "b = " << b << "\n";

    cout << "\n";
    return 0;
}

void swap(int &num1, int &num2)
{
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
}