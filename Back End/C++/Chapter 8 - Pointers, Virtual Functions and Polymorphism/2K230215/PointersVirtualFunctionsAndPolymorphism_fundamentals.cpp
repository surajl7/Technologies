// Pointers, Virtual Functions and Polymorphism

/*
Introdunction:
    Polymorphism:
    -   It simply means 'one name, multiple forms'.
    -   Polyorphisum can be implememnted using the overloaded functions and operators.

    Compile time polymorphism:
    -   The overloaded member functions are 'selected' for invoking by matching arguments,
        both type and number.
    -   This information is known to the compiler at the compile time and, therefore, 
        compiler is able to select the appropriate function for a particuler call at the
        compile time itself.
    -   This is called "Early binding or Static binding or static linking".
                        --------------------------------------------------
    -   early  binding simply means that an object is bound to its function call at
        compile time

    Run time polymorphism:
    -   It would be nice if the appropriate member function could be selected while the
        program is running. This is known as Run Time Polimorphism.
    -   C++ supports a mechnism known as virtual function to achive run time polymorphism.

                            ----------------
                            | Polymorphism |
                            ----------------
                                    |
                    ---------------------------------
                    |                               |
            ----------------                ----------------
            | Compile time |                | Run time     |
            | Polymorphism |                | Polymorphism |
            ----------------                ----------------
                    |                               |
            ---------------------                   |
            |                   |                   |
    ---------------     ---------------     ----------------
    | Function    |     | Operator    |     | Virtual      |
    | Overloading |     | Overloading |     | Functions    |
    ---------------     ---------------     ----------------
        
                        fig. Achieving polymorphism 


    Dynamic binding, late binding:
    ------------------------------
        -   At run time, when it is known what class objects are under consideration, the
            appropriate version of the function is invoked. Since the function is linked
            with a particular class much later after the compilation, this process is termed as
            late binding.
        -   It is also known as dynamic binding because the selection of the appropriate
            function is done dynamically at run time.
        -   Dynamic binding is one of the powerful feature of C++.
            This requires the use of pointers to objects. We shall discuss in detail
            how the object pointers and virtual functions are used to implement
            dynamic binding.
*/