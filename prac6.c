// This program is prepared by 24CE141_Jenil Viradia.
#include <stdio.h>
int main()
{
    // Fixed numbers
    double n1;
    double n2;
    char operator;
    double result;
    printf("Enter the Number 1:");
    scanf("%lf", &n1);
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);
    printf("Enter the Number 2:");
    scanf("%lf", &n2); // Note the space before %c to consume any trailing newline.
    // Perform the operation based on the entered operator.
    switch (operator)
    {
    case '+':
        result = n1 + n2;
        printf("The result of %.2f + %.2f is %.2f\n", n1, n2, result);
        break;
    case '-':
        result = n1 - n2;
        printf("The result of %.2f - %.2f is %.2f\n", n1, n2, result);
        break;
    case '*':
        result = n1 * n2;
        printf("The result of %.2f * %.2f is %.2f\n", n1, n2, result);
        break;
    case '/':
        if (n2 != 0)
        {
            result = n1 / n2;
            printf("The result of %.2f / %.2f is %.2f\n", n1, n2, result);
        }
        else
        {
            printf("Error: Division by zero is not allowed.\n");
        }
        break;
    default:
        printf("Error: Invalid operator. Please enter one of the following: +, -, *, /.\n");
        break;
    }
    printf("\nThis code is prepared by 24CE141_Jenil Viradia.");
    return 0;
}