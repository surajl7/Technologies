//Recursion

//Ex. Sum of first n numbers

#include<stdio.h>

int sumNum(int);

int main()
{
    int x,y;

    printf("\nEnter the number: ");
    scanf("%d",&x);

    y = sumNum(x);

    printf("\nSum of first %d natural numbers is: %d\n",x,y);

    return 0;
}

int sumNum(int num){
    int sum=0;

    if(num == 1){
        return 1;
    }
    else{
        sum = num + sumNum(num-1);
    }

    return sum;
}
