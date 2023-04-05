// Class and Objects

/*
Frined Function call by reference:
    A frined function can be called by reference.
    In this case, local copies of the object are not made. Insted, a pointer to address of the
    object is passed and the called function directly works on the actual object used in
    the call.

    This method can be used to alter the values of the private members of a class.
    Remember, altering the values of private members is against the basic principel of data
    hiding. It should be used when absolutly necessary.
*/

// Ex. using comman frined function to exchange the private values of two classes.
// the function is called by reference.


#include<iostream>
using namespace std;

class class_2;

class class_1
{
    private:
        int value1;
    public:
        void indata(int a)
        {
            value1 = a;
        }
        void display(void)
        {
            cout << value1 << "\n";
        }
        friend void exchange(class_1 &, class_2 &);
};

class class_2{
    private:
        int value2;
    public:
        void indata(int a)
        {
            value2 = a;
        }
        void display(void)
        {
            cout << value2 << "\n";
        }   
        friend void exchange(class_1 &, class_2 &);
};

void exchange(class_1 & x, class_2 & y)
{
    int temp = x.value1;
    x.value1 = y.value2;
    y.value2 = temp;
}

int main()
{
    class_1 C1;
    class_2 C2;

    C1.indata(100);
    C2.indata(200);

    cout << "Value before exchange" << "\n";
    C1.display();
    C2.display();

    exchange (C1, C2);      //swapping
    cout << "Values after exchange " << "\n";
    C1.display();
    C2.display();

    return 0;
}

/*
NOTE:
    The object x and y are aliase of C1 and C2 respectively.
    The statements
        int temp = x.value1;
        x.value1 = y.value2;
        y.value2 = temp;

    directly modify the values of value1 and value2 declared in class_1 and class_2
*/