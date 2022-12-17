//Control structure
//1. Decision making

//control structure - if-else

//Ex. To find profit or loss
//?Note: cp - Cost Price and sp - selling price
//SP > CP --> Profit
//CP > SP --> Loss


#include<stdio.h>
void main()
{
    int cp,sp;

    printf("\nEnter Cost price of a product: ");
    scanf("%d",&cp);

    printf("\nEnter Selling price of a product: ");
    scanf("%d",&sp);

    if(sp>cp)
    {
        printf("\nSeller has made PROFIT of unit --> %d\n",sp-cp);
    }
    else
    {
        printf("\nSeller has made LOSS of unit --> %d\n",sp-cp);
    }
}
