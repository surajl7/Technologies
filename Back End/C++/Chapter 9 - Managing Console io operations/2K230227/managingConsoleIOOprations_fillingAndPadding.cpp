// Managing Console I/O Operations

/*
Filling and Padding: fill()
    We have been printing the values using much larger field widths than required by the
    values. The unused positions of the filed are filled with while spaces, by default.
    However, we can use the fill() function to fill the unused positions by any desired
    character.
    It is used in the following form:
        
        cout.fill(ch);

    Where ch represents the character which is used for filling the unused positions.
    Ex:
        cout.fill('*');
        cout.width(10);
        cout << 5250 << "\n";

    The output would be:
        -----------------------------------------
        | * | * | * | * | * | * | 5 | 2 | 5 | 0 |
        -----------------------------------------
    
    Financial institutions and banks used this kind of padding while printing cheques so that
    no one can change the amount easily.
    Like precision(), fill() stays in effect will we change it.
*/

#include<iostream>

int main()
{
    std::cout.fill('<');

    std::cout.precision(3);

    for(int n=1; n<=6; n++)
    {
        std::cout.width(5);
        std::cout << n;
        std::cout.width(10);
        std::cout << 1.0 / float(n) << "\n";

        if(n == 3)
            std::cout.fill('>');
    }

    std::cout << "\nPadding changed \n\n";
    std::cout.fill('#');    // fill() reset
    std::cout.width(15);    
    std::cout << 12.345678 << "\n";

    return 0;
}