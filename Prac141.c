#include <stdio.h>
int main()
{
    char rows, i, j;
    printf("NUMBER OF ROWS:");
    scanf("%d", &rows);
    // FOR LOOP FOR ARRANGING ROWS.
    for (i = 1; i <= rows; i++)
    {
        // FOR LOOP FOR ARRANGING COLUMNS.
        for (j = 1; j <= i; j++)
        {
            if (j % 2 == 0)
            {
                printf("0 ");
            }
            else
            {
                printf("1 ");
            }
        }
        printf("\n");
    }
    printf("\nTHIS CODE IS PREPARED BY 24CE141_JENIL VIRADIA.");
    return 0;
}