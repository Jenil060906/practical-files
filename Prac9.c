#include <stdio.h>
int main()
{
    int marks;
    char grade;
    printf("ENTER YOUR MARKS(0-100):");
    scanf("%d", &marks);
    // USING IF STATEMENT TO DETERMINE THE RANGE OF MARKS AND ASSIGN THE GRADES.
    if (marks >= 0 && marks <= 100)
    {
        grade = (marks >= 90) ? 'A' : (marks >= 80) ? 'B'
                                  : (marks >= 70)   ? 'C'
                                  : (marks >= 60)   ? 'D'
                                                    : 'F';
        printf("YOUR GRADE IS:%c\n", grade);
    }
    else
    {
        printf("INVALID INPUT. PLEASE ENTER MARKS BETWEEN 0 AND 100.\n");
    }
    printf("\nTHIS CODE IS PREPARED BY 24CE141_JENIL VIRADIA.");
    return 0;
}