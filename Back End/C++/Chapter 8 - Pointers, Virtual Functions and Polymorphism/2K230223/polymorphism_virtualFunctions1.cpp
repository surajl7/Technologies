// Polymorphism

/*
Virtual Functions:
    -   We muct access virtual function through the use of a pointer declared as a pointer
        to the base class.
    -   Why can't we use the object name (with the dot operator) the same way as any other
        member function to call the virtual functions?
    -   We can, but remember, run time polymorphism is achieved only when a virtual
        function is accessed through a pointer to the base class.
*/

// Ex. Run Time Polymorphism

#include<iostream>
#include<cstring>

class media
{
    protected:
        char title[50];
        float price;
    public:
        media(char *s, float a)
        {
            strcpy(title, s);
            price = a;
        }
        virtual void display() { } // empty virtual function
};

class book : public media
{
    private:
        int pages;
    public:
        book(char *s, float a, int p) : media(s, a)
        {
            pages = p;
        }
        void display();
};

class tape : public media
{
    private:
        float time;
    public:
        tape(char *s, float a, float t) : media(s, a)
        {
            time = t;
        }
        void display();
};

void book :: display()
{
    std::cout << "\n Title: " << title;
    std::cout << "\n Pages: " << pages;
    std::cout << "\n Price: " << price;
}

void tape :: display()
{
    std::cout << "\n Title: " << title;
    std::cout << "\n Play time: " << time << "mins";
    std::cout << "\n Price: " << price;
}

int main()
{
    char * title = new char[30];
    float price, time;
    int pages;

    // Books details
    std::cout << "\n ENTER BOOKS DETAILS\n";
    std::cout << " Title: ";
    std::cin >> title;
    std::cout << " Price: ";
    std::cin >> price;
    std::cout << " Pages: ";
    std::cin >> pages;

    book book1(title, price, pages);

    // Tape details
    std::cout << "\n ENTER TAPE DETAILS\n";
    std::cout << " Title: ";
    std::cin >> title;
    std::cout << " Price: ";
    std::cin >> price;
    std::cout << " Play time (mins): ";
    std::cin >> time;

    tape tape1(title, price, time);

    media* list[2];
    list[0] = &book1;
    list[1] = &tape1;

    std::cout << "\n MEDIA DETAILS";

    std::cout << "\n............BOOK............";
    list[0] -> display(); // display book details

    std::cout << "\n............TAPE............";
    list[1] -> display(); // display tape details

    return 0;
}


/*
Rules for Virtual Functions:
    When virtual function are created for implementating late binding, we should observe
    some basic rules that satisfy the compiler requirements:

    1.  The Virtual functions must be members of same class.
    2.  They cannot be static members.
    3.  They are accessed by using object pointers.
    4.  A virtual function can be a friend of another class.
    5.  A virtual function in a base class must be defined, even though it may not be 
        used.
    6.  The prototypes of the base class version of a virtual function and all the derived
        class versions must be identical. If two functions with the same name have different
        prototypes, C++ considers them as overloaded functions, and the virtual function 
        mechanism is ignored.
    7.  We cannot have virtual constructors, but we can have virtual ddestructors.
    8.  While a base pointer can point to any type of the derived object, the reverse is not
        true. That is to say, we can not use the pointer to a derived class to access to access
        an object of base type.
    9.  When a base pointer points to a derived class, incrementing or decrementing it will
        not make it to point to the next object of the derived class.
        It is incremented or decremented only relative to its base type. Therefore, we should
        not use this method to move the pointer to the next object.
    10. If a virtual function is defined in the base class, it need not be necessarily 
        redefined in the derived class.
        In such cases, calls will invokes the base function.
*/

