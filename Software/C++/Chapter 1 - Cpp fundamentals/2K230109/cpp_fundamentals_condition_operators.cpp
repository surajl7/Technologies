// Cpp fundamentals

/*
Conditional Operators:

Syntax:
    result = <condition> ? result1 : result2

Ex. finding the largest number
*/

#include<iostream>
using namespace std;

int main()
{
    int num1, num2, result;

    cout << "\nEnter 1st number: ";
    cin >> num1;

    cout << "Enter 2nd number: ";
    cin >> num2;

    //Finding the largest of number
    result = num1 > num2 ? num1 : num2;

    cout << "\nLargest of " << num1 << " and " << num2 << " is: " << result <<"\n";

    return 0;
}
