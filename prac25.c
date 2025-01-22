// Library Book Issued/unIssued Management System Using Union In C language.
#include <stdio.h>
#include <string.h>
// Declare Union And initialize.
union library
{
    char book_title[25];
    char Author[25];
    float price;
    int accession_number;
};

int main()
{
    union library book;
    int flag = 0, acc_num;
    char book_name[25];
    char name[25];
    float pay;

    // Input By User.
    printf("Enter Book Name :");
    gets(book.book_title);
    strcpy(book_name, book.book_title);

    printf("Enter Author Name :");
    gets(book.Author);
    strcpy(name, book.Author);

    printf("Enter Amount of book :");
    scanf("%f", &book.price);
    pay = book.price;

    printf("Acession Number :");
    scanf("%d", &book.accession_number);
    printf("\n\nEnter Accession Number Of The Book :");
    scanf("%d", &acc_num);

    if (acc_num == book.accession_number)
    {
        printf("Book Is Issued..\n\n");

        // Display Output
        printf("-----------------------------------------------");
        printf("\n\t\tBook Details :");
        printf("\nBook title :");
        puts(book_name);
        printf("Author Name :");
        puts(name);
        printf("Price  :   %.2f Rs\n", pay);
        printf("Accession Number : %d\n", acc_num);
        printf("-----------------------------------------------");
        flag = 1;
    }

    if (flag == 1)
    {
        printf("\n\nThis program is created by 24CE141_Jenil Viradia.");
        return 0;
    }
    else
    {
        printf("\nBook Is Not Issued !!!");
        printf("\n\nThis program is created by 24CE141_Jenil Viradia.");
    }
}