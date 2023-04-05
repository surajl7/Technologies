// Class and Objects

// Function defination inside the class

#include<iostream>
using namespace std;

class item
{   
    private:            // Bydefault Accessmodifier is private
        int number;
        float cost;

    public: 
            //inline function
        void getdata(int a, int b)      //declartion
        {
                number = a;
                cost = b;
        }

        void outdata(void)
        {
            cout << number << "\n";     // defination inside the class
            cout << cost << "\n";
        }
};


int main()
{
    item obj;

    obj.getdata(10,20);

    cout << "\nPrinting outdata funtion: \n";
    obj.outdata();
    cout<< "\n";

    return 0;
}