// Class and Object

/*
Arrays of object:
    We know that an array can be of any data type includeing struct. Similary, we can
    also have arrays of variables that are of the type class. Such variables are called
    arrays of objects. Consider the following class definition.

    class employee
    {
        private:
            char name[20];
            float age;
        public:
            void getdata(void);
            void putdata(void);
    }

    The identifier employee is a user-defined data type and can be used to create objects
    that relate to different categories of the employees.

    Example:

        employee manager[3];        // array of manager
        employee foreman[15];       // array of foreman
        employee worker[75];        // array of worker
*/


#include<iostream>
using namespace std;

class employee
{
    private:
        char name[20];
        int age;
    public:
        void getdata(void);
        void putdata(void);
};

void employee::getdata(void)
{
    cout << "\nEnter name of employee: ";
    cin >> name;

    cout << "Enter age of employee: ";
    cin >> age;

    // cout << "\n";
}

void employee::putdata(void)
{
    cout << name << "\t|\t" << age << "\n";
}


void data(int, employee []);
void dispData(int, employee []);


int main()
{
    int opt = 0;
    int mgr_count, foremans_count, workers_count;

    cout << "\nWelcome :)\n";

    cout << "\nEnter no of Managers count: ";
    cin >> mgr_count;
    employee managers[mgr_count];

    cout << "\nEnter no of foremans count: ";
    cin >> foremans_count;
    employee foremans[foremans_count];

    cout << "\nEnter no of workers count: ";
    cin >> workers_count;
    employee workers[workers_count];

    do
    {   
        cout << "\nplease choose any option from below following: ";
        cout << "\n1. Enter Managers Details";
        cout << "\n2. Enter Foremans Details";
        cout << "\n3. Enter Workers details";
        cout << "\n4. Display Managers Details";
        cout << "\n5. Display Foremans Details";
        cout << "\n6. Display Workers Details";
        cout << "\n7. Exit";

        cout << "\nEnter your option: ";
        cin >> opt;


        switch(opt)
        {
            case 1: 
                data(mgr_count, managers);
                break;

            case 2:
                data(foremans_count, foremans);
                break;

            case 3:
                data(workers_count, workers);
                break;

            case 4:
                cout << "Displaying Mangers details: ";
                dispData(mgr_count, managers);
                break;

            case 5:
                cout << "Displaying foremans details: ";
                dispData(foremans_count, foremans);
                break;

            case 6:
                cout << "Displaying workers details: ";
                dispData(workers_count, workers);
                break;

            default:
                cout << "\nThank you...\n";
        }

    }while(opt != 7);

}


void data(int count, employee arr[])
{
    for(int i = 0; i < count; i++)
    {
        arr[i].getdata();
    }

    cout << "\n";
}

void dispData(int count, employee arr[])
{
    cout << "\nName\t|\tAge\n";
    cout << "-------------------\n";
    for(int i = 0; i < count; i++)
    {
        arr[i].putdata();
    }
    cout << "\n";
}