// Inheritance

/*
Making a private member inheritable:
    To do if the private data needs to be inheritable by a derived class, this can be
    accomplished by modifying the visibility limit of the private member by making it public.
    This would make it accessiable to all the other functions of the program, thus 
    taking away the advantage of data hiding.

    PROTECTED:
    C++ provides a third visibility modifier, protected, which serve a limited purpose
    in inheritance.
    A member declared as protected is accessible bby the member function within its class
    and any class immidiately derived from it.
    It cannot be accessed by the functions outside these two classes. 
    A class can now use all the three visibility modes as illustreted below:

        class alpha
        {
            private:                // optional
                ...                 // visible to member functions
                ...                 // within its class
            
            protected:
                ...                 // visible to member functions
                ...                 // of it's own and derived class
            
            public:
                ...                 // visible to all functions
                ...                 // in the program
        };

    When a protected member is inherited in public mode, it becomes protechted in the 
    derived class too and there for is accessible by the member functions of the drived 
    class. and it is also ready for further inheritance. 

    A protechted member, inherited in the private mode derivation, becomes private 
    in the derived class. Although it is avaiable to the member function of the derived 
    class, it is not avaialable for further inheritance (since private member cannot be 
    inherited).

    The keywords private, protected and public may apper in any order and any number of times
    in the declaration of a class.

        class beta
        {
            protected:
                ...
            public:
                ...
            private:
                ...
            public:
                ...
        };

    is a valid class defination.

    However, the normal practice is to use them as follows:

        class beta
        {
                ...             // private by default
                ...
            protected:
                ...
            public:
                ...
        }

    Visibility of inherited members:
                                            Derived class visibility
    Base class visibility       --------------------------------------------------------
                                Public              private             Protected 
                                derivation          derivation          derivation
    ------------------------------------------------------------------------------------
    Private             ---->   Not Inherited       Not Inherited        Not Inherited
    Protected           ---->   Protected           Private              Protechted
    Public              ---->   Public              Private              Protected 


*/ 

