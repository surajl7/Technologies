// Pointers

/*
this Pointer:
    -   C++ uses a unique keyword called this to represent an object that invokes a member function.
    -   this is a pointer that points to the object for which 'this' function was called.

    -   Ex.
        the function call A.max() will set the pointer this to the address of the object A.
        The strating address is the same as the address of the first variable in the class
        structure.
    
    -   This unique pointer is automatically passed to a member function when it is called.
        The pointer this acts as an implicit argument to all the member functions.

    - Ex.

        class ABC
        {
            int a;
            ...
            ...
        };

        The private variable 'a' can be used direclty inside a member function, like

            a = 123;

        We can also use the following statement to do the same job:

            this -> a = 123;

    -   Since C++ permits the use of shorthand form a = 123, we have not been using the 
        pointer this explicitly so far.
    -   However, we have been implicitly using the pointer this when overloding the 
        operators using member function.

    -   Recall that, when a binary operator is overloaded using a member function , we
        pass only one argument to the function. The other argument is implicitly passed
        using the pointer this.
    -   One important application of the pointer this is to return the object it pointer to.
        For example, the statement

            return *this;

    -   Inside a member function will return the object that invoked the function.
        This statement assumes importance when we want to compare two or more objects inside
        a member function and return the invoking object as result.

    - Ex.

        person &person :: greater(person &x)
        {
            if x.age > age
                return x;       // argument object
            else
                return *this;   // invoking object
        }

    -   Suppose we invoke this function by the call

            max = A.greater(B);

        This function will return the object B (argument object) if the age of the person B
        is greater than that of A, otherwise, it will return the object A (invoking object)
        using the pointer this.
        Remember, the dereference operator * produces the contents at the address contained
        in the pointer. 
*/

#include<iostream>
#include<cstring>
// #include<string.h>

using namespace std;

class person
{
    private:
        char name[20];
        float age;
    public:
        person(const char *s, float a)
        {
            strcpy(name, s);
            age = a;
        }
        person &greater(person &x)
        {
            if(x.age >= age)
            {
                return x;
            }
            else
            {
                return *this;
            }
        }
        void display(void)
        {
            cout << "Name: " << name << "\n"
                 << "Age: " << age << "\n";
        }
};

int main()
{
    person P1("John", 37.50),
           P2("Ahmed", 29.0),
           P3("Hebber", 40.25);
    
    person P = P1.greater(P3);      // P3.greater(P1)
    cout << "Elder person is: \n";
    P.display();

    P = P1.greater(P2);             // P2.greater(P1)
    cout << "Elder person is: \n";
    P.display();

    return 0;
}