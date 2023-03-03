// Working With Files

// Reading from two files simultaneously:

#include<iostream>
#include<fstream>
#include<stdlib.h>              // for exit() function

using namespace std;

int main()
{
    const int SIZE = 80;
    char line[SIZE];

    ifstream fin1, fin2;        // create two input streams
    fin1.open("country");
    fin2.open("capital");

    for(int i = 1; i <= 10; i++)
    {   
        if(fin1.eof() != 0)
        {
            cout << "Exit from country \n";
            exit(1);
        }

        fin1.getline(line, SIZE);
        cout << "Capitle of " << line << "\n";

        if(fin2.eof() != 0)
        {
            cout << "Exit from capital\n";
            exit(1);
        }

        fin2.getline(line, SIZE);
        cout << line << "\n";
    }

    return 0;
}

/*
Detecting end-of-file:
    Detecting of the end-of-file conditions is necessary for the preventing any further
    attempt to read data from the file.
    
    while(fin)

    An ifstream object. such as fin, returns a value of 0 if any error occurs in the
    file operations including the end-of-file condition. Thus, the while loop
    terminates when fin returns a value of zero on reaching the end-of-file 
    condition. Remember, this loop may terminate due to other failuers as well.

    There is another approach to detect the end-of-file condition.

    if(fin.eof() != 0) {exit(1);}

    eof() is a member function of ios class. it returns a non-zero value if the end-of-file
    (EOF) condition is encountered and a zero. otherwise. Therefore, the above statement
    terminates the program on reaching the end of the file.
*/