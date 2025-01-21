#include <stdio.h>
void main()
{
    // take an input As number of Rows.
    int n, a; // n is a number of Rows.
    printf("Enter A Number Of Rows :");
    scanf("%d", &n);

    // process of print Pattern.
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        { // print a space
            printf("  ");
        }
        a = 1; // a is a  proccesing number for print 1 , 2 ,3 , ...
        for (int j = 1; j <= i; j++)
        { // print a number 1,2,3,...
            printf("%d ", a);
            a++;
        }
        printf("\n");
    }
    printf("\n\nThis program is created by 24CE141_Jenil Viradia.");
}