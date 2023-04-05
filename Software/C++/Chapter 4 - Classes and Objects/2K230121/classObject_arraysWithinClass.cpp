// Class and objects

/*
Arrays with in Class: 
    The arrays can be used as member variables in a class. The following class
    definition is valid.

    const int size = 10;        // provides value for array size

    class array
    {
            int a[size];        // 'a' is int type array
        public:
            void setval(void);
            void display(void);
    };
*/

// Ex. Processing Shopping List

/*=================================================================*/

#include<iostream>
using namespace std;

const int m = 50;

class ITEMS
{   
    private: 
        int itemCode[m];
        float itemPrice[m];
        int count;

    public:
        void CNT(void)
        {
            count = 0;              // initializes count to 0
        }
        void getitem(void);         
        void displaySum(void);
        void remove(void);
        void displayItems(void);
};

/*=================================================================*/

void ITEMS::getitem(void)           // assign values to data
                                    // member of item
{
    cout << "Enter item code: ";
    cin >> itemCode[count];

    cout << "Enter item cost: ";
    cin >> itemPrice[count];

    count++;
}

void ITEMS::displaySum(void)        // display total value of all items
{
    float sum = 0;

    for(int i = 0; i < count; i++)
    {
        sum = sum + itemPrice[i];
    }

    cout << "\nTotal price of all the items in the list: " << sum << "\n";
}

void ITEMS::remove(void)             // delete a specific item
{   
    int a;
    cout << "Enter item code: ";
    cin >> a;

    for(int i = 0; i < count; i++)
    {
        if (itemCode[i] == a)
        {
            cout << "\nItem code: " << itemCode[i] << " Item Price = " << itemPrice[i];
            itemPrice[i] = 0;
        }
    }
    cout << "\ndeleting the item from the list...\n";
}

void ITEMS::displayItems(void)      // displaying items
{
    cout << "\nCode\t|\tPrice";

    for(int i=0; i < count; i++)
    {
        // cout << "\n" << itemCode[i];
        // cout << "   " << itemPrice[i];
        cout << "\n" << itemCode[i] << "\t|\t" << itemPrice[i];
    }

    cout << "\n";
}

/*=================================================================*/

int main()
{
    ITEMS order;
    order.CNT();
    int x;

    do                      // do....while loop
    {
        // cout << "\nYou can do the following;"
        //      << "Enter appropriate number \n";
        cout << "\nChoose the option from following list:";
        cout << "\n1 : Add an item ";
        cout << "\n2 : Display all items";
        cout << "\n3 : Display total price of all the items in the list";
        cout << "\n4 : Delete an item";
        cout << "\n5 : Quite";
        cout << "\n\nWhat is your option? --> ";

        cin >> x;

        switch(x)
        {
            case 1: order.getitem(); break;
            case 2: order.displayItems(); break;
            case 3: order.displaySum(); break;
            case 4: order.remove(); break;
            case 5: cout << "\nExiting... \nThank you :) \n\n"; break;
            default : cout << "\nError in input :( Try again\n";
        }   
    } while(x != 5);            // do...while ends
    
    return 0;
}