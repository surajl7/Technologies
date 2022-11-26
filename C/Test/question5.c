/*QUESTION5*/

/*Write a program to find addition of first n number using recursion concept*/

#include<stdio.h>

int add(int);

int main()
{
    int num;

    printf("\nEnter the number: ");
    scanf("%d",&num);

    //add(num);
    printf("\nAddition of first %d number: %d\n\n",num,add(num));

    return 0;
}

int add(int n){
    int sum = 0;
    // int i=0;
    // while(i <= n){
    //     sum = sum + i;
    //     i++;
    // }

    if(n == 1){
        return 1;
    }
    else{
        sum = n + add(n-1);
    }

    return sum;
}