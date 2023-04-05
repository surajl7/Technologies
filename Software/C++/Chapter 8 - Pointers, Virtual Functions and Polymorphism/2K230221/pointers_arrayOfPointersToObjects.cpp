// Pointers

// Array of pointers to Objects

#include<iostream>
#include<cstring>
// #include<string.h>

using namespace std;

class city
{
    protected:
        char *name;
        int len;
    public:
        city()
        {
            len = 0;
            name = new char[len+1];
        }
        void getname(void)
        {
            char *s;
            s = new char[30];

            cout << "Enter city name: ";
            cin >> s;

            len = strlen(s);
            name = new char[len+1];
            strcpy(name, s);
        }
        void printname(void)
        {
            cout << name << "\n";
        }
};

int main()
{
    city *cptr[10];         // array of 10 pointers to cities

    int n = 1;
    int option;

    do{
        cptr[n] = new city; // create new city
        cptr[n] -> getname();
        n++;
        cout << "Do you want to enter one more name?\n";
        cout << "(Enter 1 for yes 0 for no): ";
        cin >> option;
    }while(option);

    cout << "\n\n";

    for(int i = 1; i<=n; i++)
    {
        cptr[i] -> printname();
    }
    return 0;
}