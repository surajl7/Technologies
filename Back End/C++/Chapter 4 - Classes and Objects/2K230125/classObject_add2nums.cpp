// Class and Objects

/*
Ex. Addition of two numbers using class and objects
*/

#include<iostream>
using namespace std;

class mathOps
{
    private:
        int num;
    public:
        void getnum(int n1)
        {
            num = n1;
        }
        int add(mathOps, mathOps);
};

int mathOps::add(mathOps obj1, mathOps obj2)
{
    return (obj1.num + obj2.num);
}

int main()
{
    int num1, num2;

    cout << "\nEnter the 1st num: ";
    cin >> num1;
    cout << "Enter the 2nd number: ";
    cin >> num2;

    mathOps a, b, c;

    a.getnum(num1);
    b.getnum(num2);

    cout << "\nAddition of " << num1 << " and " << num2 << " is: " << c.add(a, b);
    cout << "\n\n";

    return 0;
}