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
        char *account_type;
        float balance;
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
            std::cout << "\nAccount Number | Account Type | Account Balance \n"
                      << account_num << "\t|\t" << account_type << "\t|\t" << balance << "\n";
            std::cout << "------------------------------------------------------\n";

        }
};

//----------------------------------------------------------------------------------

class savings : public accounts
{
    private:
        float intrest_rate = 0.04;
        float total_returns;
    public:
        void Returns(void)
        {
            total_returns = (intrest_rate * balance) + balance;
        }
        void display(void)
        {
            std::cout << "\nTotal returns: " << total_returns;
        }
};

//---------------------------------------------------------------------------------

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
        void display(void)
        {
            std::cout << "\nTotal returns: " << total_returns;
        }
};

//---------------------------------------------------------------------------------

class fixed_deposit : public accounts
{
    private:
        char term;
    public:
        void term_type(char ch)
        {
            term = ch;
        }
        void display(void)
        {
            if(term == 's' || term == 'S')
            {
                std::cout << "\nInvetment term: Short";
            }
            else if(term == 'm' || term == 'M')
            {
                std::cout << "\nInvetment term: Medium";
            }
            else
            {
                std::cout << "\nInvetment term: Long";
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
        void display(void)
        {
            std::cout << "\nTotal returns: " << total_returns;
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
        void display(void)
        {
            std::cout << "\nTotal returns: " << total_returns;
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
        void display(void)
        {
            std::cout << "\nTotal returns: " << total_returns;
        }
};

int main()
{
    savings sacc1;
    current cacc1;
    Short fsacc1;
    Medium fmacc1;
    Long flacc1;

    sacc1.acc_number(110101);
    sacc1.acc_type('s');
    sacc1.acc_balance(10000);
    sacc1.Returns();
    sacc1.accounts::display();


//     cacc1.acc_number(234444);
//     cacc1.acc_type('c');
//     cacc1.acc_balance(10000);
//     cacc1.Returns();
//     cacc1.display();


//     fsacc1.acc_number(110101);
//     fsacc1.acc_type('s');
//     fsacc1.acc_balance(10000);
//     fsacc1.Returns();
//     fsacc1.display();

//     fmacc1.acc_number(110101);
//     fmacc1.acc_type('m');
//     fmacc1.acc_balance(10000);
//     fmacc1.Returns();
//     fmacc1.display();

//     flacc1.acc_number(110101);
//     flacc1.acc_type('l');
//     flacc1.acc_balance(10000);
//     flacc1.Returns();
//     flacc1.display();
// }