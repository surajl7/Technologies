// Class and Object

// Ex. Addition of two complex number
// note: complex number:  a + bj

#include<iostream>
using namespace std;

class mathOps
{
    private:
        int realNum;
        int imgNum;
    public:
        void getnum(int, int);
        friend void addCmplx(mathOps, mathOps);
};

void mathOps::getnum(int n1, int n2)
{
    realNum = n1;
    imgNum = n2;
}

void addCmplx(mathOps obj1, mathOps obj2)
{
    int addReal = obj1.realNum + obj2.realNum;
    int addImg = obj1.imgNum + obj2.imgNum;

    cout << addReal << " + " << addImg << "j";
    cout << "\n";
}

int main()
{
    mathOps o1, o2;

    cout << "\n10 + 20j";
    o1.getnum(10, 20);
    cout << "\n11 + 22j";
    o2.getnum(11, 22);

    cout << "\nAddition is: ";
    addCmplx(o1, o2);

    cout << "\n";
    return 0;
}