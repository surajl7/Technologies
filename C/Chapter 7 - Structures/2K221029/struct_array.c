/*Structute */

//Ex. Structure Array


#include<stdio.h>
void main()
{
    struct bookData{
        int id;
        char name[20];
        char author[20];
        float price;
    };

    //int count=5;

    struct bookData bData[5] = {{1,"C_Programming","cProgrammer",250.50},{2,"JavaProgramming","jProgrammer",750},{3,"PythonProgramming","pProgrammer",450.75},{4,"javaScript","jsProgrammer",674.00},{5,"SwiftProgrammer","sProgrammer",500}};

    printf("\nBook Data...\n");
    for(int i=0; i<5; i++){
        printf("%d | %s | %s | %.2f\n",bData[i].id,bData[i].name,bData[i].author,bData[i].price);
    }
}
