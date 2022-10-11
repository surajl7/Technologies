//data types

//binary 0,1
//conversion 8 bits = 1 byte

//integer --> int == 2 bytes
//float --> float == 4 bytes
//long --> long int == 4 bytes
//double --> double == 8 bytes
//long double --> long double == 10 bytes

#include<stdio.h>
void main()
{
    //character
    /*************************************
    char a;
    printf("\nEnter the character: ");
    scanf("%c",&a);

    printf("\nCharacter is %c",a);
    printf("\nsize of character = %d",sizeof(a));

    printf("\n");

    **************************************/

    //getchar()
    //putchar()

    /*************************************
    char b;
    printf("\nEnter new character: ");
    b = getchar();
    printf("Character is: ");
    putchar(b);
    printf("\n");

    *************************************/


    //String

    /************************************
    char s[20] = "Hello mom";
    printf("Your message: %s",s);
    printf("\n");
    //getch();
    ************************************/

    //Using printf and scanf
    //?Note: it omits the character string after space in between
    //Ex. If input --> " Hello Mom " | output --> " Hello "
    //Ex. If input --> " Hello_Mom " | output --> " Hello_Mom "

    /***********************************
    char s[20];
    printf("Enter your message: ");
    scanf("%s",&s);

    printf("Message: %s",s);
    ***********************************/

    //Using gets() and puts()
    //?Note: Unlike printf and scanf method gets() and puts() does not omits any spaces and prints user input everything as it is.
    //Ex. If input --> " Hello Mom " | output --> " Hello Mom "

    /**********************************
    char msg[20];
    printf("Enter your message: ");
    gets(msg);
    printf("Message: ");
    puts(msg);
    **********************************/

}


