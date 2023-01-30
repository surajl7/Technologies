// Constructors and destructors

/*
Constructing Two-dimensional Arrays:
    We can construct matrix variables using the class type objects.
*/

// The example in below program illustrates how to construct a matrix of size m x n.

#include<iostream>

/*------------------------------Class definition---------------------------*/
class matrix
{
    private:    
        int **p;        // pointer matrix
        int d1, d2;     // dimentions

    public:
        matrix(int x, int y);                       // constructor declartion

        void get_element(int i, int j, int value)   // input value at defined array location
        {
            p[i][j] = value;
        }

        int &put_element(int i, int j)               // display value at set array location
        {
            return p[i][j];
        }
};

/*---------------------------constructor definition------------------------*/
matrix::matrix(int x, int y)
{
    d1 = x;
    d2 = y;

    p = new int *[d1];          // creates an array pointer

    for(int i = 0; i < d1; i++)
    {
        p[i] = new int [d2];    // creates space for each row
    }
}


/*---------------------------------Main Method-----------------------------*/

int main()
{
    int m, n;
    int value;

    std::cout << "\nEnter size of matrix: ";
    std::cin >> m >> n;

    matrix A(m,n);          // matrix object A constructed 

    std::cout << "\nEnter matrix element row by row \n\n";

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            std::cin >> value;
            A.get_element(i,j,value);
        }
    }

    std::cout << "\n";
    std::cout << A.put_element(1, 2);

    std::cout << "\n\n";
    return 0;
}

/*
NOTE:
    The constructor first creates a vector pointer to an int of size d1.
    Then, it allocates, interatively an int type vector of size d2 pointed at by
    each element p[i].
    Thus, space for the elements of a d1 x d2 matrix all allocated from free store as
    shown above.
*/