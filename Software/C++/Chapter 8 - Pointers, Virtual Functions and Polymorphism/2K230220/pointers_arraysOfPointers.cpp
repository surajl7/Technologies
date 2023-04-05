// Pointers:

/*
Arrays of pointers:
    Similar to other variables, we can create an array of pointers in C++. The array
    of pointers represents a collection of addresses. By declaring arrays of pointers,
    we can save a substantial amount of memory space.

    An array of pointers point to an array of data items. Each element of the pointer 
    array points to an items of the data array. Data items can be accessed either direclty
    or by dereferencing the elements of the pointers array. We can reorganize the pointer elements 
    without affecting the data items.

    We can declare an array of pointers as follows:

        int *inarray[10];

    This statement declares an array of 10 pointers, each of which points to an integer.
    The address of the first pointer is inarray[0], and the second pointer is inarray[1],
    and the final pointer points to inarray[9]. Before initializing, they point to some unknown
    values in the memeory space. we can use the pointer variable to refer to some unknown values 
    in the memory space. We can use the pointer variable to refer to some specific values.
*/

// Example: Explains the implementation of array of pointers.

#include<iostream>
#include<conio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    int i = 0;
    const char *ptr[10] = {
            "books",
            "television",
            "computer",
            "sports" };

    char str[25];

    // clrscr();

    std::cout << "\n\n\nEnter your favorite leisure pursuite: ";
    std::cin >> str;

    for(i=0; i < 4; i++)
    {
        if(!strcmp(str, ptr[i]))
        {
            std::cout << "\n\nYour favorite pursuite " << "is available here " << "\n";
            break;
        }
    }
    if(i == 4)
        std::cout << "\n\nYour favorite " << " not available here" << "\n";
    //getch();

    return 0;
}

