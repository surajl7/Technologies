// Managing Console I/O Operations

/*
write() Function:
    The write() function displays an entire line and has the following form:

        cout.write(line, size)

    The first argument line represents the name of the string to be dispalyed and the second
    argument size indicates the number of characters to display. Note that it does not stop
    displaying the characters automatically when the null character is encountered.
    If the size is greater than the length of line, then it displays beyond the bounds of
    line.
*/

#include<iostream>
#include<string.h>

int main()
{
    const char *string1 = "C++ ";
    const char *string2 = "Programming";
    int m = strlen(string1);
    int n = strlen(string2);

    for(int i=1; i<n; i++)
    {
        std::cout.write(string2, i);
        std::cout << "\n";
    }

    for(int i=n; i>0; i--)
    {
        std::cout.write(string2, i);
        std::cout << "\n";
    }

    // concatenating strings
    std::cout.write(string1,m).write(string2,n);

    std::cout << "\n";

    // crossing the boundary
    std::cout.write(string1, 10);

    return 0;
}
