/*File Handling*/

/*Reading the file*/

#include<stdio.h>
void main()
{
    FILE *p;
    char ch;
    //bool true;

    p = fopen("test.txt","r");

    printf("\n");

    while(1){
        ch = fgetc(p);

        if(ch == EOF)
        {
            break;
        }

        printf("%c",ch);
    }
    fclose(p);

    printf("\n\n");
}