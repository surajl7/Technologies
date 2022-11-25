/*File Handling*/

/*String writing*/

#include<stdio.h>
void main()
{
    FILE *ptr;
    char ch;

    ptr = fopen("dataStr.txt","w"); /*Open file in write mode*/

    printf("\nEnter the string: ");
    while((ch=getchar()) != '\n'){  /*Input string from user till it clicks Enter button*/
        fputc(ch, ptr);             /*Printing character string*/
    }

    fclose(ptr);                    /*Close the file*/
}