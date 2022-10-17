//String Operations

/*

0 - equal
+ve/-ve - not equal

6. strcmp
To compare two strings

Syntax -> strcmp(<to_string>,<with_string>);

7. stricmp
Comparing string by ignoring case

Syntax -> stricmp(<to_string>,<with_string>);

8. strncmp
Comparing strings first n characters with another string

Syntax -> strncmp(<to_string>,<with_string>,<n>);

9.strnicmp
Comparing strings first n characters with another by ignoring the case

*/

#include<stdio.h>
void main()
{
    char s1[20],s2[20];

    printf("\nEnter 1st string: ");
    gets(s1);

    printf("\nEnter 2nd string: ");
    gets(s2);

//==========================================================

/*
    //To compare two string
    int num = strcmp(s1,s2);
    if(num == 0){
        printf("\nStrings are equal\n");
    }
    else{
        printf("\nStrings are not equal\n");
    }
    printf("\nnum value is: %d\n",num);
*/

/*
    //Comparing strings by ignoring case
    int num = stricmp(s1,s2);
    if(num == 0){
        printf("\nStrings are equal\n");
    }
    else{
        printf("\nStrings are not equal");
    }
    printf("\nnum value is: %d\n",num);
*/

/*
    //Comparing strings 1st n characters with another string
    int num = strncmp(s1,s2,7);
    if(num == 0){
        printf("\nStrings are equal\n");
    }
    else{
        printf("\nStrings are not equal\n");
    }
    printf("\nnum value is: %d\n",num);
*/


    //Comparing strings first n characters with another by ignoring case
    int num = strnicmp(s1,s2,7);
    if(num == 0){
        printf("\nStrings are equal\n");
    }
    else{
        printf("\nStrings are not equal\n");
    }
    printf("\nnum value is: %d\n",num);

}

