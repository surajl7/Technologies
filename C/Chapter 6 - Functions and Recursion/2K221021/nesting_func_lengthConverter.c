//Nesting Function

/*
Ex. Convert Kilometer to Meter to Centimeter
*/

#include<stdio.h>

int m(int);
int cm(int);

void main()
{
    int x;

    printf("\nEnter length in Kilometers: ");
    scanf("%d",&x);
    m(x); //Actual Argument


}

int m(int dist){ //Formal Argument
    int meter;

    meter = dist * 1000;
    cm(meter); //Actual argument
    return 0;

}

int cm(int me){ //Formal Argument
    int cmeter;

    cmeter = me * 100;
    printf("cm: %d",cmeter);
    return 0;
}










