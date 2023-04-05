// Class and Objects

/*
Privet Member Functions:
    A Private member function can only be called by another function that is a member
    of its class. Even an object cannot invoke a private function using the dot operator.
    
    Example: Consider a class as defined below.

    class sample
    {
            int m;
            void read(void);        // private memeber function
        public:
            void update(void);
            void write(void);
    };

    if s1 is an object of sample, then 

    s1.read();     //Won't work; object cannot access
                   //privet member

    is illegal. However, the function read() can be called by the function update()
    to update the value of m.

    void sample::update(void)
    {
        read();      // simple call; no object used
    }
*/

#include<iostream>
using namespace std;

class sample
{
    private: 
        int m;
        void read(void);
    public:
        void update(void);
        void write(int);
};


void sample::read(void)
{
    cout << "\nCalling read function: ";
    cout << "\nValue of m is: " << m << "\n\n";
}

void sample::update(void)
{   
    cout << "\nCalling update function: \n";
    read();
}

void sample::write(int a)
{   
    cout << "\nCalling write function: \n";
    m = a;
    update();
}


int main()
{   
    int x;

    cout << "\nEnter the value of m: ";
    cin >> x;

    sample obj;
    
    obj.write(x);

    return 0;
}