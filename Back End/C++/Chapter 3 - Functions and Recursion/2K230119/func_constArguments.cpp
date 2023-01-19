// Functions

/*
Const Arguments:
    The qualifier const tells the compiler that the function should not modify the
    argument. The compiler will generate an error when this condition is voileted.
    This type of declartion is significant only when we pass arguments by reference or
    pointers.  

Ex. 
    int strlem(const char *p);
    int length(const string &s);
*/


#include<iostream>
using namespace std;

void printlen(char, int);

int main()
{
    printlen('+', 20);
    return 0;
}

void printlen(char ch, int count)
{
    for(int i; i < count; i++)
    {
        cout << ch;
    }
    cout << "\n";
}