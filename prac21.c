#include <stdio.h>
#include <math.h>
// Function Declaration.
int ValidTriangle(float a, float b, float c);
float Area(float a, float b, float c);

void main()
{
    float a, b, c; // a b and c is a variables for Tringle's Sides.

    // Input A triangle's Sides for User.
    printf("\nEnter the lengths of the three sides of the triangle:\n");
    printf("Side 1: ");
    scanf("%f", &a);
    printf("Side 2: ");
    scanf("%f", &b);
    printf("Side 3: ");
    scanf("%f", &c);

    // Check The Inputed Sides Is Makes A triangle.
    if (ValidTriangle(a, b, c))
    {
        // Calculating the area
        float area = Area(a, b, c);
        printf("The area of the triangle is: %f\n", area);
    }
    else
    {
        printf("The given lengths cannot form a triangle.\n");
    }
    printf("\nThis program is created by 24CE141_Jenil Viradia.");
}
int ValidTriangle(float a, float b, float c)
{
    return (a + b > c) && (a + c > b) && (b + c > a);
}

float Area(float a, float b, float c)
{
    float s = (a + b + c) / 2;                    // Semi perimeter
    return sqrt(s * (s - a) * (s - b) * (s - c)); // Heron's formula
}