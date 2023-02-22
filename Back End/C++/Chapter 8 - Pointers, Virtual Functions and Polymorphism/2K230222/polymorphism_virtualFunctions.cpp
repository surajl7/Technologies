// Polymorphism

/*
Virtual functions:
    -   As mentioned earlier, polymorphism refers to the proparty by which objects belonging to
        different classes are able to respond to the same message, but in diffrent forms.
    -   An essential requirment of polymorphism is therefore the ability to refer to objects
        without any regard to their classes. This necessitates the use of a single pointer
        variable to refer to the objects of diffrent classes.
    -   Here, we use the pointer to base class to refer to all the derived objects of different
        classes. Here, we use the pointer to base class to refer to all the derived objects.
        But, we just discovered that a base pointer, even when it is made to contain the address of
        a derived class, always exexutes the function in the base class.
        The compiler simply ignores the contents of the pointer and chooses the member function
        that matches the type of the pointer.
    -   Polymorphism is achived using what is known as "virtual" function.

    -   When we use the same function name in the both the base and dderived classes, the 
        function in the base class is declared as virtual using the keyword virtual preceding
        its normal declaration. 
    -   When a function is made virtual, C++ determines which function to use at the run
        time based on the type of object pointed to by the base pointer, rather that the 
        type of the pointer. thuse. by makign the base class pointer to point to
        different objects. 
    -   We can execute diffrent versions of the virtual function.
*/