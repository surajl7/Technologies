// Managing Console I/O Operations 

/*
Key Concepts:
    -   Streams
    -   Stream classes
    -   Unformatted output
    -   Character-oriented input/output
    -   Line-oriented input/output
    -   Formatted output
    -   Formatted functions
    -   Formatted flags
    -   Manipulators
    -   User-defined manipulators
*/

/*
    C++ supports all of C's rich set of I/O functions. We can use any of them in the C++
    programs. But we restrined from using them due to two reasons, first, I/O methods in 
    C++ supports the concepts of OOP and secondly, I/O methods in C cannot handle the user-
    defined data types such as class objects.

    C++ uses the concepts of stream and stream classes to implement its I/O operations 
    with the concole and disk file. We will discussed in this chapter, how stream classes
    support the console-oriented input-output operations.
*/

/*
C++ Streams:
    The I/O system in C++ is designed to work a wide variety of devices including terminals,
    disks, and tape drives. Although each device is very different, the I/O system supplies an
    interface to the programming that is independant of the actual device being accessed.
    This interface is known as stream.

    A stream is a sequence of bytes. It acts either as a source from which the input data can
    be obtained or as a destination to which the output data can be sent. The source stream
    that provides data to the program is called the input stream and the destination stream
    that receives output from the program is called the output stream. 
    In other words, a program extract the bytes from an input stream and inserts bytes into an 
    output stream as illustrated in below fig.

                                Input stream
    -------------           -------------------------------------
    |   Input   |---------->|   |   |   |   |   |   |   |   |   |----------
    |   device  |           -------------------------------------          |   extraction
    -------------                                                          |   from input
                                                                           |   stream
                                                                          \ /
                                                                       ---------
                                                                       |Program|
                                                                       ---------
                                                                           |    insertion
                                                                           |    into output
                                Output stream                              |    stream
    -------------           -------------------------------------          |
    |   Output  |---------->|   |   |   |   |   |   |   |   |   |<----------
    |   device  |           -------------------------------------
    -------------                                                     
                                Fig:  Data streams


    The data in the input stream can come from the keybord or any other stronge device.
    Similarly, the data in output stream can go to the screen or any other storage
    device. As mentined earlier, a stream acts as an interface between he program 
    and the input/output device. therefore, a C++ program handles data (input or output)
    independant of the devices used.

    C++ contains several pre-defined streams that are automatically opened when a program
    begins its executio. These include cin and cout Which have been used very often in our
    earlier programs. We know that cin represents the input stream connects to the standard
    input devices (usually the keyboard) and cout represent the output stream connected to the
    standard output devices (usally the screen). Note that the keyboard and the screen are
    default options. We can redirect streams to other devices or files. if necessary.
*/
