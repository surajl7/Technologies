
//Ex. Create a class for books details

#include<iostream>
using namespace std;

class books{            // books class
    public:             // Accessmodifier -->  attributes
        int bookNum;
        char bookName[20];
        char bookAuthor[20];
        float price;

    public:             // Accessmodifier -->  functions / behaviours
        void put_info()
        {
            cout << "\nEnter books number: ";
            cin >> bookNum;

            cout << "Enter books name: ";
            cin >> bookName;

            cout << "Enter books Author: ";
            cin >> bookAuthor;

            cout << "Enter book's price: ";
            cin >> price;
        }

        void get_info()
        {
            cout << "\nBook Number: " << bookNum;
            cout << "\nBook Name: " << bookName;
            cout << "\nBook Author: " << bookAuthor;
            cout << "\nBook's price: " << price;
            cout << "\n--------------------------------\n";
        }
};


int main()
{
    books b1;
    books b2;

    b1.put_info();
    b2.put_info();

    b1.get_info();
    b2.get_info();

    cout << "\n";
    return 0;
}