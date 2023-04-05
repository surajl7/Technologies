/*File Handling*/

/*Read and Write operation on file - Structure*/

#include<stdio.h>

struct students{
    char name[20];
    int height;
};

void main()
{
    int count;

    printf("\nEnter the count: ");
    scanf("%d",&count);

    struct students ptr1[count], ptr2[count];

    FILE *fptr;
    int i;

    fptr = fopen("File.txt","wb");    /*Open file in write binary Mode*/
    printf("\n");
    for(i=0;i<count;i++){
        fflush(stdin);

        printf("Enter name: ");
        gets(ptr1[i].name);

        printf("Enter height: ");
        scanf("%d",&ptr1[i].height);

        printf("\n");
    }

    fwrite(ptr1, sizeof(ptr1), 1, fptr);
    fclose(fptr);                       /*Close the file*/
    
    fptr = fopen("File.txt","rb");     /*Open file in read binary mode*/
    fread(ptr2, sizeof(ptr2), 1, fptr);
    printf("\n");
    for(i=0;i<count;i++){
        printf("Name:  %s | height: %d",ptr2[i].name,ptr2[i].height);
        printf("\n");
    }
    fclose(fptr);                      /*Close the file*/

    printf("\n");
}