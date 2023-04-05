/*File Handling*/

/*
File Handaling: 

    1. Create
        1.1 Create file manually
        1.2 Create file automaticaly with write function
          
    2. Open 
        2.1 Syntax:
            p = fopen("<file_name>","<mode>");

    3. Read
        3.1 To read the file following commands are used
        fgetc(); --> read character in file
        fgets(); --> read string in file
        fscanf(); 
        fread();

    4. Write
        4.1 To write or edit the file, following commands are used
        fputc();
        fputs();
        fprintf();
        fwrite();

    5. Close
        5.1 To close the file
        fclose();

    ---------------------------------------------
    |  Description |   Character   |   Binary   |
    ---------------------------------------------
    |   read       |    r          |    rb      |
    |   write      |    w          |    wb      |
    |   append     |    a          |    ab      |
    |   r/w        |    r+         |    rb+     |
    |   w/r        |    w+         |    wb+     |
    |   r/w        |    a+         |    ab+     |
    ---------------------------------------------

*/

#include<stdio.h>
void main()
{
    FILE *p;                        /*Initialise file as pointer "p"*/
    char ch;                        /*Character data type declaration*/

    p = fopen("test.txt","r");      /*Open file in read mode*/

    ch = fgetc(p);                  /*Get 1st character from file*/

    printf("\nCharacter: %c\n",ch); /*Display character on command promt*/

    fclose(p);                      /*Close file*/

    printf("\n");
}