
//Ex. Create a class for employee details

#include<iostream>
using namespace std;

class employee
{
    public:                 // Accessmodifier --> attributes
        int empNum;
        char empName[20];
        float sal;

    public:                 // Accessmodifier --> functions / behaviours 
        void get_info()
        {
            cout << "\nEnter employee number: ";
            cin >> empNum;

            cout << "Enter employee name: ";
            cin >> empName;

            cout << "Enter employee salary: ";
            cin >> sal; 
        }

        void put_info()
        {
            cout << "\nEmployee number: " << empNum;
            cout << "\nEmployee name: " << empName;
            cout << "\nEmployee salary: " << sal;
            cout << "\n----------------------------\n";
        }
};

int main()
{
    employee e1;
    employee e2;

    e1.get_info();
    e2.get_info();

    e1.put_info();
    e2.put_info();

    cout << "\n";
    return 0;
}