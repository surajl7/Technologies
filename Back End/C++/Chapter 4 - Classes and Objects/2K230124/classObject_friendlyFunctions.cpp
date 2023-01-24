// Class and Objects

/*
Friendly Functions:

    To Make an outside function "friendly" to a class, we have to simply declare this function
    as a friend of the class as shown below:

    class ABC
    {
        private: 
            ...
            ...
        public:
            ...
            ...
            friend void xyz(void);      // declaration
    };


    - The function declaration should be preceded by keyword friend. The function is 
      defined elsewhare in the program like a normal C++ function.
    - The function definition does not use either the keyword friend or the scope operator ::.
    - The function that are declared with the keyword friend are known as friend functions.
    - A function can be declared as a friend in any number of classes.
    - A friend function, although not a member function, has full access rights to the
      private members of the class. 

    A Frined function possesses certain special characteristics:
        +   It is not in the scope of the class to which it has be declared as friend.
        +   Since it is not in the scope of the class, it cannot be called using the object
        of that class.
        +   It can be invoked like a normal function without the help of any object.
        +   Unlike member functions, it cannot access the member names directly and has
            to use an object name and dot membership operator with each member name. (e.g. A.x).
        +   It can be declared either in the public or the private part of a class without 
            affecting its meaning.
        +   Usually, it has the objects as arguments.

    The friend functions are often used in operator overloading.
*/

#include<iostream>
using namespace std;

class sample
{
    private:
        int a;
        int b;
    public:
        void setvalue()
        {
            a = 25;
            b = 40;
        }
        friend float mean(sample s);
};

float mean(sample s)
{
    return float(s.a + s.b)/2.0;
}

int main()
{
    sample X;       // object X
    X.setvalue();
    cout << "\nMean value = " << mean(X) << "\n\n";

    return 0;
}


/*
NOTE:
    The friend function accesses the class variables a and b by using the dot operator and 
    the object passes to it. The function call mean(X) passes the object X by value to the 
    friend function.

*/