// Constructor and distructors 

/*
Dynamic Initialization of Objects:
    Class objects can be initialized dynamically too. This is to say, the initial value of an
    object may be provided during run time.
    One advantage of dynamic initialization is that we can provide various initialization formats,
    using overloaded constructors.
    This provides the flexibility of using different format of data at run time depending 
    upon the situation.

    Consider the long term deposit schemes working in the commercial banks. the banks
    provide different interest rates for diffrent schemes as well as for different periods
    of investment.  
*/

// Ex. illustrates how to use the class variables for holding account details and how to construct
// these variables at run time using dynamic initialization.

// Long term fixed deposite systems

#include<iostream>
using namespace std;

class Fixed_deposit
{
    private:
        long int P_amount;      // Principal amount
        int      Years;         // Period of invetment
        float    Rate;          // Interest rate
        float    R_value;       // Return value of amount
    public:
        Fixed_deposit() {}
        Fixed_deposit(long int p, int y, float r=0.12);
        Fixed_deposit(long int p, int y, int r);
        void display(void);
};

Fixed_deposit::Fixed_deposit(long int p, int y, float r)
{
    P_amount = p;
    Years = y;
    Rate = r;
    R_value = P_amount;
    for(int i = 1; i <= y; i++)
    {
        R_value = R_value * (1.0 + r);
    }
}

Fixed_deposit::Fixed_deposit(long int p, int y, int r)
{
    P_amount = p;
    Years = y;
    Rate = r;
    R_value =  P_amount;

    for(int i = 1; i <= y; i++)
    {
        R_value = R_value*(1.0+float(r)/100);
    }
}

void Fixed_deposit::display(void)
{
    cout << "\n"
         << "Principal Amount = " << P_amount << "\n"
         << "Return Value = " << R_value << "\n";
}

int main()
{
    Fixed_deposit FD1, FD2, FD3;        // deposit created
    long int p;                         // principle amount

    int y;                              // investment period, years
    float r;                            // interest rate, decimal form
    int R;                              // interest rate, percent form

    cout << "Enter amount, period, interest rate (in percent)" << "\n";
    cin >> p >> y >> R;
    FD1 = Fixed_deposit(p,y,R);

    cout << "Enter amount, period, interest rate (decimal form)" << "\n";
    cin >> p >> y >> r;
    FD2 = Fixed_deposit(p,y,r);

    cout << "Enter amount and period" << "\n";
    cin >> p >> y;
    FD3 = Fixed_deposit(p,y);

    cout << "\nDeposit 1";
    FD1.display();

    cout << "\nDeposit 2";
    FD2.display();

    cout << "\nDeposit 3";
    FD3.display();

    return 0;
}