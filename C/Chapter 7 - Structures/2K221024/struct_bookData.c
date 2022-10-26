/*Structure*/

/*
Ex. Books data
*/

#include<stdio.h>

int count=5;

struct bookData{
    int id;
    char name[20];
    char author[20];
    float price;
};

void operations(struct bookData bData[count]);
void displayAll(struct bookData bData[count],int);
int displaySearchData(struct bookData bData[count]);
void compairePrice(struct bookData bData[count]);

int main(){

    //printf("\nEnter book count: ");
    //scanf("%d",&count);

    //struct bookData bData[count];
/*
    printf("\nEnter book's details \n");
    for(int i=0; i<count; i++){
        printf("Book Id: ");
        scanf("%d",&bData[i].id);

        printf("Book name: ");
        scanf("%s",&bData[i].name);

        printf("Book author: ");
        scanf("%s",&bData[i].author);

        printf("Book Price: ");
        scanf("%f",&bData[i].price);

        printf("\n");
    }
*/
    //struct bookData bData[0] = {1,"C_Programming","cProgrammer",250.50};
    //struct bookData bData[1] = {2,"JavaProgramming","jProgrammer",750};

    struct bookData bData[5] = {{1,"C_Programming","cProgrammer",250.50},{2,"JavaProgramming","jProgrammer",750},{3,"PythonPRogramming","pPRogrammer",450.75},{4,"javaScript","jsPRogrammer",674.00},{5,"SwiftProgrammer","sProgrammer",500}};

    //printf("\n================================\n\n");

    operations(bData);

    return 0;
}

void operations(struct bookData bData[count]){
    int choice;
    do{
        printf("\n:::::::Menu::::::: \n \
                    1. Search a book \n \
                    2. Compare price \n \
                    3. Exit \n \
               ");

        printf("\nEnter your choice: ");
        scanf("%d",&choice);

        switch(choice){
            case 1:
                displaySearchData(bData);
            break;

            case 2:
                compairePrice(bData);
            break;

            case 3:

            break;

            default:
                printf("\nInvalid choice :(\n");
            break;
            }

    }while(choice != 3);
}


void displayAll(struct bookData bData[count], int ch){

    int a = displaySearchData(bData);

    for(int i=0; i<count; i++){
        if(a > 0 && a < 5){
            printf("\n%d | %s | %s | %.2f INR",bData[i].id,bData[i].name,bData[i].author,bData[i].price);
        }
        else if(ch == 5){
            printf("\n%d | %s | %s | %.2f INR",bData[i].id,bData[i].name,bData[i].author,bData[i].price);
        }
        else{
            printf("\nInvalid Data :( \n");
        }
    }

    printf("\n\n========================================\n\n");

}

int displaySearchData(struct bookData bData[count]){

    int ch;
    char data[20];

    do{
        printf("\n:::::::Search by::::::: \n \
                    1. Book Id \n \
                    2. Book Name \n \
                    3. Book Author \n \
                    4. Book price \n \
                    5. Display All Books Data \n \
                    6. Back to main menu \n \
                    7. Exit \n \
               ");

        printf("\n Your Choice: ");
        scanf("%d",&ch);


        switch(ch){
        case 1:
            printf("Enter Book Id: ");
        break;

        case 2:
            printf("Enter Book Name: ");
        break;

        case 3:
            printf("Enter Book Author: ");
        break;

        case 4:
            printf("Enter Book Price: ");
        break;

        case 5:
            printf("\nDisplaying All Books Data...\n");
            displayAll(bData,ch);
        break;

        case 6:
            operations(bData);
        break;

        case 7:

        break;

        default:
            printf("\nInvalid Input :(\n");
        break;

        }

        scanf("%s",data);

    }while(ch != 7);

    return ch;

}

void compairePrice(struct bookData bData[count]){
    int chs;
    float pr;
    int i, prf,prt,tmp;

    do{
        printf("\n:::::::OPTIONS::::::: \n \
               1. Search Book's by price \n \
               2. Search book price less than \n \
               3. Search book price greater than \n \
               4. Search condition \n \
               5. Exit... \n \
               ");

        printf("\nYour choice: ");
        scanf("%d",&chs);

        switch(chs){
        case 1:
                printf("\nEnter price: ");
                scanf("%f",&pr);
                for(int i=0; i<count; i++){
                    printf("\n%d | %s | %s | %.2f INR",bData[i].id,bData[i].name,bData[i].author,bData[i].price);
                }
        break;

        case 2:
                printf("\nEnter price: ");
                scanf("%f",&pr);
                for(int i=0; i<count; i++){
                    if(pr >= bData[i].price){
                        printf("\n%d | %s | %s | %.2f INR",bData[i].id,bData[i].name,bData[i].author,bData[i].price);
                    }
                    else{
                        printf("\nInvalid Data :(\n");
                    }
                }
        break;

        case 3:
                printf("\nEnter price: ");
                scanf("%f",&pr);
                for(int i=0; i<count; i++){
                    if(pr <= bData[i].price){
                        printf("\n%d | %s | %s | %.2f INR",bData[i].id,bData[i].name,bData[i].author,bData[i].price);
                    }
                    else{
                        printf("\nInvalid Data :(\n");
                    }
                }
        break;

        case 4:

            printf("\nEnter from price: ");
            scanf("%d",&prf);

            printf("\nEnter to price: ");
            scanf("%d",&prt);

            for(i=0; i<count; i++){
            if(prf <= bData[i].price && prt >= bData[i].price){
                tmp = i;
            }

            if(tmp != -1){
                printf("\n%d | %s | %s | %.2f INR",bData[tmp].id,bData[tmp].name,bData[tmp].author,bData[tmp].price);
            }
            else{
                printf("\nInvalid Data :(\n");
            }
            }


        break;

        default:
            printf("\nInvalid Data :(\n");
        break;
        }

    }while(chs != 4);
}

