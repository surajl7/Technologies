//Control structure
//1. Decision making

//control structure - ladder --> if-else

//Ex. Student Mark-sheet

#include<stdio.h>
void main()
{
    char name[20];

    printf("\nEnter your name: ");
    gets(name);

    float sub1, sub2, sub3, totalMarks, per;

    printf("\nEnter marks for subject1: ");
    scanf("%f",&sub1);

    printf("\nEnter marks for subject2: ");
    scanf("%f",&sub2);

    printf("\nEnter marks for subject3: ");
    scanf("%f",&sub3);

    totalMarks = sub1 + sub2 + sub3;
    printf("\nTotal Marks optane: %.2f\n",totalMarks);

    per = (totalMarks/300)*100;
    printf("\nPercentage: %.2f %\n",per);

    if (per >= 80 && per < 100)
    {
        printf("\nCongratulations %s! you have passed with distinction\n",name);
    }
    else if (per >= 70 && per < 80)
    {
        printf("\nCongratulations %s! you have passed first class\n",name);
    }
    else if (per > 60 && per < 70)
    {
        printf("\nCongratulations %s! you have passed second class\n",name);
    }
    else if (per > 40 && per < 60)
    {
        printf("\nCongratulations %s! you are passed\n",name);
    }
    else
    {
        printf("\nResult - Fail\n");
    }

}


//?Note:
//if you are doing multiplication or division operation or both
//you should compulsory take variable in datatype "float"
