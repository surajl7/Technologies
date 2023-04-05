// Inheritance

/*
Multilevel Inheritance:

                                All Users
                    --------------|--|--|----------------
                    |             |  |  |               |
                    |    ---------------------------    |
                    |    |                         |  <-------  Own memeber functions
    derived class ---- > |    -----------------  <------------  and friendly functions
    member          |    |    |   private   <-----------------  and classes
    functions     --------->  -----------------    |    |       
                    |    |       protected         |    |
                    |    ---------------------------    |
                    |            public                 |
                    -------------------------------------

        fig. A simple view of access controle to the member of a class


                                ---------
                base class      |   A   |       Grandfather
                                ---------
                                    |
                                    |
                                ---------
                Intermediate    |   B   |       Father
                base class      ---------
                                    |
                                    |
                                ---------
                Derived class   |   C   |       Child
                                ---------

        fig. Multilavel inheritance


    A derived class with multilavel inheritance in declared is declared as follows:

        class A {...};              // base class
        class B : public A {...};   // B derived from A
        class C : public B {...};   // C derived from B

    This process can be extened to any number of levels.
*/

#include<iostream>

// BASE CLASS ---------------------------------------------------------------------
class student
{
    protected:
        int roll_number;
    public:
        void get_number(int);
        void put_number(void);
};

void student::get_number(int a)
{
    roll_number = a;
}

void student::put_number(void)
{
    std::cout << "Roll Number: " << roll_number << "\n";
}


// INTERMEDIATE BASE CLASS --------------------------------------------------------
class test : public student      // First level derivation 
{
    protected:
        float sub1;
        float sub2;
    public:
        void get_marks(float, float);
        void put_marks(void);
};

void test::get_marks(float x, float y)
{
    sub1 = x;
    sub2 = y;
}

void test::put_marks()
{
    std::cout << "Marks in SUB1 = " << sub1 << "\n";
    std::cout << "Marks in SUB2 = " << sub2 << "\n";
}


// DERIVED CLASS ------------------------------------------------------------------

class result : public test      // Second level derivation
{
        float total;
    public:
        void display(void);
};

void result :: display(void)
{
    total = sub1 + sub2;
    put_number();
    put_marks();
    std::cout << "Total = " << total << "\n";
}

// MAIN METHOD ---------------------------------------------------------------------

int main()
{
    result student1;        // student1 created

    student1.get_number(111);
    student1.get_marks(75.0, 59.5);

    student1.display();

    return 0;
}