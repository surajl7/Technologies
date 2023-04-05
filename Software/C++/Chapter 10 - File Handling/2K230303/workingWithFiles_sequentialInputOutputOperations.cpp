// Working With Files

/*
Sequential Input Output Operations:
    The file stream classes support a number of member functions for performing the input and   
    output operations on files. One pair of functions, put() and get(), are designed for handling
    a single character at a time. Another pair of functions, write() and read(), are designed to
    write and read bloack of bianry data.

    put() and get() Functions:
    The function put() write a single character to the associated stream.
    similarly, the function get() reads  a single character from the associated stream.
*/

#include<iostream>
#include<fstream>
#include<string.h>

using namespace std;

int main()
{

    fstream f;
    char a[20];

    std::cout << "Enter a string: \n";
    std::cin >> a;

    int l = strlen(a);
    f.open("text.txt", ios::in | ios::out);

    for(int i= 0; i< l; i++)
    {
        f.put(a[i]);
    }
    f.seekg(0,ios::beg);
    char ch;
    while(f >> ch)
    {
        cout << ch;
    }

}