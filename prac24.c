#include <stdio.h>

// Declare A Structure.
struct Book_Details
{
    char Title[100];      // Title Of Book.
    char Author_name[50]; // Name Of Author.
    float Amount_of_book; // Amount of Book.
} b;

// Function for Disply The Book Detail.
void disply();

void main()

{ // Given A Details By User.
    struct b;
    printf("\n______________________________________________");
    printf("\nEnter Name of book :");
    scanf("%s", b.Title);
    printf("\nEnter An Author Name :");
    scanf("%s", b.Author_name);
    printf("\nEnter a Amount of Book :");
    scanf("%f", &b.Amount_of_book);

    printf("\n\nBook Details Is Here !!! ");
    // Disply the Details Of Book.

    disply();
    printf("\n______________________________________________");
    printf("\nThis program is created by 24CE141_Jenil Viradia.");
}
void disply()
{
    printf("\n\nBook title is : %s", b.Title);
    printf("\nAuthor Name : %s", b.Author_name);
    printf("\nAmount of Book : %f", b.Amount_of_book);
}
