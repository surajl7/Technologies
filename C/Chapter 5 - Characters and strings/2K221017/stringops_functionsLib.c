//String Operations

/*

10. strdup
To duplicate string

11. strlwr
Changing string case to lower

12. strupr
Changing string case to upper

13. strchr
Characters first occurrence in string

14. strrchr
Characters last occurrence in string

15. strstr
Strings first occurrence in string

16. strrev
String reverse

17. strset
print different character or symbols like * or #

18. strnset()
print different character or symbols like * or # from given location

*/


#include<stdio.h>
void main()
{
    char s1[20];

    printf("\nEnter the string: ");
    gets(s1);

//====================================================

    printf("\nString duplicate is: %s\n",strdup(s1));

    printf("\nString lower case: %s\n",strlwr(s1));

    printf("\nString upper case: %s\n",strupr(s1));

    printf("\nCharacters first occurrence in string: %s\n",strchr(s1,"S")); //-------->

    printf("\nCharacters last occurrence in string: %s\n",strrchr(s1,"S")); //-------->

    printf("\nString occurrence in string: %s\n",strstr(s1,"IS"));

    printf("\nString reverse: %s\n",strrev(s1));

    printf("\nString n set is: %s\n",strnset(s1,"#",4));

    printf("\nString set is: %s\n",strset(s1,"*"));

}
