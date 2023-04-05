// Inheritance 

// Ex. Use of initialization lists in the base and derived constructors.

#include<iostream>

class alpha
{
    private:
        int x;
    public:
        alpha(int i)
        {
            x =  i;
            std::cout << "\n alpha constructed";
        }
        void show_alpha(void)
        {
            std::cout << " x  = " << x << "\n";
        }
};

class beta
{
    private:
        float p, q;
    public:
        beta(float a, float b) : p(a), q(b+q)
        {
            std::cout << "\n bete constructed";
        }
        void show_beta(void)
        {
            std::cout << " p = " << p << "\n";
            std::cout << " q = " << q << "\n";
        }
};

class gamma : public beta, public alpha
{
    private:
        int u, v;
    public:
        gamma(int a, int b, float c):
        alpha(a*2), beta(c,c), u(a)
        {
            v = b;
            std::cout << "\n gamma constructed";
        }
        void show_gamma(void)
        {
            std::cout << " u = " << u << "\n";
            std::cout << " v = " << v << "\n";
        }
};

int main()
{
    gamma g(2, 4, 2.5);
    
    std::cout << "\n\n Display memeber values " << "\n\n";

    g.show_alpha();
    g.show_beta();
    g.show_gamma();

    return 0;
};

/*
NOTE:
    The argument list of the derived constructor gamma contains only three parameters 
    a, b and c which is used to initialize the five data members constained in all 
    the three classes.
*/

