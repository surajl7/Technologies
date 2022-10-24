/*Structure*/

/*
Ex. Books data
*/

#include<stdio.h>

int count;

struct bookData{
    int id;
    char name[20];
    char author[20];
    float price;
};

void operations(struct bookData bData[count]);
void displayAll(struct bookData bData[count]);
void displaySearchData(struct bookData bData[count]);

int main(){

    printf("\nEnter book count: ");
    scanf("%d",&count);

    struct bookData bData[count];

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

    printf("\n================================\n\n");

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

            break;

            case 3:

            break;

            default:
                printf("\nInvalid choice :(\n");
            break;
            }

    }while(choice != 3);
}


void displayAll(struct bookData bData[count]){

    for(int i=0; i<count; i++){
        if(ch > 0 && ch < 5){
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
            displayAll(bData);
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

