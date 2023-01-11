// Classes and Object

//Scope Resolution Operator

/*
Ex. Create an class for multiple employees
*/

#include<iostream>
using namespace std;

class employee
{
    public:
        int empNum;
        char empName[20];
        float empSal;

    public:
        void get_info();
        void put_info();

};

void employee::get_info()
{
    cout << "\nEnter employee number: ";
    cin >> empNum;

    cout << "Enter Employee name: ";
    cin >> empName;

    cout << "Enter Employee salary: ";
    cin >> empSal;
}

void employee::put_info()
{
    cout << "\nEmployee number: " << empNum;
    cout << "\nEmployee name: " << empName;
    cout << "\nEmployee salary: " << empSal;
    cout << "\n----------------------------------\n";
}


int main()
{
    int empCount;

    cout << "Enter employee count: ";
    cin >> empCount;

    employee empArr[empCount];

    for(int i = 0; i < empCount; i++)
    {
        empArr[i].get_info();
    }

    for(int i = 0; i < empCount; i++)
    {
        empArr[i].put_info();
    }

    cout << "\n";
    return 0;
}