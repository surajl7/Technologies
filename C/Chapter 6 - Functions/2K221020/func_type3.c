//Function:

/*
    3. NO return_type WITH argument
    Syntax: <func_name> (<argument>); //--> argument is (<data_type> <variable>)
    ex. void add(int a, int b);
*/

#include<stdio.h>

void add(int, int);

void main()
{
    int x,y;
    printf("\nEnter the values: \n");
    scanf("%d%d",&x,&y);

    add(x, y);
}

void add(a,b)
int a,b;
{
    int sum = a + b;
    printf("\nAddition is: %d\n",sum);
}


