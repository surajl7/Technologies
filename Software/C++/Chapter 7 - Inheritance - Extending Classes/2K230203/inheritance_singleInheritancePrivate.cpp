// Inheritance

// Single Inheritance : Private

#include<iostream>

class B
{
    private:
        int a;          // private; not inheritance
    public:
        int b;          // public; ready for inheritance
        void get_ab();
        int get_a(void);
        void show_a(void);
};

class D : private B     // private derivation
{
    private:
        int c;
    public:
        void mul(void);
        void display(void);
};

//-----------------------------------------------------------------------

void B :: get_ab(void)
{
    std::cout << "Enter value for a and b: ";
    std::cin >> a >> b;
}

int B :: get_a()
{
    return a;
}

void B :: show_a()
{
    std::cout << "a = " << a << "\n";
}

void D :: mul()
{
    get_ab();
    c = b * get_a();        // 'a' cannot be used directly
}

void D :: display()
{
    show_a();               // output value of 'a'
    std::cout << "b = " << b << "\n"
              << "c = " << c << "\n\n";
}

//------------------------------------------------------------------

int main()
{
    D d;

    // d.get_ab();      WON'T WORK
    d.mul();
    // d.show_a();      WON'T WORK
    d.display();
    // d.b = 20;        WON'T WORK; b has become private
    d.mul();
    d.display();

    return 0;

}

/*
NOTE:
    Suppose a base class and a derived class define a function of the same name.
    What will happen when a derived class object invokes the function?
    In Such a cases, the derived class fucntion supersedes the base class function.
    The base class function. will be called only if the derived class does not redefined
    the function.
*/