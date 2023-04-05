//String

/*

Ex. Print below pattern

if string is "computer"
then pattern should be -->

c
c o
c o m
c o m p
c o m p u
c o m p u t
c o m p u t e
c o m p u t e r

*/


#include<stdio.h>
//#include<string.h>
void main()
{
    char s1[20];
    int len;

    printf("\nEnter the string: ");
    gets(s1);
    //scanf("%s",&s1);

    printf("\nThe string is: %s\n",s1);

    len = strlen(s1);
    printf("\nLength of string is: %d\n",len);

    //Printing string pattern
    printf("\nThe pattern is: \n");
    for(int i=0;i<=len;i++){
        for(int j=0;j<i;j++){
            printf("%c ",s1[j]);
        }
            printf("\n");
    }

}
