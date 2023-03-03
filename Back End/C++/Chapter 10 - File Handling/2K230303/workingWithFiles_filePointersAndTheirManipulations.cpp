// Working With Files

/*
File Pointers and Their Manipulations:
    Each file has two associated pointers known as the file pointers. One of them is called
    the input pointer (or get pointer) and the other is called the output pointer (or put pointer).

Functions for manipulation of File Pointers:

    seekg()         Moves get pointer(input) to a specified location.
    seekp()         Moves put pointer(output) to a specified location.
    tellg()         Gives the current position of the get pointer.
    tellp()         Gives the current position of the put pointer.

    'Seek' functions seekg() and seekp() can also be used with two arguments as follows:

        seekg(offset, refposition);
        seekp(offset, refposition);

    The refposition takes one of the following three constants defined in the ios class:

    ios::beg        start of the file
    ios::cur        current position of the pointer
    ios::end        End of the file

    Pointer offset calls
    
    Seek call                   Action
    ----------------------------------------------------------------------------------
    fout.seekg(0, ios::beg);    Go to start
    fout.seekg(0, ios::cur);    Stay at the current position
    fout.seekg(0, ios::end);    Go to the end of file
    fout.seekg(m, ios::beg);    Move to (m+1)th byte in the file
    fout.seekg(m, ios::cur);    Go forword by m byte form the current position
    fout.seekg(-m, ios::cur);   Go backward by m bytes from the current position
    fout.seekg(-m, ios::end);   Go backward by m bytes from the end
*/