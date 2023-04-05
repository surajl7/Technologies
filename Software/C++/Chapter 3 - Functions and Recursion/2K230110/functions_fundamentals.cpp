/*Functions and recursion*/

/*

Functions -->
Types of functions:
1. System defined functions
- printf()
- scanf()
- string's 18 functions
- ...

2. User defined functions

--> 1. function declaration
    Syntax:
    <return_type> <func_name> (<argument>);

--> 2. function defination
    Syntax:
    <return_type> <func_name> (<atgument>)
    {
        //code
    }

--> 3. function call
    Syntax:
    <func_name> (<argument>);

*/

//Ex. Write a function for addition of two numbers


#include<iostream>
using namespace std;

int add(int, int);

int add(int num1, int num2){
    int sum = num1 + num2;

    return sum;
}

int main()
{
    int a, b;

    cout << "\nEnter 1st number: ";
    cin >> a;

    cout << "Enter 2nd number: ";
    cin >> b;

    cout << "\nSum of " << a << " and " << b << " is " << add(a, b) << "\n\n";

    return 0;
}