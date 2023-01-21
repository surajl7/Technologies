// Class and Object

#include<iostream>
using namespace std;

class item
{
    
        int number;         // private by default
        float cost;         // private by default

    public:
        void getdata(int a, float b);   // prototype declartion
                                        // to be defined
        
        // Function defined inside class
        void putdata(void)
        {
            cout << "number: " << number << "\n";
            cout << "cost: " << cost << "\n";
        }
};

/*.................Member Function Defination.................*/

void item::getdata(int a, float b)      // use membership label
{
    number = a;     // private variables
    cost = b;       // directly used
}

/*........................Main Program........................*/

int main()
{
    item x; // created object x

    cout << "\nobject x " << "\n";

    x.getdata(100, 299.95);          // call member function
    x.putdata();                    // call member function

    item y;

    cout << "\nObject y" << "\n";

    y.getdata(200, 175.50);
    y.putdata();


    return 0;
}
