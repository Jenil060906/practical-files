// PRINTING FIBONACCI SERIES.
#include <stdio.h>
int main()
{
    int n, i;
    unsigned long long first = 0, second = 1, next;
    // TAKING INPUT FROM THE USER.
    printf("ENTER NUMBER OF TERMS:");
    scanf("%d", &n);
    // DISPLAYING THE SERIES.
    printf("===FIBONACCI SERIES===\n");
    for (i = 0; i < n; i++)
    {
        if (i == 0)
        {
            printf("%llu", first);
        }
        else if (i == 1)
        {
            printf(",%llu", second);
        }
        else
        {
            next = first + second;
            printf(",%llu", next);
            first = second;
            second = next;
        }
    }
    printf("\n");
    printf("\nTHIS PROGRAM IS CREATED BY 24CE141_JENIL VIRADIA\n");
    return 0;
}