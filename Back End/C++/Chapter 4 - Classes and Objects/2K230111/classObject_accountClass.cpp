
//Ex. Create a class for account details

#include<iostream>
using namespace std;

class account           // creating account class
{
    public:             // Accessmodifiers -->  attributes
        char accType[20];
        int accNum;
        char accHoldersName[20];
        float bal;

    public:             // Accessmodifiers -->  function / behaviours
        void put_info()
        {
            cout << "\nEnter accout types: ";
            cin >> accType;

            cout << "Enter account number: ";
            cin >> accNum;

            cout << "Enter account holdders name: ";
            cin >> accHoldersName;

            cout << "Enter avialble balance: ";
            cin >> bal;
        }

        void get_info()
        {
            cout << "\nAccount Type: " << accType;
            cout << "\nAccount Number: " << accNum;
            cout << "\nName of account holder: " << accHoldersName;
            cout << "\nAccount balance: " << bal;
            cout << "\n----------------------------------------\n";
        }
};

int main()
{
    account a1;
    account a2;

    a1.put_info();
    a2.put_info();

    a1.get_info();
    a2.get_info();

    cout << "\n";
    return 0;
}