// 3.3 Identify the errors in the following program.

#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int i = 5;
    while(i)
    {
        switch(i)
        {
            default:
            case 4:
            case 5:

            break;

            case 1:
            continue;

            case 2:
            case 3:
            break;
        }
        i-;         /* expected primary-expression before ';' token
                            i-;
                            ^                                     */
    }
    return 0;
}
