// Working with files

/*
Opening and closing a file:
    If we want to use a disk file, we need to decide the following things about the file
    and its intended use:

    1.  Suitable name for the file
    2.  Data type and structure.
    3.  Purpose.
    4.  Opening methods

    Details of file stream classes

    Class         Contents
    ------------------------------------------------------------------------------------
    filebuf       Its purpose is to set the file buffers to read and write. Contains
                  Openprot constant use in the file open() of file stream classes.
                  Also constin close() and open() as members.

    fstreambase   Provide operations common to the file streams. Serves as a base for
                  fstream, ifstream and ofstream class. Contains open() and close()
                  functions.
    
    ifstream      Provides input operations. Contains open() with default input mode.
                  Inherits the functions get(), getline(), read(), seekg(), and tallg()
                  functions from istream.

    Ofstream      Provides output operations. Constains open() with default output mode.
                  Inherits put(), seekp(), tellp() and write(), function from ostream.
    
    fstream       Provides support for simultaneous input and output operations.
                  Contains open() with default input mode. Inherits all the functions
                  from istream and ostream classes through iostream.

    The file can be opened in two ways:
        1.  Using the constructor function of the class.
        2.  Using the member function open() of the class.

    The first method is useful when we use only one file in the stream.
    The second method is used when we want to manage multiple files using one stream.
*/