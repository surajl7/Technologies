// Working With Files

#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

int main()
{
    float h[4] = {3.4,6.7,4.5,9};
    ofstream o;
    o.open("b.txt");
    o.write((char *) &h, sizeof(h));
    o.close();
    for(int i = 0; i < 4; i++)
    {
        h[i] = 0;
    }
    ifstream i;
    i.open("b.txt");
    i.read((char*) &h, sizeof(h));
    for(int i = 0; i < 4; i++)
    {
        cout << setw(5) << h[i];
    }
}

/*
Error handling functions:

Function    Return value and meaning
-----------------------------------------------------------------------------------------
eof()       Return true (non-zero value) if end-of-file is encountered while  reading;
            Otherwise returns false(zero)

fail()      Return true when an input or output operation has failed.

bad()       Returns true if an invalid operation is attempted or any unrecoverable error
            has occured. However, if it is false, it may be possible to recover from 
            any other error reported, and continue operation.

good()      Return true if no error has occured. This means, all the above functions 
            are false. For instance, if file.good() is true, all is well with the stream
            file and we can proceed to perform I/O operations. When it returns false,
            no further operations can be carried out.
*/


