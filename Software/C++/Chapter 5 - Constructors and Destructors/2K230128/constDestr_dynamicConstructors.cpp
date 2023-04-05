// Constructors and destructors

/*
Dynamic Constructors:
    The constructors can also be used to allocate memory while creating objects.
    This enable the system to allocate the right amount for each object when the
    object are not of the same size, thuse resulting in the saving of memory. Allocation
    of memory to objects at the time of their construction is known as dynamic construction
    of objects. The memory is allocated with the help of the new operator. 
*/

/*
NOTE:
    Dynamic constructor should strictly used for string and array only.
*/

// Program shows the use of new, in cinstructors that are used to construct
// strings in objects.

#include<iostream>
#include<string.h>
using namespace std;

class String
{
    private:
        char *name;
        int length;
    public:
        String()    // constrctor-1
        {
            length = 0;
            name = new char[length + 1];
        }
        String(char *s) // constructor-2
        {
            length = strlen(s);
            name = new char[length+1];      // one additional

            strcpy(name, s);
        }

        void display(void)
        {
            cout << name << "\n";
        }
        void join(String &a, String &b);
};

void String::join(String &a, String &b)
{
    length = a.length + b.length;
    delete name;
    name = new char[length+1];              // dynamic allocation

    strcpy(name, a.name);
    strcat(name, b.name);
}

int main()
{
    char *first = "Joseph ";
    String name1(first), name2("Louis "), name3("Lagrange"), s1, s2;

    s1.join(name1, name2);  
    s2.join(s1, name3);
    name1.display();
    name2.display();
    name3.display();
    s1.display();
    s2.display();

    return 0;
}

/*
NOTE:
    This Program uses two constructors. The first is an empty constructor that allows us
    to declare an array of strings. The second constructor initializes the length of the
    string, allocates necessory space for the string to be stored and creates the string
    itslef.
    Note That one additional charater space is allocated to hold the end-of-string character '\0'
*/