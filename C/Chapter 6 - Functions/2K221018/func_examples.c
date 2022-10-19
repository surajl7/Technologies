//Functions:

/*

Ex.
1. Write a function to find the factorial of number
2. Reverse of number

*/

#include<stdio.h>
#include<math.h>

void fact();
int revNum(int num1);
int pldrm(int num1);
int arms(int num1);
int primeNum(int num1);

void main()
{
    fact();

    int num1;
    printf("\nEnter the number: ");
    scanf("%d",&num1);

    pldrm(num1);

    arms(num1);

    primeNum(num1);
}


//Factorial of number
void fact(){
    int num;
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
    int rev=0, d;

    printf("\nReverse of number ---> \n");

    while(num1 != 0){
        d = num1 % 10;
        rev = rev * 10 + d;
        num1 = num1 / 10;
    }
    printf("\nReverse of number is: %d\n",rev);
    return rev;

}


//Palindrome number
int pldrm(int num1){

    int n;
    n=revNum(num1);

    printf("\nChecking if Palindrome number ---> \n");

    int onum = num1;

    //printf("\nrevNum = %d\n",n);
    //printf("\nonum = %d\n",onum);


    if(onum == n){
        printf("\nNumber %d is palindrome\n",onum);
    }
    else{
        printf("\nNumber %d is not a palindrome\n",onum);
    }
}

//Armstrong number
int arms(int num1){

    printf("\nChecking if Armstrong number ---> \n");

    int onum, dnum, d, d1, count=0, sum;

    onum = num1;
    dnum = num1;

    while(dnum != 0){
        d = num1 % 10;
        count ++;
        dnum = dnum / 10;
    }

    while(num1 != 0){
        d1  = num1 % 10;
        sum = sum + pow(d1, count);
        num1 = num1/10;
    }

    if(onum == sum){
        printf("\nNumber %d is Armstrong number\n",onum);
    }
    else{
        printf("\nNumber %d is NOT a Armstrong number\n",onum);
    }
}


//Prime Number
int primeNum(int num1){

    printf("\nChecking if number is prime ---> \n");

    int i, flag = 0;

    if(num1 == 0 || num1 == 1){
        flag = 1;
    }

    for(i = 2; i<=num1/2; i++){
        if(num1 % i == 0){
            flag = 1;
            break;
        }
    }

    if(flag == 0){
        printf("\nNumber %d is prime number\n",num1);
    }
    else{
        printf("\nNumber %d is NOT a prime number\n",num1);
    }
}


