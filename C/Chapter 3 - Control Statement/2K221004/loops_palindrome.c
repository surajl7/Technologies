//Loops

//Ex. Palindrome
//?Note:
//reverse of number is same as the original number
//E.g. num = 121   |   reverse of number = 121   |   There for number is palindrome
//E.g. num = 123   |   reverse of number = 321   |   There for number is not a palindrome

#include<stdio.h>
void main()
{
    int num, rev, d,onum;

    printf("\nEnter the number: ");
    scanf("%d",&num);

    onum = num;

    while (num != 0)
    {
        d = num % 10;
        rev = rev * 10 + d;
        num = num /10;
    }
    printf("\nReverse of number is: %d\n",rev);
    if (onum == rev)
    {
        printf("\nThe is Palindrome\n");
    }
    else
    {
        printf("\nThe number is not a Palindrome\n");
    }
}
