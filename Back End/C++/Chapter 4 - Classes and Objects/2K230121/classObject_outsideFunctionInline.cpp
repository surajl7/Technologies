// Class and Objects 

/*
Making an outside function inline:
    We can define a member function outside the class definition and still
    make it inline by just using the qualifier "inline" in the header line
    of function.

    Example: 

        class item
        {
            ....
            ....
            public: 
                void getdata(int a, float b);   /declaration
        };

        inline void item::getdata(int a, float b)   // definition
        {
            number = a;
            cost = b;
        }

*/


#include<iostream>
using namespace std;

class item
{
    private:
        int number;
        float cost;
        void putdata()
        {
            cout << "\nNumber: " << number << "\n";
            cout << "Cost: " << cost << "\n\n";
        }
    public:
        void getdata(int a, float b);
};


inline void item::getdata(int a, float b)
{
    number = a;
    cost = b;
    putdata();
}


int main()
{
    item obj1;

    cout << "\nCalling putdata Function in getdata function";
    obj1.getdata(10, 20);

    return 0;
}