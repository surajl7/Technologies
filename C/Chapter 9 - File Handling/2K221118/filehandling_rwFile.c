/*File Handling*/

/*Reading and writing data file*/

#include<stdio.h>
void main()
{
    FILE *fp;
    char ch;

    fp = fopen("one.txt","w");
    printf("\nEnter the data: ");
    while((ch = getchar()) != '\n'){
        fputc(ch, fp);
    }

    fclose(fp);

    printf("\nData in file: \n");
    fp = fopen("one.txt","r");
    while(1){
        ch = fgetc(fp);
        if(ch == EOF){
            break;
        }
        printf("%c",ch);
    }

    printf("\n\n");
    fclose(fp);
}