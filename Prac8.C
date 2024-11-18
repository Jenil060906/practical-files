// This program is prepared by 24CE141_Name:Jenil Viradia.
#include <stdio.h>
int main()
{
    int choice, total = 0;
    printf("WELCOME TO FOODIES!\n");
    printf("MENU:\n");
    printf("1:BURGER:RS150\n");
    printf("2:PIZZA:RS200\n");
    printf("3:PASTA:RS120\n");
    printf("4:SANDWICH:RS100\n");
    printf("5:FRENCHFRIES:RS80\n");
    printf("ENTER THE NUMBER CORRESPONDING TO THE ITEM YOU WANT TO ORDER.\n");
    printf("ENTER '0' TO FINISH YOUR ORDER.\n");
    // USING DO-WHILE  LOOP TO ADD THE PRICES OF CORRESPONDING ITEMS.
    do
    {
        printf("YOUR CHOICE:");
        scanf("%d", &choice);
        // USING SWITCH CASE TO SELECT THE GIVEN CHOICES.
        switch (choice)
        {
        case 1:
            total += 150;
            printf("BURGER ADDED. TOTAL:RS%d\n", total);
            break;
        case 2:
            total += 200;
            printf("PIZZA ADDED. TOTAL:RS%d\n", total);
            break;
        case 3:
            total += 120;
            printf("PASTA ADDED. TOTAL:RS%d\n", total);
            break;
        case 4:
            total += 100;
            printf("SANDWICH ADDED. TOTAL:RS%d\n", total);
            break;
        case 5:
            total += 80;
            printf("FRENCHFRIES ADDED. TOTAL:RS%d\n", total);
            break;
        case 0:
            printf("ORDER COMPLETED.\n");
        default:
            printf("INVALID CHOICE. PLEASE SELECT A VALID OPTION.\n");
            break;
        }
    } while (choice != 0);
    printf("YOUR TOTAL BILL IS:%d\n", total);
    printf("\nTHIS CODE IS PREPARED BY 24CE141_JENIL VIRADIA.");
    return 0;
}