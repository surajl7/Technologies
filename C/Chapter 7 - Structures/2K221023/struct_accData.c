/*Structure:*/

/*Ex. Account details*/

#include<stdio.h>

int count, choice;

struct accountDetails{
    int no;
    char name[20];
    float bal;
    char accType[20];
};

void operations();
void displayAll();
void displayDataSearch(struct accountDetails acc[count]);
void balCond(struct accountDetails acc[count]);

int main()
{
    //int count;
    printf("\nEnter the number of accounts: ");
    scanf("%d",&count);

    struct accountDetails acc[count];

    printf("\nEnter account details \n");
    for(int i=0; i<count; i++){
        printf("Account Number: ");
        scanf("%d",&acc[i].no);

        printf("Name: ");
        scanf("%s",&acc[i].name);

        printf("Balance: ");
        scanf("%f",&acc[i].bal);

        printf("Account Type: ");
        scanf("%s",&acc[i].accType);

        printf("\n");
    }

    printf("\n====================================\n\n");

    operations(acc);

    return 0;
}

void operations(struct accountDetails acc[count]){
    do{
        printf("choose between following options: \n \
                    1. Display all data \n \
                    2. Search between data \n \
                    3. Balance condition \n \
                    4. Exit \n \
               ");

        printf("\nEnter your choice: ");
        scanf("%d",&choice);

        switch (choice){
            case 1:
                displayAll(acc);
            break;

            case 2:
                displayDataSearch(acc);
            break;

            case 3:
                balCond(acc);
            break;

            case 4:
                printf("\nThank you for banking with us!! :)\n");
            break;

            default:
                printf("\nInvalid option :( \n");
        }

        printf("\n=================================\n\n");

    }while(choice != 4);

}


void displayAll(struct accountDetails acc[count]){

    printf("\nDisplaying All Data...\n");
    //printf("\nAccountNo | Name | Balance | AccountType\n");
    for(int i=0; i<count; i++){
        printf("%d | %s | %.2f | %s\n",acc[i].no,acc[i].name,acc[i].bal,acc[i].accType);
    }
    printf("\n");
}

void displayDataSearch(struct accountDetails acc[count]){
    //printf("\nchoice is %d\n",choice);

    int choice;
    char data[20];

    do{
    printf("\nSearch by: \n \
                1. Account number \n \
                2. Name \n \
                3. Balance \n \
                4. Account type \n \
                5. Back to main menu \n \
           ");

    printf("\nYour choice: ");
    scanf("%d",&choice);

    switch(choice){
    case 1:
        printf("\nEnter account number: ");
    break;

    case 2:
        printf("\nEnter Name: ");
    break;

    case 3:
        printf("\nEnter balance: ");
    break;

    case 4:
        printf("\nEnter Account Type: ");
    break;

    case 5:
        printf("\nExiting...\n\n");
        operations(acc);
    break;

    default:
        printf("\nInvalid choice :(");
    break;
    }

    scanf("%s",&data);

    for(int i=0; i<count; i++){
        int value1 = stricmp(data, acc[i].name);
        int value2 = stricmp(data, acc[i].accType);
        if(atoi(data) == acc[i].no || value1 == 0 || strtof(data) == acc[i].accType || value2 == 0){
            printf("%d | %s | %.2f | %s\n",acc[i].no,acc[i].name,acc[i].bal,acc[i].accType);
        }
    }

    //printf("\nChoice: %d",choice);
    }while(choice != 5);

}

void balCond(struct accountDetails acc[count]){

    float amount;
    int choice;

    printf("Search account: \n \
            1. Balance \n \
            2. Balance greater than amount \n \
            3. Balance less than amount \n \
            4. Back to main menu \n \
           ");

    printf("\nEnter choice: ");
    scanf("%d",&choice);

    printf("\n\nEnter the amount: ");
    scanf("%f",&amount);

    switch (choice){
    case 1:
            for(int i=0; i<count; i++){
                if (amount == acc[i].bal){
                    printf("%d | %s | %.2f | %s\n",acc[i].no,acc[i].name,acc[i].bal,acc[i].accType);
                }
                else{
                    printf("\nNo Data\n")
                }
            }
    break;

    case 2:
            for(int i=0; i<count; i++){
                if (amount < acc[i].bal){
                    printf("%d | %s | %.2f | %s\n",acc[i].no,acc[i].name,acc[i].bal,acc[i].accType);
                }
                else{
                    printf("\nNo Data\n")
                }
            }
    break;

    case 3:
            for(int i=0; i<count; i++){
                if (amount > acc[i].bal){
                    printf("%d | %s | %.2f | %s\n",acc[i].no,acc[i].name,acc[i].bal,acc[i].accType);
                }
                else{
                    printf("\nNo Data\n")
                }
            }
    break;

    case 4:
            //printf("\nExiting...\n\n");
            operations(acc);
    break;

    default:
        printf("\nInvalid data :(\n");
    break;

    }

}
