// Inheritance

/*
    Ex. Classification of bank accounts

                                ------------
                                | Accounts |
                                ------------
                                  |   |   |
                -------------------   |   -----------------
                |                     |                   |
        -------------------           |          -------------------
        | Savings account |           |          | Current account |
        -------------------           |          -------------------
                                      |
                        --------------------------
                        | Fixed-deposite account |
                        --------------------------
                                |     |    |
               ------------------     |    --------------       
               |                      |                 |
        --------------                |           --------------
        | Short-term |                |           |  Long-term |
        --------------                |           --------------
                                      |
                                ---------------
                                | Medium-term |
                                ---------------
*/

#include<iostream>
#include<string.h>

class accounts 
{
    protected:
        int account_num;
        char account_type[20];
        float balance;
        float total_returns;
    public:
        void acc_number(int num)
        {
            account_num = num;
        }
        void acc_type(char ch)
        {
            if(ch == 's' || ch == 'S')
            {
                strcpy(account_type, "Savings");
            }
            else if(ch == 'c' || ch == 'C')
            {
                strcpy(account_type, "Current");
            }
            else
            {
                strcpy(account_type, "Fixed deposite");
            }
        }
        void acc_balance(float num)
        {
            balance = num;
        }

        void display(void)
        {
            std::cout << "\nAccount Number  | Account Type | Account Balance \n"
                      << account_num << "\t\t| " << account_type << "\t|\t" << balance << "\n";
            std::cout << "------------------------------------------------------\n";
        }
};

// ----------------------------------------------------------------------------------

class savings : public accounts
{
    private:
        float intrest_rate = 0.04;
        float total_returns;
    public:
        int Returns()
        {
            total_returns = (intrest_rate * balance) + balance;
            return total_returns;
        }

        void display(savings obj)
        {
            std::cout << "\nAccount Number  | Account Type | Account Balance | Total Returns\n"
                      << account_num << "\t\t| " << account_type << "\t| " << balance << "\t\t| " << obj.total_returns << "\n";
            std::cout << "-------------------------------------------------------------------------\n";
        }
};

// ---------------------------------------------------------------------------------

class current : public accounts
{
    private:
        float intrest_rate = 0;
        float total_returns;
    public:
        void Returns(void)
        {
            total_returns = (intrest_rate * balance) + balance;
        }
        void display(current obj)
        {
            std::cout << "\nAccount Number  | Account Type | Account Balance | Total Returns\n"
                      << account_num << "\t\t| " << account_type << "\t| " << balance << "\t\t| " << obj.total_returns << "\n";
            std::cout << "-------------------------------------------------------------------------\n";
        }
};

//---------------------------------------------------------------------------------

class fixed_deposit : public accounts
{
    protected:
        char term[20];
    public:
        void term_type(char ch)
        {
            if(ch == 's' || ch == 'S')
            {
                strcpy(term, "Short");
            }
            else if(ch == 'm' || ch == 'M')
            {
                strcpy(term, "Medium");
            }
            else
            {
                strcpy(term, "Long");
            }
        }
};

class Short : public fixed_deposit
{
    private:
        float intrest_rate = 0.06;
        float total_returns;
    public:
        void Returns(void)
        {
            total_returns = (intrest_rate * balance) + balance;
        }
        void display(Short obj)
        {
            std::cout << "\nAccount Number  | FD Invetment Term | Account Balance | Total Returns\n"
                      << account_num << "\t\t| " << term << "\t| " << balance << "\t\t| " << obj.total_returns << "\n";
            std::cout << "-------------------------------------------------------------------------\n";
        }
};

class Medium : public fixed_deposit
{
    private:
        float intrest_rate = 0.07;
        float total_returns;
    public:
        void Returns(void)
        {
            total_returns = (intrest_rate * balance) + balance;
        }
        void display(Medium obj)
        {
            std::cout << "\nAccount Number  | FD Invetment Term | Account Balance | Total Returns\n"
                      << account_num << "\t\t| " << term << "\t| " << balance << "\t\t| " << obj.total_returns << "\n";
            std::cout << "-------------------------------------------------------------------------\n";
        }
};

class Long : public fixed_deposit
{
    private:
        float intrest_rate = 0.09;
        float total_returns;
    public:
        void Returns(void)
        {
            total_returns = (intrest_rate * balance) + balance;
        }
        void display(Long obj)
        {
            std::cout << "\nAccount Number  | FD Invetment Term | Account Balance | Total Returns\n"
                      << account_num << "\t\t| " << term << "\t| " << balance << "\t\t| " << obj.total_returns << "\n";
            std::cout << "-------------------------------------------------------------------------\n";
        }
};

int main()
{
    // accounts sacc1;

    savings sacc1;

    std::cout << "SAVINGS account details: ";
    sacc1.acc_number(110101);
    sacc1.acc_type('s');
    sacc1.acc_balance(10000);
    sacc1.accounts::display();
    sacc1.Returns();
    sacc1.display(sacc1);

    current cacc1;
    cacc1.acc_number(234444);
    cacc1.acc_type('c');
    cacc1.acc_balance(10000);
    cacc1.accounts::display();
    cacc1.Returns();
    cacc1.display(cacc1);

    Short fsacc1;
    fsacc1.acc_number(110101);
    fsacc1.acc_type('s');
    fsacc1.acc_balance(10000);
    fsacc1.accounts::display();
    fsacc1.Returns();
    fsacc1.display(fsacc1);

    Medium fmacc1;
    fmacc1.acc_number(110101);
    fmacc1.term_type('m');
    fmacc1.acc_balance(10000);
    fmacc1.accounts::display();
    fmacc1.Returns();
    fmacc1.display(fmacc1);

    Long flacc1;
    flacc1.acc_number(110101);
    flacc1.acc_type('l');
    flacc1.acc_balance(10000);
    flacc1.accounts::display();
    flacc1.Returns();
    flacc1.display(flacc1);
}


/*
NOTE:
    In C++, such problems can be easily converted into class hierarchies, The base class
    will include all the features that are common to the subclasses. A subclass can be
    constructed by inheriting the properties of the base class A subclass can serve as
    a base class for the lower level classes and so on.
*/