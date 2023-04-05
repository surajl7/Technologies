// Templates

/*
INTRODUCTION:
    Templets enables us to define generic classes and functions and thus provides support
    for the generic programming.
    Generic programming is an approach where generic types are used as parameters in algorithms so that 
    they work for a varity of suitable data types and data structures.

    A templet can be used to create a family of classes or functions. For example, a class
    templet for an array class would enable us to create arrays of various data types 
    such as int array and float array.

    Similary, we can define a template for a function, say mul(), that would help us create versions 
    of mul() for multiplying int, float and double type values.

    A templet can be considered as a kind of macro. When an object of a specific type is
    defined for actual use. the template definition for that class is substituted with the 
    required data type.
    Since a templet is defined with a paramter that would be replaced by a specified data type
    at the time of actual use of the class or function, the templetes are sometimes 
    called parameterized classes or functions.

The general format of a class templet is:
    
    templet<class T>
    class classname
    {
        // --
        // class member specification
        // with anonymous type T
        // wherever appropriate
        // --
    };

NOTE:
    The class templet definition is very similar to an ordinary class defined except the 
    prefix templet<class T> and the use of the type T. This prefix tells the compiler that we
    are going to declare a templet and use T as a type name in the declared. Thus, vector has 
    become a parameterized class with the type T as its parameter. T may be substitued by
    any data type including the user-defined types. Now, we can create vector for holding 
    different data types.
*/

// Ex: class Template

#include<iostream>

using namespace std;

const int size = 3;

template <class T>
class vector
{   
    private:
        T* v;           // type T vector
    public:
        vector()
        {
            v = new T[size];
            for(int i = 0; i < size; i++)
                v[i] = 0;
        }
        vector(T* a)
        {
            for (int i = 0; i < size; i++)
            {
                v[i] = a[i];
            }
        }
        T operator*(vector &y)
        {
            T sum = 0;
            for(int i = 0; i < size; i++)
            {
                sum += this -> v[i] * y.v[i];
            }
            return sum;
        }
};


int main()
{
    int x[3] = {1,2,3};
    int y[3] = {4,5,6};

    cout << "\nOutput is..\n"; 

    vector <int> v1;
    vector <int> v2;

    v1 = x;
    v2 = y;

    int R = v1 * v2;
    cout << "R = " << R << "\n";

    return 0;
}