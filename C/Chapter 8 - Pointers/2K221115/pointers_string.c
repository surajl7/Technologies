/*Pointers*/

/*Pointer to string*/

#include<stdio.h>
#include<string.h>
void main()
{
    char s[20];
    char *p;
    int l;

    printf("\nEnter the string: ");
    // scanf("%s",&s);
    gets(s);

    p = &s[0];

    l = strlen(s);
    for(int i = 0; i < l; i++){
        printf("\nCharacter = %c | Address = %x\n",*p,p);
        p++;
    }

    printf("\n");
}