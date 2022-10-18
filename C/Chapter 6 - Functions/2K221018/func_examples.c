//Functions:

/*

Ex.
1. Write a function to find the factorial of number
2. Reverse of number

*/

#include<stdio.h>

int fact();
int revNum(int num1);

void main()
{
    int num1;

    printf("\nEnter the number: ");
    scanf("%d",&num1);

    fact();
    revNum(num1);
}


//Factorial of number
int fact(int num){
    //int num;
    int i = 1;
    int fact = 1;

    printf("\nFactorial of Number ---> \n");

    printf("\nEnter the number: ");
    scanf("%d",&num);

    for(int i=1;i<=num;i++){
        fact = fact * i;
    }

//    while(i<=num){
//        fact = fact * i;
//        i++;
//    }

    printf("\nFactorial of %d: %d! = %d\n",num,num,fact);

}

//reverse of number
int revNum(int num1){
    int rev, d;

    printf("\nReverse of number ---> \n");

    while(num1 != 0){
        d = num1 % 10;
        rev = rev * 10 + d;
        num1 = num1 / 10;
    }
    printf("\nReverse of number is: %d\n",rev);

}







