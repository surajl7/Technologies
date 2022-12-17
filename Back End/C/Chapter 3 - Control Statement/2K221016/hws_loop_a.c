//Loops:

/*
Ex. a] print below patter using nested loop
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *
*/

#include<stdio.h>
int main(){
    int count,i,j;
    
    printf("Enter size of pattern: ");
    scanf("%d",&count);

    for(i=0;i<count;i++){
        for(j=0;j<count;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}