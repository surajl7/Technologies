// Exception Handling

#include<iostream>

using namespace std;

int main()
{
    int a=5, b=0;
    try
    {
        /* code */
        if(b != 0)
        {
            cout << a/b;
        }
        else
        {
            throw b;
        }
    }
    //catch(const std::exception& e)
    catch(int i)
    {
        //std::cerr << e.what() << '\n';
        cout << "divide by zero error";
    }
    
}