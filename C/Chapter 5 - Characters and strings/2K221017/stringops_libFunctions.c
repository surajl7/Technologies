//String Operations

/*

gets(); //to get the input string from user
puts(); //to print the string with spaces if in there

scanf("%s",%<string_name>);
//to get the input string from user, but when you'll print the
string it will not consider the spaces if present in string and print the
entier line of string as only one word(i.e. line string with no spaces)


String operations - Library functions:

1. strlen
To find the length of string

Syntax -> strlen(<string>);

2. strcpy
To copy string from one to another

Syntax -> strcpy(<to_string>,<from_string>);

3. strncpy
To Copy first n characters of string to another

Syntax -> strncpy(<to_string>,<from_string>,<n>);

4. strcat
To concatenate one string with another

Syntax -> strcat(<to_string>,<with_string>);

5. strncat
To concatenate first n characters of string with another

Syntax -> strncat(<to_string>,<with_string>,<n>);

*/

#include<stdio.h>
//#include<string.h>
void main()
{
    char s[20],s1[20],s2[20];
    int len, len1, len2;


    printf("\nEnter 1st string: ");
    gets(s1);

    printf("\nEnter 2nd string: ");
    gets(s2);

//  printf("\nEnter the scanf() string: ");
//  scanf("%s",s);


//To find the length of string

    len1 = strlen(s1);
    printf("\n1st String is: ");
    puts(s1);
    printf("\nLength of 1st string is: %d\n",len1);

    len2 = strlen(s2);
    printf("\n2nd string is: ");
    puts(s2);
    printf("\nLength of 2nd string is: %d\n",len2);

/*  len = strlen(s);
    printf("\nscanf() String is: %s\n",s);
    printf("\nLength of scanf() string is: %d\n",len);
*/

//============================================================


//To copy string from one to another
    strcpy(s1,s2);
    printf("\nString copy result is: ");
    puts(s1);
    len1 = strlen(s1);
    printf("\nLength of result string is: %d\n",len1);


//To copy first n characters of string to another
    strncpy(s1,s2,6);
    printf("\nString first n char copy result is: ");
    puts(s1);
    len1 = strlen(s1);
    printf("\nLength of result string is: %d\n",len1);


//TO concatenate one string with another
    strcat(s1,s2);
    printf("\nString concatenation result is: ");
    puts(s1);
    len1 = strlen(s1);
    printf("\nLength of result string is: %d\n",len1);


//To concatenate first n characters of string with another
    strncat(s1,s2,7);
    printf("\nString 1st n char concatenate result is: ");
    puts(s1);
    len1 =strlen(s1);
    printf("\nLength of result string is: %d\n",len1);

}
