// Constructor and Destructors

/*
Const Objects:
    We may create and use constant objects using const keyword before object declaration.
    For example, we may create X as a constant object of the class matrix as follows:

        const matrix X(m,n);        // object X is constant
    
    Any attempt to modify the values of m and n will generate compile-time error.
    Further, a constant object can call only const member functions. As we know, a const
    member is a function prototype or function definition where the keyword const appears
    after the function's signature.

    Whenever const object try to invoke non-const member functions, the complier generats
    errors. 
*/