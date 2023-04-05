// Function Prototyping 

// Ex. Finding the volume of a cube

#include<iostream>
using namespace std;

float volm_cube(int, float, float);   /*Function declaration*/

int main(int argc, char* argv[])
{   
    int a;
    float b, c;

    cout << "\nEnter breadth of cube: ";
    cin >> a;

    cout << "Enter width of cube: ";
    cin >> b;

    cout << "Enter height of cube: ";
    cin >> c;

    float cube1 = volm_cube(a, b, c);                /*Function call*/

    cout << "\nVolume of cube is: " << cube1 << endl << endl;

    return 0;
}

float volm_cube(int b, float w, float h)                 /*Function defination*/
{
    float v = b * w * h;

    return v;
}