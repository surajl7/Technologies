// Working With Files

/*
Command Line Arguments:
*/

#include<iostream>
#include<fstream>

using namespace std;

int main(int argc, char *argv[])
{
    if(argc != 3)
    {
        cout << "error in argument";
    }
    else
    {
        cout << "first file: " << argv[1] << endl;
        cout << "second file: " << argv[2] << endl;
    }

    return 0;

    /*
    ifstream i;
    i.open("argv[1]", ios::in);
    ofstream o;
    o.open("argv[2]", ios::out);
    */
}