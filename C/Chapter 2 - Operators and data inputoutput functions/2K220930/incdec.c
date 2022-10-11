//increment decrement operator

// a++ --> post increment
// ++a --> pre-increment
// a-- --> post decrement
// --a --> pre-decrement

#include<stdio.h>
void main()
{
    int a,b,c,d,e,f,g,h;

    a = 5;
    b = 5;
    c = 5;
    d = 5;

    printf("\na = 5");

    e = a++;
    printf("\na++ = %d",e);

    f = ++b;
    printf("\n++a = %d",f);

    g = c--;
    printf("\na-- = %d",g);

    h = --d;
    printf("\n--a = %d",h);
    printf("\n");

}
