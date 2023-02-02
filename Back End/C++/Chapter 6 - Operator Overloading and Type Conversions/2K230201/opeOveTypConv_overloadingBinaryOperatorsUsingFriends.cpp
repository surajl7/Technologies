// Operator overloading and Type conversions

/*
Overloading Binary Oprators using friend functions:
    As stated earlier, friend functions may be used in the place of member functions
    for overloading a binary operator, the only difference being that a frined function
    requires two arguments to be explicitly passed to it, while a member function
    requires only one.
*/

// Ex.Finding the addition of two complex numbers

#include<iostream>
using namespace std;

const int size = 3;

class vector
{
    private:
        int v[size];
    public:
        vector();       // constructors null vetor
        vector(int *x); // constructors vector from array
        friend vector operator *(int a, vector b);      // frined 1
        friend vector operator *(vector b, int a);      // frined 2
        friend istream & operator >> (istream &, vector &);
        friend ostream & operator << (ostream &, vector &);
};


vector::vector()
{
    for(int i = 0; i < size; i++)
        v[i] = 0;
}

vector::vector(int *x)
{
    for(int i = 0; i< size; i++)
        v[i] = x[i];
}

vector operator *(int a, vector b)
{
    vector c;

    for(int i=0; i < size; i++)
        c.v[i] = a * b.v[i];
    return c;
}

vector operator *(vector b, int a)
{
    vector c;

    for(int i = 0; i < size; i++)
        c.v[i] = b.v[i] * a;
    return c;
}

istream & operator >> (istream &din, vector &b)
{
    for (int i = 0; i < size; i++)
        din >> b.v[i];
    return(din);
}

ostream & operator << (ostream &dout, vector &b)
{
    dout << "(" << b.v [0];
    for(int i=1; i < size; i++)
        dout << ", " << b.v[i];
    dout << ")";
    return(dout);
}

int x[size] = {2, 4, 6};

int main()
{
    vector m;
    vector n = x;       // invokes constructor 1
    
    cout << "\nEnter three element of vector m: ";
    cin >> m;           // invokes operator>>() function 

    cout << "\n";
    cout << "m = " << m;        //invokes operator <<()

    vector p,q;

    p = 2 * m;          // invokes frined 1
    q = n * 2;          // invokes frined 2

    cout << "\n";
    cout << "p = " << p << "\n";        // invokes operator<<()
    cout << "q = " << q << "\n";

    cout << "\n";

    return 0;
}

/*
NOTE:
    The program overloads the operator * two times, thus overloading the operator
    function operator*() itslef. In both the cases, the functions are explicitly 
    passed two arguments and they are invoked like amy other oveloaded function, based 
    on the types of it's arguments. 
    This enables us to use both the forms of scaler multiplication such as 

    p = 2 * m;      // equivalent to p = operator*(2, m);
    q = n * 2;      // equivalent to q = operator*(n, 2);

    The program and it's output are largely self-explanatory. The first constructor

    vector();

    constructor a vector whose elements are all zero. Thus

    vector m;

    creates a vector m and initializes all its elements to 0. The second constructor

    vector(int &x);

    creates a vector and copies the elements pointed to by the pointer argument x 
    into it.
    Therefor, the statements 

    int x[3] = {2, 4, 6}
    vector n = x;

    create n as a vector with components 2, 4, 6.


NOTE:
    We have used vector variables like m and n in input and output statements just like
    simple variables. 
    This has been made possible by overloading the operators >> and << using the
    functions:

    frined istream & operator >> (istream &, vector &);
    friend ostream & operator << (ostream &, vector &);

    istream and ostream are classes defined in the iostream.h file which has been 
    included in the program.
*/