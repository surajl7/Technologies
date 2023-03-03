// Working with files

/*
Opening Files Using Constructor:
    We know that a constructor is used to initialize an object while it is being created.
    Here, a filename is used to initialize the file stream object.
    This involves the following steps:
        1.  Create a file stream object to manage the stream using the appropriate class.
            that is to say, the class ofstream is used to create the output stream and the class
            ifstream to create the input stream.
        2.  Initialize the file object with the desired filename.
*/

// Creating files with constructor function

#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ofstream outf("ITEM");          // connect ITEM file to outf

    cout << "Enter item name: ";
    char name[30];
    cin >> name;                    // get name from key board and 

    outf << name << "\n";           // write to file ITEM

    cout << "Enter item cost: ";
    float cost;
    cin >> cost;                    // get cost from key board and

    outf << cost << "\n";           // write to file ITEM

    outf.close();                   // Disconnect ITEM file from outf

    ifstream inf("ITEM");           // connect ITEM file to inf

    inf >> name;                    // read name from file ITEM
    inf >> cost;                    // read cost from file ITEM

    cout << "\n";
    cout << "Item name: " << name << "\n";
    cout << "Item cost: " << cost << "\n";

    inf.close();                    // Disconnect ITEM from inf

    return 0;
}

/*
Caution:
    When a file is opened for writing only, a new file is created if there is no file
    of that name.
    If a file by name exists already, then its contents are deleted and the file is 
    presented as a clean file.
*/