// Pointers

/*
Pointers and Strings
    We know that a string is a one dimentional array of characters, which start with the
    index 0 and ends with the null character '\0' in C++. A pointer variable can access a string
    by referring to its first character. As we know, there are two ways to assign a value
    to a string.
    We can use the character array or variable of type char *. let us consider the
    following string declarations.

        char num[] = "one";
        const char *numptr = "one";

    The first declaration creates an array of four characters, which contains the
    charcaters, 'o', 'n', 'e', '\0', whereas the second declaration generates a pointer
    variable, which points to first character, i.e. 'o' of the string. there is numerous 
    strings handaling functions available in C++. all of these functins are avaiable in the 
    header file <cstring>.
*/

// Ex. reverse a string using pointers and arrays.

#include<iostream>
#include<string.h>

int main()
{
    char str[] = "Test";
    int len = strlen(str);

    for (int i = 0; i < len; i++)
    {
        std::cout << str[i] << i[str] << *(str+i) << *(i+str);
    }

    // std::cout << endl;
    std::cout << "\n";

    //string reverse

    int lenM = len/2;

    len--;

    for(int i = 0; i < lenM; i++)
    {
        str[i] = str[i] + str[len-i];
    //     T        T           e
        str[len-i] = str[i] - str[len-i];
    //     e           T          e
        str[i] = str[i] - str[len-i];
    //     T       T          e
    }

    std::cout << "The string reversed: " << str;
}