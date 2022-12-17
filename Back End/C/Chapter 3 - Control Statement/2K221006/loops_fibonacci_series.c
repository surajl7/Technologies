//Loops

//Ex. Fibonacci Series

/*?Note:
==> Fibonacci numbers, commonly denoted Fn
==> Fibonacci sequence, in which each number is the sum of the two preceding ones.
==> The sequence commonly starts from 0 and 1
==> Starting from 0 and 1, the next few values in the sequence are:
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, ...
*/

#include<stdio.h>
void main()
{
    int f1,f2,fs,limit;

    printf("Enter Start of series: ");
    scanf("%d",&f1);

    printf("Enter Limit of the series: ");
    scanf("%d",&limit);

    f2 = f1+1;
    printf("%d\n%d\n",f1,f2);
    //fs = f1 + (f1+1);

    while(limit != 0){
        fs = f1 + f2;

		printf("%d\n",fs);
		//printf("\n%d + %d = %d",f1,f2,fs);

        f1 = f2;
        f2 = fs;

        limit--;
    }
}

