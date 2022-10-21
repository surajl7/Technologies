//Recursion:

/*
Recursion:
    - In recursion function calls itself
    - alternative for loops (while, do-while, if-else)
*/

//Ex. Factorial of number

#include<stdio.h>

int fout(int);

int main()
{
    int num, f;

    printf("\nEnter the number: ");
    scanf("%d",&num);

    f = fount(num);
    printf("\nfout is: %d\n",f);

    return 0;
}

int fount(int num){
    int f1 = 1;
    if(num == 1){
        return 1;
    }
    else{
        f1 = num * fount(num-1);
    }
    return f1;
}
