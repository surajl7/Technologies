//Classes and Objects

/*
Ex. Displaying the list of Employee's having salaray greater then 10000;
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
    cout << "\n-------------------------------\n";
}

int main()
{
    int empCount;

    cout << "\nEnter Employee count: ";
    cin >> empCount;

    employee empArr[empCount];

    for(int i = 0; i < empCount; i++){
        empArr[i].get_info();
    }

    // for(int i = 0; i < empCount; i++){
    //     empArr[i].put_info();
    // }

    //Displaying info of employee having sal > 10000
    // for(int i = 0; i < empCount; i++){
    //     if (empArr[i].empSal > 10000){
    //         empArr[i].put_info();
    //     }
    // }

    cout << "\nDetails of employess having salary greater than 10000\n";
    cout << "\nEmp. No. | Emp. Name | Emp. Sal.\n";
    for (int i = 0; i< empCount; i++){
        if (empArr[i].empSal > 10000){
            cout << empArr[i].empNum << "\t|" << empArr[i].empName << "\t|" << empArr[i].empSal << "\n";
        }
    }

    cout << "\n";
    return 0;
}