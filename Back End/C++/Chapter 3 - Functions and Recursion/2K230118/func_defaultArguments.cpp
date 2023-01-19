// Functions

/*
Default Arguments:
    A default argument is checked for type at the time of declaration and evaluated at the 
time of call.
    Only the trailing arguments can have default values and therefor we must add default
    from right to left.

Example of function declartion with default values are:
    int mul(int i, int j=5, int k=10);      //legal
    int mul(int j=5, int j);                //illegal
    int mul(int i=0, int j, int k=10);      //illegal
    int mul(int i=2, int j=5, int k=10);    //legal

    Default arguments are useful in situations where some arguments always have the same
    value.
*/

#include<iostream>
using namespace std;

int main()
{
    float amount;

    float value(float p, int n, float r=0.15);        // prototype
    void printline(char ch = '*', int len = 40);      // prototype

    cout << "\n";
    printline();                // uses default values for arguments

    amount = value(5000.00,5);  // default for 3rd arguments

    cout << "\n     Final Value = " << amount << "\n\n";

    printline('=');             // use default value for 2nd argument
    cout << "\n";
    return 0;
}

/*----------------------------------------------------------------------*/

float value(float p, int n, float r)
{
    int year = 1;
    float sum = p;

    while(year <= n)
    {
        sum = sum*(1+r);
        year = year + 1;
    }
    return(sum);
}

void printline(char ch, int len)
{
    for(int i=1; i<=len; i++) printf("%c", ch);
    printf("\n");
}