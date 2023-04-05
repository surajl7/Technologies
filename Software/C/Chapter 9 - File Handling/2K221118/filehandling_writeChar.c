/*File Handling*/

/*Character Writing*/

#include<stdio.h>
void main()
{
    FILE *ptr;
    char ch;

    ptr = fopen("dataChar.txt","w"); /*Open file in write mode*/ 

    printf("\nEnter the data: ");
    ch = getchar();

    fputc(ch, ptr);

    fclose(ptr);   
}