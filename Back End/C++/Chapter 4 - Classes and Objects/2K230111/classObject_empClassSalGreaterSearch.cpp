//Classes and Objects

/*
Ex. Finding Employee's having salaray greater then 10000;
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

    cout << "Enter employee name: ";
    cin >> empName;

    cout << "Enter employee salary: ";
    cin >> empSal;
}

void employee::put_info()
{
    cout << "\nEmployee number: " << empNum;
    cout << "\nEmployee name: " << empName;
    cout << "\nEmployee Salary: " << empSal;
    cout << "\n-------------------------------\n"
}

int main()
{
    int empCount;

    cout << "\nEnter Employee count: ";
    cin >> empCount;

    employee e1;
    employee e2;

    for(int i = 0; i < empCount; i++){
        e1.get_info();
    }

    for(int i = 0; )

    return 0;
}