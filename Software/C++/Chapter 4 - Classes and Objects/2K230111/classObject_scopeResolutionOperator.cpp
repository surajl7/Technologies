//Class and Object:

/*
Scope Resolution Operator: --> 

Sybole -->  ::

Syntax -->
    <return_type> <class_name> :: <function_name>(<arg>)
    {
        // Code
    }
*/


#include<iostream>
using namespace std;

class student
{
    public: 
        int rollNum;
        char stdName[20];

    public:
        void get_info();
        void put_info();
};

void student::get_info()
{
    cout << "\nEnter the roll number of students: ";
    cin >> rollNum;

    cout << "Enter Name of student: ";
    cin >> stdName;
}

void student::put_info()
{
    cout << "\nRoll number: " << rollNum;
    cout << "\nName: " << stdName;
    cout << "\n-----------------------------\n";
}

int main()
{
    student s1;
    student s2;

    s1.get_info();
    s2.get_info();

    s1.put_info();
    s2.put_info();

    cout << "\n";
    return 0;
}