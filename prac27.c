// Using Pointer Swap to Values..
#include <stdio.h>

void swap(float *a, float *b)
{ // Swap to Values.
    float temp;
    temp = *a;
    *a = *b;
    *b = temp;

    // Display Output

    printf("\nYour First Value Is : %.2f\nSecond Value Is : %.2f", *a, *b);
}

int main()
{
    float *p, *q, a, b;

    p = &a;
    q = &b;
    printf("Enter First Value :");
    scanf("%f", &a);
    printf("Enter Second Value :");
    scanf("%f", &b);

    swap(p, q);

    printf("\n\nThis program is created by 24CE141_Jenil Viradia.");
}
