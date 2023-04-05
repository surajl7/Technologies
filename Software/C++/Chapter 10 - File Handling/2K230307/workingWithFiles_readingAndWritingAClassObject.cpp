// Working With Files

/*
Reading And Writing A Class Object
*/

#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

class INVENTORY
{
    private:
        char name[10];              // item name
        int code;                   // item code
        float cost;                 // cost of each item
    public:
        void readdata(void);
        void writedata(void);
};

void INVENTORY :: readdata(void)    // read from keyboard
{
    std::cout << "Enter name: "; std::cin >> name;
    std::cout << "Enter code: "; std::cin >> code;
    std::cout << "Enter cost: "; std::cin >> cost;
}

void INVENTORY :: writedata(void)   // formatted display on screen
{
    std::cout << setiosflags(ios::left)
              << setw(10) << name
              << setiosflags(ios::right)
              << setw(10) << code
              << setprecision(2)
              << setw(10) << cost
              << endl;
}

int main()
{
    INVENTORY item[3];               // Declare array of 3 objects

    fstream file;                    // Input and output file

    file.open("STOCK.DAT", ios::in | ios::out);

    cout << "ENTER DETAILS FOR THREE ITEMS \n";
    for(int i = 0; i < 3; i++)
    {
        item[i].readdata();

        file.write((char *) & item[i], sizeof(item[i]));
    }
    file.seekg(0);                  // reset to start

    cout << "\nOUTPUT\n\n";
    for(int i = 0; i < 3; i++)
    {
        file.read((char *) & item[i], sizeof(item[i]));
        item[i].writedata();
    }

    file.close();
    return 0;   
}