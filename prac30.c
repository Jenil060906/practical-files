/*#include <stdio.h>
void main()
{
    FILE *F1;
    char name[50], rev_note[50];
    int i, j;
    int length = 0;
    int number;
    F1 = fopen("revers", "w");

    printf("Enter a string =  ");
    gets(name);

    fclose(F1);

    F1 = fopen("revers", "r");
    printf("\n Display :\n");

    for (i = 0; name[i] != '\0' /*(name=getw(F1))!=EOF; i++)
        length++;

    for (i = length - 1, j = 0; i >= 0; i--, j++)
        rev_note[j] = name[i];
    rev_note[j] = '\0';
    printf("\nThe reverse note is :");
    puts(rev_note);
    fclose(F1);
    printf("\n24CE049_Harshil");
}*/
#include <stdio.h>
void main()
{
    FILE *F1;
    int number, i;
    printf("Enter marks :");
    F1 = fopen("marks", "w");
    for (i = 0; i <= 5; i++)
    {
        scanf("%d", &number);
        putw(number, F1);
    }
    fclose(F1);
    F1 = fopen("marks", "r");
    printf("\n Display the marks\n");
    while ((number = getw(F1)) != EOF)
        printf("%d ", number);
    fclose(F1);
    printf("\n24CE049_HARSHIL");
}