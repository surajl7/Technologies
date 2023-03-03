// Working with files

/*
Opening Files Using open()
    As stated earlier, the function open() can be used to open multiple files that use the
    same stream object. For example, we may want to process a set of files sequentially.
    In such cases, we may create a single stream object and use it to open each file 
    in turn.

            file-stream-class stream-object;
            stream-object.open ("filename");
*/

// Working with multiple files

// creating files with open() function

#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ofstream fout;                      // create output stream
    fout.open("country");               // connect "country" to it

    fout << "United States of America\n";
    fout << "United Kingdome\n";
    fout << "South Korea\n";

    fout.close();                       // disconnect "country" and

    fout.open("capital");               // connect "capital"

    fout << "Washington\n";
    fout << "London\n";
    fout << "Seoul\n";

    fout.close();                       // diconnect "capital"

    // Reading the files
    const int N = 80;                   // size of line
    char line[N];

    ifstream fin;                       // create input stream
    fin.open("country");                // connect "country" to it

    cout << "contents of country file\n";

    while(fin)                          // check end-of-file
    {
        fin.getline(line, N);           // read a line
        cout << line << "\n";                   // display it 
    }

    fin.close();                        // disconnect "country" and

    fin.open("capital");                // connect "capital"

    cout << "\nContents of capital file \n";

    while(fin)
    {
        fin.getline(line, N);
        cout << line << "\n";
    }       

    fin.close();

    return 0;
}
