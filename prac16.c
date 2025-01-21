#include <stdio.h>
int main()
{
    int no_of_items, i, j;
    printf("ENTER NUMBER OF ITEMS:");
    scanf("%d", &no_of_items);
    float prices[no_of_items];
    printf("\n");
    printf("\nENTER PRICE OF PRODUCT:\n");
    // COLLECTING PRICES.
    for (i = 0; i < no_of_items; i++)
    {
        printf("ENTER %d ITEM:", i + 1);
        scanf("%f", &prices[i]);
    }
    float temp = 0;
    // SORTING GIVEN PRICES.
    for (i = 0; i < no_of_items - 1; i++)
    {
        for (j = 0; j < no_of_items - i - 1; j++)
        {
            if (prices[j] > prices[j + 1])
            {
                temp = prices[j];
                prices[j] = prices[j + 1];
                prices[j + 1] = temp;
            }
        }
    }
    printf("\n============\n");
    // DISPLAYING THE SORTED PRICES.
    printf("SHORTLIST OF ITEM'S PRICES:");
    printf("\n");
    for (i = 0; i < no_of_items; i++)
    {
        printf("%f\n", prices[i]);
    }
    printf("\n============\n");
    printf("THIS PROGRAM IS CREATED BY 24CE141_JENIL VIRADIA.");
    return 0;
}