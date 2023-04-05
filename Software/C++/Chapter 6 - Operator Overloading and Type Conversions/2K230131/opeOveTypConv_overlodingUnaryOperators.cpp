// Operator overloding and Type convertions

/*
Overloding Unary Operators:
    Let us consider the unary minus operator. A minus operator when used as a unary,
    takes just one operand. We know that this operator changes the sign of an 
    operand when applied to a basic data items.
    We will see here how to overload this operator so that it can be applied 
    to an object in much the same way as is applied to an int or float variable.
    The unaray minus when applied to an object should change the sign of each of the data
    items. 
*/

// Ex: below shown how the unary minus oprator is overloaded.


#include<iostream>

class space
{
    private:
        int x;
        int y;
        int z;
    public:
        void getdata(int a, int b, int c);
        void display(void);
        void operator -();      // overload unary minus
};


void space::getdata(int a, int b, int c)
{
    x = a;
    y = b;
    z = c;
}

void space::display(void)
{
    std::cout << x << " ";
    std::cout << y << " ";
    std::cout << z << "\n";                                     
}

void space::operator-()
{
    x = -x;
    y = -y;
    z = -z;
}

int main()
{
    space S;
    
    S.getdata(10, -20, 30);

    std::cout << "S : ";
    S.display();

    -S;                     // activites operators-() function

    std::cout << "S : ";
    S.display();

    return 0;
}


/*
NOTE:

The function opertor-() takes no argument. Then, what does this operator function do?.
It changes the sign of data members of the object S. Since this function is a member 
function of the same class, it can directly access the members of the object which activated it.

Remember, a statement like

    S2 = -S1;

will not work because, the function operator-() does not return any value. It can work if
the function is modified to return an object.

it is possible to overload a unary minus operator using a frined function as follows:

friend void operator-(space &s);        // declartion
void operator-(space &s)
    {
        s.x = -s.x;
        s.y = -s.y;
        s.z = -s.z;
    }

Note that argument is passed by refarnce. It will not work if we pass argument by value
becuase only a copy of the object that activated the call is passed to operator-().
Therefor, the changes made inside the operator function will not reflect in the called object.
*/


