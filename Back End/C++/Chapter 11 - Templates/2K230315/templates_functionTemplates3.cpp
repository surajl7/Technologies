// Templates

/*
Ex.: An application of template function
*/

#include<iostream>

using namespace std;

template<class T1, class T2>

void add(T1 a, T2 b)
{
    cout << "add is: " << a + b;
}

int main()
{
    add(2, 5.6);
    cout << endl;
    add(4,5);
}

/*
template<class Type1, class Type2>

return_type fun_name(argument of type t1, t2)
{
    body
}
*/