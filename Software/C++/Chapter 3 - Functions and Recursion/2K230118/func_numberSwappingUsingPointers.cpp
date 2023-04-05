// Functions

// Ex. Swapping two numbers using pointers

#include<iostream>
using namespace std;

void swap(int*, int*);              /*Function declaration*/

int main(int argc, char* argv[])
{
    int a, b;
    // int *p1, *p2;

    cout << "\nEnter 1st number: ";
    cin >> a;

    cout << "Enter 2nd number: ";
    cin >> b;

    cout << "\nNumbers before swapping: \n";
    cout << "a = " << a << "\t\t|\t" << "b = " << b << "\n\n";

    // p1 = &a;
    // p2 = &b;

    // swap(p1, p2);                   /*Function call*/

    swap(&a, &b);

    cout << "\nNumbers after swapping: \n";
    cout << "a = " << a << "\t\t|\t" << "b = " << b << "\n\n";

    return 0;
}

void swap(int* num1, int* num2)        /*Function defination*/
{
    *num1 = *num1 + *num2;
    *num2 = *num1 - *num2;
    *num1 = *num1 - *num2;
}