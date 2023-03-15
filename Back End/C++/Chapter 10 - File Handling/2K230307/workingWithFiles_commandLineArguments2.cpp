// Working With Files

/*
Command Line Arguments:
*/

#include<iostream>
#include<fstream>
#include<stdlib.h>

using namespace std;

int main(int argc, char* argv[])
{
    int number[9] = {11,22,33,44,55,66,77,88,99};

    if(argc != 3)
    {
        cout << "argc = " << argc << "\n";
        cout << "Error in arguments \n";
        exit(1);
    }

    ofstream fout1, fout2;

    fout1.open(argv[1]);

    if(fout1.fail())
    {
        cout << "could not open the file"
             << argv[1] << "\n";
        exit(1);
    }

    fout2.open(argv[2]);

    if(fout2.fail())
    {
        cout << "could not open the file "
             << argv[2] << "\n";
        exit(1);
    }

    for(int i = 0; i < 9; i++)
    {
        if(number[i] % 2 == 0)
        fout2 << number[i] << " ";              // write to EVEN file
        else
        fout1 << number[i] << " ";              // write to ODD file
    }

    fout1.close();
    fout2.close();

    ifstream fin;
    char ch;
    for(int i=1; i < argc; i++)
    {
        fin.open(argv[i]);
        cout << "Contents of " << argv[i] << "\n";
        do
        {
            fin.get(ch);                        // read a value
            cout << ch;                         // display it
        }
        while(fin);
        cout << "\n\n";
        fin.close();
    }
    return 0;
}

/*
NOTE:
    after executing, run again with cmd

    <program_name(without .cpp extention)> <1st_file_name> <2nd_file_name>
*/

/*
SUMMARY:
    -   The C++ I/O system contains classes such as ifstream, ofstream and fstream to deal
        with file handling. These classes are derived from fstreambase class and are declared
        in a header file iostream.
    -   A file can be opened in two ways by using the constructor function of the class and 
        using the member function open() of the class.
    -   While opening the file using comstructor, we need to pass the desired filename as a
        parameter to the constructor.
    -   The open() function can be used to open multiple files that use the same stream object.
        The second argument of the open() function called file mode, specifies the purpose for
        which the file is opened.
    -   If we do not specify the second argument of the open() function, the default values 
        specified in the prototype of these class members functions are used while opening the 
        file. The default values are as follows.

            ios::in - for ifstream functions, meaning-open for the reading only.
            ios::out - for ofstream functions, meaning-open for the writing only.
    
    -   When a file is opened for the writing only, a new file is created only if there is no
        file of that name. If a file by that name already exists, then its contents are deleted
        and the file is presented as a clean file.
    -   To open an existing file for updating without losing its original contents, we need to
        open it in an append mode.
    -   The fstream class does not provide a mode by default and therefor we must provide 
        the mode explicitly when using an object of fstream class. We can specify more than 
        one file mode using bitwise OR operator while opening  a file.
    -   Each file has associated two file pointers, one is called input or get pointer, while
        the other is called output or put pointer. These pointers can be moved along the files 
        by the member functions.
    -   Functions supported by file stream classes for performing I/O operations on files
        are as follows:

            put() and get() functions handle single character at a time.
            write() and read() functions write and read blocks of binary data.
        
    -   The class ios supports many member functions for managing errors that may occure 
        during file operations.
    -   File names may be supplied as arguments to the main() function at the time of invoking
        the program. these arguments are known as command-line arguments.
*/