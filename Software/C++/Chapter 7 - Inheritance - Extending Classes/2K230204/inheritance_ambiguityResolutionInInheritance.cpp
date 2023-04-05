//Inheritance 

/*
Ambiguity Resolution in Inheritance:
    Occassionally, we may face a problem in using the multiple inheritance, when a function 
    with the same name appears in more than one base class.
    Consider the following two classes.

        class M
        {
            public:
                void display(void)
                {
                    cout << "Class M\n";
                }
        };

        class N
        {
            public:
                void display(void)
                {
                    cout << "Class N\n";
                }
        };
    
    Which display() function is used by the derived class when we inherit these two classes?
    We can solve this problem by defining a named instance within the derived class, using-the 
    class resolution operator with the function as shown below:

        class p : public M, public N
        {
            public:
                void display(void)          // overrides display() of M and N
                {
                    M :: display();
                }
        };

    we can now use the drived class as follows:

        int main()
        {
            P p;
            p.display();
        }

    Ambiguity may also arise in single inheritance applications. For instance, consider
    the following situation:

        class A
        {
            public:
                void display()
                {
                    cout << "A\n";
                }
        };

        class B : public A
        {
            public:
                void display()
                {
                    cout << "B\n";
                }
        };

    In this case, the function in the derived class overrides the inheritance function
    and therefor, a simple call a display() by B type object will invoke function 
    defined in B only.
    However, we may invoke the function defined in A by using the scope resolution
    operator to specify the class.

    Example:

        int main()
        {
            B b;                        // derived class object
            b.display();                // invokes display() in B
            b.A::display();             // invokes display() in A
            b.B::display();             // invokes display() in B

            return 0;
        }

    This will produce the following output:
        B
        A
        B
*/