// Identify the error in the following program 

#include<iostream>
using namespace std;
#include<malloc.h>

char* allocateMemory();

int main()
{
    char* str;
    str = allocateMemory();

    cout << str;
    delete str;
    str = "       ";
    cout << str;

    return 0;
}

char* allocateMemory()
{
    str = "Memory allocation test, ";
    return str;
}
