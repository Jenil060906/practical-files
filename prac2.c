// This program is prepared by 24CE141_Jenil Viradia.
#include <stdio.h>
int main()
{
    float length, breadth, Area, Perimeter;
    printf("Enter length:");
    scanf("%d", &length);
    printf("Enter breadth:");
    scanf("%d", &breadth);

    Area = (breadth * length);
    printf("Area of Plot of land is: %d", Area);

    Perimeter = 2 * (length + breadth);
    printf("\nPerimeter of Plot of land is: %d", Perimeter);
    printf("\nThis code is prepared by 24CE141_Jenil Viradia.");

    return 0;
}
