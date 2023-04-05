// Class and objects

/*
Objects as Function Arguments:
    Like any other datatype, an object may be used as a function argument.
    This can be done in two ways:
        - A copy of the entire object is passed to the function.
        - Only the address of the object is transferred to the function.

    pass-by-value:
    The first method is called as "pass-by-value". since a copy of the object is passed
    to the function, any changes made to the object inside the function do not affect 
    object used to call the function. 
    
    pass-by-reference:
    The second method is called "pass-by-reference".
    When an address of the object is passed, the called function works directly on
    the actual object used in the call. This means that any changes made to the object 
    inside the function will reflect in the actual object. The pass-by reference method
    is more efficient since it requires to pass only the address of the object and not the
    entire object.


NOTE:
    An objet can also be passed as an argument to a non-member function. However, such 
    functions can have access to the public member functions only through the objects
    passed as arguments to it. These functions cannot have access to the private data 
    members.
*/

// Ex. illustrates the use of object as function argument. it performs the addition of time in the hours and minutes format.


#include<iostream>
using namespace std;

class time
{
    private: 
        int hours;
        int minutes;

    public:
        void gettime(int h, int m)
        {
            hours = h;
            minutes = m;
        }
        void puttime(void)
        {
            cout << hours << " hours and ";
            cout << minutes << " minutes " << "\n";
        }
        void sum(time, time);       // declaration with objects as arguments
};

void time::sum(time t1, time t2)        // t1, t2 are the objects
{
    minutes = t1.minutes + t2.minutes;
    hours   = minutes / 60;
    minutes = minutes % 60;
    hours   = hours + t1.hours + t2.hours;
}

int main()
{
    time T1, T2, T3;
    
    T1.gettime(2,45);   // get T1
    T2.gettime(3,30);   // get T2

    T3.sum(T1, T2);     // T3 = T1 + T2

    cout << "T1 = ";   T1.puttime();    // display T1
    cout << "T2 = ";   T2.puttime();    // display T2
    cout << "T3 = ";   T3.puttime();    // display T3

    return 0;
}