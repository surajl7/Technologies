// Working With Files

// Open(): File Modes

/*
Syntax:
    stream-object.open("filename", mode);

File mode parameters:
    Parameter           Meaning
    -------------------------------------------------------------------
    ios::app            Append to end-of-file
    ios::ate            Go to end-of-file on opening 
    ios::binary         Binary file
    ios::in             Open file for reading only
    ios::nocreate       Open fails if the file does not exist
    ios::noreplace      Open fails if the file already exists
    ios::out            Open file for writing only
    ios::trunc          Delete the contents of the file if it exists

NOTE:
    1.  Opening a file in ios::out mode also opens it in the ios::trunc mode by default.
    2.  Both ios::app and ios::ate takes us to the end of file when it is opened.
        The different between the two parameters is that the ios::app allows us to add
        data to the end of the file only, while ios::ate mode permits us to add data or
        to modify the existing data anywhere in the file. In both the cases, a file is created
        by the specific name, if it does not exist.
    3.  The parameter ios::app can be used only with the file capable of output.
    4.  Creating a stream using ifstream implies input and creating a stream using 
        ofstream implies. so in these cases it is not necessary to provide the mode 
        parameters.
    5.  The fstream class does not provide a mode by default and therefor, we must provide
        the mode explicitly when using an object of fstream class.
    6.  The mode can compile two or more parameters using the bitwise OR operator(symobol |)
        as shown below:

            fout.open("data", ios::app | ios::nocreate)

        This opens the file in the append mode but fails to open the file if it does not exist.
*/