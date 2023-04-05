// Pointers

/*
Pointers To Objects:
    We have already seen how to use pointers to access the class members. As stated earlier,
    a pointer can point to an Object created by a class.
    Consider the following statement:

        item x;

    Where items is a class and x is an object defined to be of type item. Similarly we
    can define a pointer it_ptr of type item as follows:

        item *it_ptr;

    Object pointers are useful in creating objects at runtime. we can also use an object
    pointer to access the public member of an object.
    Consider a class item defined as follows:

        class item
        {
                int code;
                float price;
            public:

                void getdata(int a, float b)
                {
                    code = a;
                    price = b;
                }

                void show(void)
                {
                    std::cout << "Code: " << code << "\n";
                    std::cout << "Price: " << price << "\n";
                }
        };


    Let us declare an item variable x and a pointer ptr to x as follows;

        item x;
        item *ptr = &x;
    
    The pointer ptr is initialized with the address of x.

    We can refer to the member function of item in two ways, one by using the dot operator
    and the object, and another by using the arrow operator and the object pointer. The statements

        x.getdata(100, 75.50)
        x.show();

    are equivalent to

        ptr -> getdata(100, 75.50);
        ptr -> show();

    Since *ptr is an alias of x, we can also use the following method:

        (*ptr).show();

    The parentheses are necessory because the dot operator has highest precedence that the
    indirection operator *.

    We can also create the object using pointers and new operator as follows:

        item *ptr = new item;
    
    This statement allocates enough memory for the data members in the object structure
    and assigns the address of the memory space to ptr. Then ptr can be used to refer to the
    member as shown below:

        ptr -> show();

    If a class has a constructor with arguments and does not include an empty coonstructor,
    then we must supply the arguments When the object is created.

    We can also create an array of objects using pointers. for example, the statement 
        
        item *ptr = new item[10];  // array of 10 objects

    creates memory space for an array of 10 objects of item.
    Remember in such a cases, if the class contains constructor, it must also contain 
    an empty constructor.
*/

// Ex.: pointer to objects

#include<iostream>
using namespace std;

class item
{
    private:
        int code;
        float price;
    public:
        void getdata(int a, int b)
        {
            code = a;
            price = b;
        }

        void show(void)
        {
            cout << "Code: " << code << endl;
            cout << "Price: " << price << endl;
        }
};

const int size = 2;

int main()
{
    item *p = new item[size];
    item *d = p;

    int x, i;
    float y;

    for(i = 0; i < size; i++)
    {
        cout << "Input code and price for item" << i+1 << " ";
        cin >> x >> y;
        p -> getdata(x,y);
        p++;
    }
    for (i = 0; i < size; i++)
    {
        cout << "Item: " << i + 1 << endl;
        d -> show();
        d++;
    }
    return 0;
}

/*
    In the above program, we created space dynamically for two objects of equal size.
    But this may not be the case always. For example, the object of a class contain 
    strings would not be of the same size. In such a cases, we can define an array of
    pointers objects that can be used to access the individual objects.
*/