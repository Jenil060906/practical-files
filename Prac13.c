#include <stdio.h>
int main()
{
    int rows, columns;
    printf("ROWS SIZE:");
    scanf("%d", &rows);
    printf("COLUMNS SIZE:");
    scanf("%d", &columns);
    printf("\nMULTIPLICATION TABLE(%d*%d):\n", rows, columns);
    //FOR LOOP FOR ARRANGING ROWS.
    for (int i = 1; i <= rows; i++)
    {
        //FOR LOOP FOR ARRANGING COLUMNS.
        for (int j = 1; j <= columns; j++)
        {
            printf("%d\t", i * j);
        }
        printf("\n");
    }
    printf("\nTHIS CODE IS PREPARED BY 24CE141_JENIL VIRADIA.");
    return 0;
}