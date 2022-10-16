//Loops:

/*
Ex. b] Write a program to check if a number is prime or not.
*/

#include<stdio.h>
int main(){
    int num,i,flag=0;

    printf("\nEnter the number: ");
    scanf("%d",&num);

    if(num == 0 || num == 1){
        flag = 1;
    }

    for(i=2;i<=num/2;i++){
        if(num % i == 0){
            flag = 1;
            break;
        }
    }

    if (flag == 0){
        printf("\nNumber %d is a prime number\n\n",num);
    }else{
        printf("\nNumber %d is not a prime number\n\n",num);
    }
}