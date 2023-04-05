// Polymorphism

/*
Pure Virtual Function:
    It is normal practice to declare a function virtual inside the base class and redefined
    it in the derived classes. The function inside the base class is seldom used for performing 
    any task. It only server as a placeholder. for example, we have not defined any object of 
    class media and therefore the function display() in the base class has been defined
    'empty'. Such functions are called "do-nothing" Functions.

    A "do-nothing" function may be defined as follows:

        virtual void display() = 0;

    Such functions are called pure virtual functions. A pure virtual function is a function
    declared in a base class that has no definition relative to the base class. In such cases,
    the compiler requires each derived class to either defined the function or redeclare it as
    a pure virtual function. Remember that a class containing pure virtual functions cannot
    be used to declare any objects of its own.
    As stated earlier, such classes are called 'abstract base classes'.
    The main objective of an abstract base class is to provide some traits to the derived classes
    and to create a base pointer requires for achiving run time polymorphism. 
*/

/*
! SUMMARY
    -   Polymorphism simply means one name having multiple forms.
    -   There are two types of polymorphism, namely, compile time polymorphism and run
        time polymorphism
    -   Functions and operators overloading are examples of compile time polymorphism.
        The oveloading member functions are selected for invoking by matching arguments,
        both type and number. The compiler knows this information at the compile time and,
        Therefore, compiler is able to select the appropriate functions for a praticular call
        at the compile time itself. This is called early or static binging or static liniking.
        It means that an object is bound to its function call at compile time.
    -   In run time polymorphism, an appropriate member function is selected while the
        program is running. C++ supports runtime polymorphism with help of virtual functions.
        It is called late or dynamic binding because the appropriate function is selected 
        dynamically at runtime. Dynamic binding requires uses of pointers to objects and is one
        of the powerful features of C++.
    -   Object pointers are useful in creating objects at runtime. it can be used to access
        the public members of an object, along with an arrow operator.
    -   A this pointer refers to an object that currently invokes a member function.
        For example, the function call a.show() will set the pointer 'this' to the address of the 
        object 'a'.
    -   Pointer to objects of a base class type are compatible  with pointers to objects
        of a derived class. Therefore, we can use a single pointer variable to point to 
        objects of base class as well as derived classes.
    -   When a function is made virtual, C++ determines which function to use at runtime 
        based on the type of object pointed to by the base pointer, rather that the type of
        the pointer. By making the base pointer to point to differnt objects, we can execute
        different versions of the virtual function.
    -   Run time polymorphism is achived only when a virtual function is accessed through 
        a pointer to the base class. It cannot be achived using object name along with the dot 
        operator to access virtual function.
    -   We can have virtual destructors but not virtual constructors.
    -   If a virtual function is defined in the base class, it need not be necessarily 
        redefined in the derived class. In such cases, the respective calls will invoke
        the base class function.
    -   A virtual function, equated to zero is called a pure virtual function.
        It is a function declared in a base class that has no defined relative to the base
        class. A class containing such pure function is called an abstract an abstrct class. 
*/