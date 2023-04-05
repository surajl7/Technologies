// Operator overloading and Type Coversion

/*
Manipulation of string using operators:
    ANSI C implements strings using character arrays, pointers and string functions.
    There are no operators for manipulating the strings. One of the main drawbacks of
    string manipulations in C is that whenever a string is to be copied, the programmer
    must first determine its length and allocate the required amount of memory.

    ANSI C++ committee has added a new class called string to the C++ class library that 
    supports all kind of string manipulations.
*/

#include<iostream>
#include<string.h>

class string
{
    private:
        char *p;
        int len;

    public:
        string()    {len = 0; p = 0;}       // create null string
        string(const char *s);              // create string from arrays
        string(const string & s);           // copy constructor
        ~string() {delete p;}               // destructor 

        //  + Operator 
        friend string operator+(const string &s, const string &t);

        // <= operator 
        friend int operator <= (const string &s, const string &t);
        friend void show(const string s);
};


string :: string(const char *s)
{
    len = strlen(s);
    p = new char[len+1];
    strcpy(p, s);
}

string :: string(const string &s)
{
    len = s.len;
    p =  new char[len+1];
    strcpy(p, s.p);
}

// Overlaoding + operator 
string operator +(const string &s, const string &t)
{
    string temp;
    temp.len = s.len + t.len;
    temp.p = new char[temp.len+1];
    strcpy(temp.p, s.p);
    strcat(temp.p, t.p);
    return(temp);
}

//overloading <= operator
int operator <= (const string &s, const string &t)
{
    int m = strlen(s.p);
    int n = strlen(t.p);

    if(m <= n)  return (1);

    else return(0);
}

void show(const string s)
{
    std::cout << s.p;
}

int main()
{
    string s1 = "New ";
    string s2 = "York";
    string s3 = "Delhi";

    string t1, t2, t3;
    t1 = s1;
    t2 = s2;
    t3 = s1 + s3;

    std::cout << "\nt1 = "; show(t1);
    std::cout << "\nt2 = "; show(t2);
    std::cout << "\n";
    std::cout << "\nt3 = "; show(t3);
    std::cout << "\n\n";

    if (t1 <= t3)
    {
        show(t1);
        std::cout << " smaller than ";
        show(t3);
        std::cout << "\n";
    }
    else
    {
        show(t3);
        std::cout << " smaller than ";
        show(t1);
        std::cout << "\n";
    }

    return 0;
}


/*
Rules for overloading operators:
    1. Only existing operators can be ovelroaded. New opeartors cannot be created.
    2. The overloaded opeartor must have at least one operand that is of used-defined 
       type.
    3. We cannot change the basic meaning of an operator. That is to say, we cannot 
       redefined the plus(+) operator to subtract one value from the other.
    4. Overloaded operator follow the syntax rules of the original operators.
       They cannot be overridden.
    5. There are some operators that cannot be overloaded. (shows in table below)
    6. We cannot use friend functions to overload certain operators.
       However, member function can be used to overload them.
    7. Unary operators, overloaded by means of a member function, take no explicit
       arguments and return no explicit value, but, those overloaded by meanse of a 
       friend function, take one reference argument(the object of the relevant class).
    8. Binary operators overloaded through a member function take one explicit argument
       and those which are overloaded through a friend function take two explicit 
       arguments.
    9. When using binary operators overloaded through a member function, the left hand
       operand must be an object of the relevant class.
    10.Binary arithmatic operators such as +,-,*, and / must explicitly return a value.
       They must not attempt to change their own arguments.

    Operators that canonot be overloaded
    Sizeof      Size of operator
    .           Membership operator
    .*          Pointer-to-member operator
    ::          Scope resolution operator
    ?:          Conditional operator

    Where a friend cannot be used
    =           Assignment operator
    ()          Function call operator
    []          Subscripting operator
    ->          Class member access operator
*/