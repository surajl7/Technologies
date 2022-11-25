/*File Handling*/

/*Ex. Display C program on console*/

#include<stdio.h>
void main()
{
    FILE *ptr;
    char ch;

    ptr = fopen("filehandling_writeStr.c","r");

    printf("\n\n");

    while(1){
        ch = fgetc(ptr);
        if(ch == EOF){      /*EOF = End of File*/
            break;
        }
        printf("%c",ch);
    }
    fclose(ptr);

    printf("\n\n");

}