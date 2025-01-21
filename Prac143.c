#include <stdio.h>
void main()
{

    int i, j;
    char c;

    for (i = 1; i < 5; i++)
    {
        c = 'A';
        for (j = i; j < 5; j++)
        {
            printf("  ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%c ", c);
            c++;
        }
        c--;
        for (j = i - 1; j >= 1; j--)
        {
            c--;
            printf("%c ", c);
        }
        printf("\n");
    }
    printf("\n\nThis program is created by 24CE141_Jenil Viradia.");
}
