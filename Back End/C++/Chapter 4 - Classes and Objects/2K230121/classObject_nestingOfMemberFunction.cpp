// Class and Objects

/*
Nesting of member functions:
    We discussed that a member function of a class can be called only by an object of that
    class using a dot operator. However, there is an exception to this.
    A Member function can be called by using its name inside another member function
    of the same class. This is knows as nesting of member function.
*/

#include<iostream>
using namespace std;

class set
{
        int m, n;       // bydefault accessmodifier is private
    public:
        void input(void);
        void display(void);
        int largest(void);      
};

int set::largest(void)
{
    if(m >= n)
        return (m);
    else
        return (n);
}

void set::input(void)
{
    cout << "\nEnter the value of m: ";
    cin  >> m;

    cout << "Enter the value of n: ";
    cin >> n;
}


void set::display(void)
{
    cout << "\nLargest value = "
         << largest() << "\n\n";          // calling member function
}

int main()
{
    set A;

    A.input();
    A.display();

    return 0;
}
