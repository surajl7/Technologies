// Constructors and destructors

/*
Destructors:
    - A destructor, as the name implies, is used to destroy the objects that has been created
      by constructor.
    - Like a constructor, the destructor is a member function whose name is the same as the 
      class name but is preceded by the tilde. 
    - The destructor for the clas integer can be defined as shown below:

        ~integer(){}

    - A destructor never takes any argument nor does it return any value. 
    - It will be invoked implicitly by the compiler upon exit from the program 
      (or block or function as the case may be) to clean up storage that is no
      longer accessible. 
    - It is a good practice to declare destructors in a program since it releses memory    
      space for future use.

    - Whenever new is used to allocate memory in the constructors, we should use
    delete to free that memory. for example, the destructor for the matrix class
    discussed above may be defined as follows:

        matrix:: ~matrix()
        {
            for(int i = 0; i < d1; i++)
            deletep[i];
            delete p;
        }

    This is required because when the pointers to objects go out of scope,
    a destructor is not called implicitly. 
*/

// The example below illustrates that the destructor has been invoked implecitly by the 
// compiler.


#include<iostream>

int count = 0;

class alpha
{
    public:
        alpha()
        {
            count++;
            std::cout << "\nNo. of object created: " << count;
        }
    
        ~alpha()
        {
            std::cout << "\nNo. of object destroyed " << count;
            count--;
        }
};

int main()
{
    std::cout << "\n\nENTER MAIN\n";

    alpha A1, A2, A3, A4;

    {
        std::cout << "\n\nENTER BLOCK1\n";
        alpha A5;
    }

    {
        std::cout << "\n\nENTER BLOCK2\n";
        alpha A6;
    }

    std::cout << "\n\nRE-ENTER MAIN\n";

    // std::cout << "\n\n";
    return 0;
}


/*
NOTE:
    As the objects are created and destroyed, they increase and decreases the count.
    Notice that after the first group of objects is created, A5 is created, and then
    distroyed, A6 is created, and then destroyed. Finally, the rest of the objects
    are also destroyed. When the closing brace of a scope is encountered, the 
    destructors for each object in the scope are called. 
    Note that the objects are destroyed in the reverse order of creation.
*/