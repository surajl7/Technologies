/*Functions: */

#include<iostream>
using namespace std;
#include<math.h>

//function declaration ---> 

int fact(int);

int revNum(int);

int pldrm(int);

int arms(int);

int primeNum(int);


// function defination --->

//Factorial of number
int fact(int num1){
    int fact_num = 1;
    for (int i = 1; i <= num1; i++){
        fact_num = fact_num * i;
    }
    return fact_num;
}

//reverse of number
int revNum(int num1){
    int rev_num = 0, d;

    while(num1 != 0){
        d = num1 % 10;
        rev_num = rev_num * 10 + d;
        num1 = num1 / 10;
    }

    return rev_num;
}

//palindrome number
int pldrm(int num1){

    int rev_num = revNum(num1);

    return (rev_num == num1);
}

//Armstrong number
int arms(int num1){
    int onum = num1;
    int count = 0;
    int d, d1, sum;

    while (num1 != 0){
        d = num1 % 10;
        count ++;
        num1 = num1 / 10;
    }

    while (onum != 0){
        d1 = onum % 10;
        sum = sum + pow(d1, count);
        onum = onum / 10;
    }
    return sum;
}

//Prime number:
int primeNum(int num1){

    if (num1 == 0 || num1 == 1){
        return 1;
    }

    for (int i = 2; i <= num1/2 ; i++){
        if (num1 % i == 0){
            return 1;
            break;
        }
    }
    return 0;
}


// function call ---> 

int main()
{
    int n;

    cout << "\nEnter thr number: ";
    cin >> n;

    cout << "\nFactorial of " << n << " is " << fact(n) << "\n";

    cout << "\nReverse of " << n << " is " << revNum(n) << "\n";

    if (pldrm(n) == true){
        cout << "\n" << n << " is a palindrom number\n";
    }
    else{
        cout << "\n" << n << " is not a palindrom number\n";
    }

    if (arms(n) == n){
        cout << "\n" << n << " is a armstrong number\n";
    }    
    else{
        cout << "\n" << n << " is not a armstrong number\n";
    }

    if (primeNum(n) == 0){
        cout << "\n" << n << " is a prime number\n";
    }
    else{
        cout << "\n" << n << " is not a prime number\n";
    }

    cout << "\n";

    return 0;
}