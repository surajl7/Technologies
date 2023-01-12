
/*
Ex. Display the list of books details having given price range.
*/

#include<iostream>
using namespace std;

int booklis;

class book                      /* Books class */
{
    public:                     /* Accessmodifier --> Attributes */
        int bookNo;
        char bookName[20];
        char bookAuthor[20];
        float price;

    public:                      /* Accessmodifier --> functions / states */
        void get_info();
        void put_info();
};

void book::get_info()
{   
    cout << "\nEnter books number: ";
    cin >> bookNo;

    cout << "Enter book name: ";
    cin >> bookName;

    cout << "Enter book's author: ";
    cin >> bookAuthor;

    cout << "Enter price: ";
    cin >> price;   
}

void book::put_info()
{
    // cout << "\nBook No: " << bookNo;
    // cout << "\nBook Name: " << bookName;
    // cout << "\nBook's Author: " << bookAuthor;
    // cout << "\nPrice of the book: " << price;
    // cout << "\n----------------------------------\n";

    cout << bookNo << "\t|" << bookName << "\t|" << bookAuthor << "\t|" << price << "\n";
}


int main()
{
    int bookCount;
    float lwrlmt, uprlmt;

    cout << "\nEnter count of books: ";
    cin >> bookCount;

    book bookArr[bookCount];

    for(int i = 0; i < bookCount; i++)
    {
        bookArr[i].get_info();
    }

    cout << "\nDisplaying all data...\n";
    cout << "\nBook no. | Book Name | Book Author | Book Price";
    cout << "\n-------------------------------------------------\n";
    for(int i = 0; i< bookCount; i++)
    {
        bookArr[i].put_info();
    }


    //Displaying the list of book details having given price range
    cout << "\nDisplaying list of books in given price range...\n";

    cout << "\nEnter lower price limit: ";
    cin >> lwrlmt;

    cout << "Enter upper price limit: ";
    cin >> uprlmt;

    cout << "\nBook no. | Book Name | Book Author | Book Price";
    cout << "\n-------------------------------------------------\n";
    for(int i = 0; i < bookCount; i++)
    {
        if(bookArr[i].price >= lwrlmt && bookArr[i].price <= uprlmt)
        {
            bookArr[i].put_info();
        }
    }


    return 0;
}