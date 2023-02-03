// Inheritance

// Single Inheritance

#include<iostream>

class B
{
    private:
        int a;          // private; not inheritable
    public:
        int b;          // public; ready for inheritance
        void get_ab();
        int get_a(void);
        void show_a(void);
};

class D : public B      // public derivation
{
    private:
        int c;
    public:
        void mul(void);
        void display(void);
};

//----------------------------------------------------------------------

void B :: get_ab(void)
{
    a = 5;
    b =  10;
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
    c = b * get_a();
}

void D :: display()
{
    std::cout << "a = " << get_a() << "\n";
    std::cout << "b = " << b << "\n";
    std::cout << "c = " << c << "\n\n";
}

//----------------------------------------------------------------------

int main()
{
    D d;

    d.get_ab();
    d.mul();
    d.show_a();
    d.display();

    d.b = 20;
    d.mul();
    d.display();

    return 0;
}
