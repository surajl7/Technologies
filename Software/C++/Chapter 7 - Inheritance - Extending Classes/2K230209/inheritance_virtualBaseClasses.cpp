// Inheritance

/*
Virtual Base Classes:
    Consider a situation where all the three kinds of inheritance, namely, multilevel,
    multiple and hierarchical inheritance, are involved.

                        ---------------
              ----------| Grandparent |-----------
              |         ---------------          |
              |                .                 |
             \|/               .                \|/
        ------------           .            ------------
        | Parent 1 |           .            | Parent 2 |
        ------------           .            ------------
              |         ---------------          |
              --------->|    Child    |<----------
                        ---------------

                    fig. Multipath inheritance


    Inheritance by the 'child' as shown in fig. might pose some problems.
    All the public and protected members of 'grandparent' are inherited into 'child'
    twise, first via 'parent1' and again via 'parent2'. This means, 'child' would have 
    duplicate sets of the members inherited from 'grandparent'.
    This introduces ambiguity and should be avoided.

    The duplication of inherited members due to these multiple paths can be avoided by
    making the comman base class (ancester class) as virtual base class while declaring 
    the direct or intermediate base classes as shown below:
    
    class A                         // grandparent
    {
        ...
        ...
    };
    class B1 : virtual public A     // parent 1
    {
        ...
        ...
    };
    class B2 : public virtual A     // parent 2
    {
        ...
        ...
    };
    class C : public B1, public B2  // child
    {
        ...                 // only one copy of A
        ...                 // will be inherited
    };


    When a class is made a virtual base class, C++ takes necessary care to see that
    only one copy of that class is inherited, regardless of how many inheritance paths
    exists between the vitual base class and a derived class.

NOTE:
    The keyword vitual and public may be used in either order.
*/ 


// Ex. A programs to implement the concept of virtual base class is illustrated in program

#include<iostream>

class student
{
    protected:
        int roll_number;
    public:
        void get_number(int a)
        {
            roll_number = a;
        }
        void put_number(void)
        {
            std::cout << "Roll No: " << roll_number << "\n";
        }
};

class test : public virtual student
{
    protected:
        float part1, part2;
    public:
        void get_marks(float x, float y)
        {
            part1 = x;
            part2 = y;
        }
        void put_marks(void)
        {
            std::cout << "Marks obtained: " << "\n"
                       << "Part1 = " << part1 << "\n"
                       << "Part2 = " << part2 << "\n";
        }
};

class sports : public virtual student
{
    protected:
        float score;
    public:
        void get_score(float s)
        {
            score = s;
        }
        void put_score(void)
        {
            std::cout << "Sport wt: " << score << "\n\n";
        }
};


class result : public test, public sports
{
    private:
        float total;
    public:
        void display(void);
};

void result :: display(void)
{
    total = part1 + part2 + score;

    put_number();
    put_marks();
    put_score();

    std::cout << "Total Score: " << total << "\n";
}

int main()
{
    result student_1;
    student_1.get_number(678);
    student_1.get_marks(30.5, 25.5);
    student_1.get_score(7.0);
    student_1.display();

    return 0;
}

