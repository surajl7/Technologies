// Operator Overloading and Type Conversion

// Data Conversion examples

// Ex. Program used two classes and shows how to convert data of one type to another.

#include<iostream>

class invent2;       // destination class declared

class invent1        // source class
{
    private:
        int code;    // item code
        int items;   // no. of items
        float price; // cost of each item
    public:
        invent1(int a, int b, float c)
        {
            code = a;
            items = b;
            price = c;
        }

        void putdata()
        {
            std::cout << "Code: " << code << "\n";
            std::cout << "Items: " << items << "\n";
            std::cout << "Value: " << price << "\n";
        }

        int getdata()    {return code;}
        int getitems()   {return items;}
        float getprice() {return price;}
        operator float() {return (items*price);}
};  // End of source class

class invent2       // destination class
{
    private:
        int code;
        float value;
    public:
        invent2()
        {
            code = 0;
            value = 0;
        }
        invent2(int x, float y)     // constructor for initialization
        {
            code = x;
            value = y;
        }
        void putdata()
        {
            std::cout << "Code: " << code << "\n";
            std::cout << "Value: " << value << "\n\n";
        }
        invent2(invent1 p)          // constructor for conversion 
        {
            code = p.getdata();
            value = p.getitems() * p.getprice();
        }
}; // End of detination class

int main()
{
    invent1 s1(100, 5, 140.0);
    invent2 d1;
    float total_value;

    /* invent1 to float */
    total_value = s1;

    /* invent1 to invent2 */
    d1 = s1;

    std::cout << "Product details - invent1 type" << "\n";
    s1.putdata();

    std::cout << "\nStock value" << "\n";
    std::cout << "Value = " << total_value << "\n\n";

    std::cout << "Product details - invent2 type" << "\n";
    d1.putdata();

    return 0;
}

/*
NOTE:
    We have used the conversion function 

        operator float()

    in the class invent1 to convert the invent1 type data to a float. The constructor

        invent2(invent1)

    is used in the class invent2 to convert the invent1 type data to the invent2 type data.

    Remember that we can also use the casting operator function

        operator invent2()

    in the class invent1 to convert invent1 type to invent2 type. However, it is
    important that we do not use both the constructor and the casting operator for
    the same type conversion, since this introduces an ambiguity as to how the convertion 
    should be performed.
*/