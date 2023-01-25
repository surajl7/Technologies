// Class and Objects

// Ex. swapping two numbers

#include<iostream>
using namespace std;

class mathOps
{
    private:
        int num;
    public:
        void getnum(int);
        void swapnum(mathOps, mathOps);
};

void mathOps::getnum(int n)
{
    num = n;
}

void mathOps::swapnum(mathOps o1, mathOps o2)
{
    o1.num = o1.num + o2.num;
    o2.num = o1.num - o2.num;
    o1.num = o1.num - o2.num;

    cout << "\nNumber after swapping...\n";
    cout << o1.num << "\t|\t" << o2.num << "\n";
}

int main()
{
    int num1, num2;

    cout << "\nEnter 1st num: ";
    cin >> num1;

    cout << "\nEnter 2nd num: ";
    cin >> num2;

    mathOps obj1, obj2, obj3;

    obj1.getnum(num1);
    obj2.getnum(num2);

    cout << "\nNumbers before swapping: \n";
    cout << num1 << "\t|\t" << num2 << "\n";

    obj3.swapnum(obj1, obj2);

    cout << "\n\n";
}