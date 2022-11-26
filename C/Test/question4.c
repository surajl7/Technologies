/*QUESTION4*/

/*Write a program to implement switch case for area of circule, triangle, rectangle, and square.*/

#include<stdio.h>
#include<math.h>
void main()
{
    int choise;
    int rad, base, height, len, b, side;
    float areaOfCircule, areaOfTriangle, areaOfRectangle, areaOfSquare;

    printf("\nChoose between following options: \n");
    printf("1. Area of circule\n");
    printf("2. Area of Triangle\n");
    printf("3. Area of Rectangle\n");
    printf("4. Area of Square\n");

    printf("\nEnter your choise: ");
    scanf("%d",&choise);

    switch(choise){
        case 1:
            printf("\nEnter radious of circule: ");
            scanf("%d",&rad);
            areaOfCircule = 3.14*pow(rad,2);
            printf("\nArea of circule = %.2f\n\n",areaOfCircule);
            break;

        case 2:
            printf("\nEnter base of triangle: ");
            scanf("%d",&base);
            printf("Enter height of triangle: ");
            scanf("%d",&height);
            areaOfTriangle = 0.5*base*height; 
            printf("\nArea of Triangle = %.2f\n\n",areaOfTriangle);
            break;

        case 3:
            printf("\nEnter lenght of rectangle: ");
            scanf("%d",&len);
            printf("Enter breadth of reactangle: ");
            scanf("%d",&b);
            areaOfRectangle = len * b;
            printf("\nArea of Rectangle = %.2f\n\n",areaOfRectangle);
            break;

        case 4: 
            printf("\nEnter side of square: ");
            scanf("%d",&side);
            areaOfSquare = pow(side,2);
            printf("\nArea of Square = %.2f\n\n",areaOfSquare);
            break;

        default:
            printf("\nInvalid option :(\n\n");
    }
}